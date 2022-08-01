#pragma execution_character_set("utf-8")
#include "MapTest.h"


MapTest::MapTest(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

	ui.paintWidget->installEventFilter(this);
	ui.small_label->installEventFilter(this);
	ui.main_windows_label->installEventFilter(this);

	ui.main_windows_label->setScaledContents(true);

}

//读取Txt按钮
void MapTest::on_read_pushButton_clicked()
{
	m_mapData.clear();
	filTexyename = QFileDialog::getOpenFileName(this, "打开晶元图", "../../chip", "Images(*.txt)");
	ReadMapTxtFile();
	ui.label->setText(" 读取完成！! !" );

}

//读txt
void MapTest::ReadMapTxtFile()
{
	QFile file(filTexyename);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
		return;

	QVector<QByteArray> fileText;
	int nMaxSize = 0;
	while (!file.atEnd())
	{
		QByteArray line = file.readLine();
		if (nMaxSize < line.size())
		{
			nMaxSize = line.size();
		}
		fileText.push_back(line);
	}
	QVector<QByteArray> mapData;
	for (auto it : fileText)
	{
		if (it.size() == nMaxSize)
		{
			mapData.push_back(it);
		}
	}
	for (size_t i = 0; i < mapData.size(); i++)
	{
		for (size_t j = 0; j < mapData.at(i).size()-1; j++)
		{
			//m_ChipData.insert(PosData(j, i), ChipData(mapData.at(i).at(j)));
			m_mapData[i].insert(j, mapData.at(i).at(j));
		}
	}
	
	map_max_row = nMaxSize;

	map_max_column = m_mapData.count();
	
	max = (map_max_row > map_max_column) ? map_max_row : map_max_column;

	getchar();

}

//显示晶元按钮
void MapTest::on_change_pushButton_clicked()
{
	rodegrees = 0;
	key = true;
	update(); //刷新显示
	ui.x_spinBox->setMaximum(map_max_row - 2);
	ui.y_spinBox->setMaximum(map_max_column - 1);
}

//事件过滤器
bool MapTest::eventFilter(QObject *watched, QEvent *event)
{
	if (watched == ui.paintWidget && event->type() == QEvent::Paint)
		if ( event->type() == QEvent::Paint)
		Paint();

	if (watched == ui.small_label && event->type() == QEvent::Paint)
		Paint_Secondary();
	

	if (watched == ui.main_windows_label && event->type() == QEvent::Paint)
		Paint_rectangle();
	
	
	return QWidget::eventFilter(watched, event);
	
}


//画晶元
void MapTest::Paint()
{

	if (m_mapData.isEmpty()) { return; }

	int red_num = 0, blue_num = 0, gray_num = 0;

	if (key)
	{
		int win_width = max * rSide;
		int win_height = max * rSide;


		QMap<int, char> aa;//用于存储m_mapData临时变量
		int pp = 0;//用于循环读取Txt

		//画图片晶元
		QPainter p(this);
		QPixmap map(win_width, win_height);
		map.fill(Qt::transparent);
		p.begin(&map);

		QElapsedTimer mstimer;//计时器
		mstimer.start();
		for (int i = 0; i < win_width; i += rSide)
		{
			aa = m_mapData.value(pp);
			for (int k = 0; k < win_height; k += rSide)//循环列
			{
				for (int j = 0; j < aa.count(); j++)
				{
					char B = aa.value(j);
					switch (B)
					{
					case '.':
						p.setBrush(Qt::gray);//设置画刷形式 
						p.setPen(Qt::gray);//设置画笔形式						
						p.drawRect(QRect(k, i, rSpace, rSpace));		//绘制

						gray_num++;

						break;
					case '1':

						p.setBrush(Qt::blue);
						p.setPen(Qt::blue);						
						p.drawRect(QRect(k, i, rSpace, rSpace));		//绘制
						
						blue_num++;

						break;
					case '6':
						p.setBrush(Qt::red);
						p.setPen(Qt::red);						
						p.drawRect(QRect(k, i, rSpace, rSpace));		//绘制
						
						red_num++;
						

						break;
					default:
						p.setBrush(Qt::white);
						p.setPen(Qt::white);						
						p.drawRect(QRect(k, i, rSpace, rSpace));		//绘制

						break;
					}
					k += rSide;
				}
			}
			//	qDebug() << pp << "*************************";
			pp++;
		}
		//输出图片
		p.end();
		map.save("../../chip.png", "PNG");	//输出图片
		
		//ui.gray_lineEdit->setText(QString::number(graynum++));
		/*QMap<int, QMap<int, char>>::iterator   num=m_mapData.find('.');

		if (num != m_mapData.end())
		{
			num++;
			graynum++;
		}*/
		ui.gray_lineEdit->setText(QString::number(gray_num++));
		ui.blue_lineEdit->setText(QString::number(blue_num++));
		ui.red_lineEdit->setText(QString::number(red_num++));

		//显示执行时间
		double time = (double)mstimer.nsecsElapsed() / (double)1000000;
		QString str = QString::number(time, 'f', 2);
		ui.label->setText(" 转换完成！! !  \r\n 运行时间: " + str + "ms");


		////保存图片后打开保存的图片并显示
		QString	filename = "../../chip.png";

		read_image(filename);

		//	QMessageBox::information(NULL, "提示", "晶元图转换完成！！");


			//置为不可操作
		key = false;
	}

}

//画小窗口
void MapTest::Paint_Secondary()
{
	
		if (key2||key3)
		{

			QPainter painter(this);			
			QPixmap pixmap(ui.small_label->height(),ui.small_label->width());
			painter.begin(&pixmap);

			QPen pen = painter.pen();
			pen.setWidth(0.5);

				if(rodegrees ==0)
				{ 
				//ui.x_position_label->setText("X坐标："+QString::number(s_x));
				//ui.y_position_label->setText("Y坐标：" + QString::number(s_y));
			
				ui.x_pos_label->setText("X坐标：" + QString::number(s_x));
				ui.y_pos_label->setText("Y坐标：" + QString::number(s_y));
				}
				else if (rodegrees == 90)
				{
					//ui.x_position_label->setText("X坐标：" + QString::number(s_x- (map_max_row- map_max_column)));
					//ui.y_position_label->setText("Y坐标：" + QString::number(s_y));
					
					ui.x_pos_label->setText("X坐标：" + QString::number(s_x - (map_max_row - map_max_column)));
					ui.y_pos_label->setText("Y坐标：" + QString::number(s_y));
					
					
				}

				else if (rodegrees == 180)
				{
					//ui.x_position_label->setText("X坐标：" + QString::number(s_x));
					//ui.y_position_label->setText("Y坐标：" + QString::number(s_y - (map_max_row - map_max_column)));

					ui.x_pos_label->setText("X坐标：" + QString::number(s_x-1));
					ui.y_pos_label->setText("Y坐标：" + QString::number(s_y - (map_max_row - map_max_column)));
				}
			
				if ( rodegrees == 270)
				{
					//ui.x_position_label->setText("X坐标："+QString::number(s_x));
					//ui.y_position_label->setText("Y坐标：" + QString::number(s_y));

					ui.x_pos_label->setText("X坐标：" + QString::number(s_x));
					ui.y_pos_label->setText("Y坐标：" + QString::number(s_y-1));
				}
		
			QElapsedTimer mstimer;//计时器
			mstimer.start();
			QMap<int, char> new_mapData;
			int num = s_x;
			int L = s_y;
			int jg_X = 0;
			int jg_Y = 0;

			for (int i = s_y; i < s_y+ smallRNumm; i++)
			{
				if (rodegrees == 0) 
				{
					new_mapData = m_mapData.value(i);
				}
				else 
				{
					new_mapData = rotate_m_mapData.value(i);
				}
				for (int j = s_x; j < s_x+smallRNumm; j++)
				{
					char B = new_mapData.value(j);
					switch (B)
					{
					case '.':
						painter.setBrush(Qt::gray);
						painter.setPen(Qt::gray);
						painter.setPen(pen);
						painter.drawRect(QRect(jg_X, jg_Y, 18, 18));		//绘制

						
						break;
					case '1':
						painter.setBrush(Qt::blue);
						painter.setPen(Qt::blue);
						painter.setPen(pen);
						painter.drawRect(QRect(jg_X, jg_Y, 18, 18));		//绘制
						break;
					case '6':
						painter.setBrush(Qt::red);
						painter.setPen(Qt::red);
						painter.setPen(pen);
						painter.drawRect(QRect(jg_X, jg_Y, 18, 18));		//绘制
						break;
					default:
						painter.setBrush(Qt::white);
						painter.setPen(Qt::white);
						painter.setPen(pen);
						painter.drawRect(QRect(jg_X, jg_Y, 18, 18));		//绘制
						break;
					}

					//qDebug() << "列标：" << j << "数值：" <<B;
					jg_X += 24;
				}
				jg_X = 0;
				jg_Y += 24;
				//qDebug() << "行标" << i ;
			}
			painter.end();
			ui.small_label->setPixmap(pixmap);

			//显示执行时间
			double time = (double)mstimer.nsecsElapsed() / (double)1000000;
			QString str = QString::number(time, 'f', 2);
			ui.label->setText("运行时间: " + str + "ms");

			key2 = false;
			key3 = false;
			
		}
	/*}*/	
}

//画矩形框
void MapTest::Paint_rectangle()
{

		QPainter painter(ui.main_windows_label);
		painter.setPen(QPen(Qt::red, 2));

		if (key3)
		{
			//输入画
			if(rodegrees==0)
			{ 

				painter.drawRect(QRect((ui.x_spinBox->text().toInt()) * rSide,
						(ui.y_spinBox->text().toInt()) * rSide, smallRNumm*rSide, smallRNumm*rSide));
			}

			else if (rodegrees == 90)
			{

				painter.drawRect(QRect((ui.x_spinBox->text().toInt()) * rSide + (map_max_row - map_max_column) * rSide,
					(ui.y_spinBox->text().toInt()) * rSide, smallRNumm*rSide, smallRNumm*rSide));
			}
			else if (rodegrees == 180)
			{
				
				painter.drawRect(QRect((ui.x_spinBox->text().toInt()+1) * rSide,
					(ui.y_spinBox->text().toInt()) * rSide + (map_max_row - map_max_column) * rSide, smallRNumm*rSide, smallRNumm*rSide));
			}
			else if ( rodegrees == 270)
			{

				painter.drawRect(QRect((ui.x_spinBox->text().toInt()) * rSide,
					(ui.y_spinBox->text().toInt()+1) * rSide, smallRNumm*rSide, smallRNumm*rSide));
			}

		}
		else
		{
			//点击画
			painter.drawRect(QRect(((Mouse_x - ui.main_windows_label->geometry().x())/ rSide * rSide),
			((Mouse_y - ui.main_windows_label->geometry().y())/ rSide * rSide), smallRNumm*rSide, smallRNumm*rSide));
			
		}
		
		
}

//读取图片 并显示
void MapTest::read_image(QString filename)
{
	if (filename.isEmpty())
	{
		return;
	}
	QImage Image;
	//加载图片
	if (Image.load(filename))
	{
		QPainter painter(this);
		painter.setRenderHint(QPainter::Antialiasing, true);
		////根据窗口计算应该显示的图片的大小
		//int width = qMin(Image.width(), this->width());     //返回较小值
		//int height = (width * 1.0) / (Image.width()*1.0 / Image.height());   //  width / height  图像跟label会根据宽对齐。 height / width则根据长对齐 

		//height = qMin(height, this->height());

		//width = height * 1.0 *(Image.width() *1.0 / Image.height());

		//QRect pecRect(-width / 2, -height / 2, width, height); //画显示框  前两个参数是坐标原地(0，0 在label 中心) 后两个天参数是长宽
		//painter.drawImage(pecRect, Image);
		ui.main_windows_label->setGeometry(200, 60, max * rSide, max * rSide);

		//ui.main_windows_label->setAlignment(Qt::AlignCenter);

		ui.main_windows_label->setPixmap(QPixmap::fromImage(Image));
	}
	else
	{
		qDebug() << "load failed";
	}
}

//鼠标按下
void MapTest::mousePressEvent(QMouseEvent *e)
{
	QWidget::mousePressEvent(e);
	
		Mouse_x = e->pos().x();
		Mouse_y = e->pos().y();
	

	qDebug ()<< Mouse_x << Mouse_y;

	if (rodegrees == 0)
	{
		if (Mouse_x > ui.main_windows_label->geometry().x()
			&& Mouse_y > ui.main_windows_label->geometry().y()
			&& Mouse_x < ui.main_windows_label->geometry().x() + map_max_row* rSide
			&& Mouse_y < ui.main_windows_label->geometry().y() + map_max_column* rSide)
		{
			s_x = (Mouse_x - ui.main_windows_label->geometry().x()) / rSide;
			s_y = (Mouse_y - ui.main_windows_label->geometry().y()) / rSide;

			key2 = true;
			update();

		}
	}
	else if  (rodegrees == 90)
	{
		if (Mouse_x > ui.main_windows_label->geometry().x()+(map_max_row - map_max_column)*rSide
			&& Mouse_y > ui.main_windows_label->geometry().y() 
			&& Mouse_x < ui.main_windows_label->geometry().x() + max * rSide
			&& Mouse_y < ui.main_windows_label->geometry().y() + max * rSide)
		{
			s_x = (Mouse_x - ui.main_windows_label->geometry().x()) / rSide;
			s_y = (Mouse_y - ui.main_windows_label->geometry().y()) / rSide;

			key2 = true;
			update();

		}
	}

	else if (rodegrees == 180)
	{
		if (Mouse_x >( ui.main_windows_label->geometry().x()+ rSide)
			&& Mouse_y > ui.main_windows_label->geometry().y() + (map_max_row - map_max_column) * rSide
			&& Mouse_x < ui.main_windows_label->geometry().x() + max * rSide
			&& Mouse_y < ui.main_windows_label->geometry().y() + max * rSide)
		{
			s_x = (Mouse_x - ui.main_windows_label->geometry().x()) / rSide;
			s_y = (Mouse_y - ui.main_windows_label->geometry().y()) / rSide;

			key2 = true;
			update();

		}
	}

	else if (rodegrees == 270)
	{
		if (Mouse_x > ui.main_windows_label->geometry().x() 
			&& Mouse_y > (ui.main_windows_label->geometry().y()+rSide)
			&& Mouse_x < ui.main_windows_label->geometry().x() + map_max_column * rSide
			&& Mouse_y < ui.main_windows_label->geometry().y() + map_max_row * rSide)
		{
			s_x = (Mouse_x - ui.main_windows_label->geometry().x()) / rSide;
			s_y = (Mouse_y - ui.main_windows_label->geometry().y()) / rSide;

			key2 = true;
			update();

		}
	}


	if (Mouse_x > ui.small_label->geometry().x()
		&& Mouse_y > ui.small_label->geometry().y()
		&& Mouse_x < ui.small_label->geometry().x() + ui.small_label->width()
		&& Mouse_y < ui.small_label->geometry().y() + ui.small_label->height())
	{
		

			int a = (Mouse_x - ui.small_label->geometry().x()) / 24;
			int b = (Mouse_y - ui.small_label->geometry().y()) / 24;
			
			if (rodegrees == 0)
			{
				if ( (s_x + a )< (map_max_row-1) && (s_y + b )< map_max_column )
				{
					ui.x_pos_label->setText("X坐标：" + QString::number(s_x + a));
					ui.y_pos_label->setText("Y坐标：" + QString::number(s_y + b));
				}
				
			}
			else if (rodegrees == 90 )
			{
				if ((s_x - (map_max_row - map_max_column) + a) < (map_max_column) && (s_y + b) < (map_max_row-1))
				{
				ui.x_pos_label->setText("X坐标：" + QString::number(s_x - (map_max_row - map_max_column) + a));
				ui.y_pos_label->setText("Y坐标：" + QString::number(s_y + b));
				}
			}

			else if (rodegrees == 180)
			{
				if ((s_x + a) < (map_max_row ) && (s_y - (map_max_row - map_max_column) + b) < map_max_column)
				{
					ui.x_pos_label->setText("X坐标：" + QString::number(s_x + a-1));
					ui.y_pos_label->setText("Y坐标：" + QString::number(s_y - (map_max_row - map_max_column) + b));
				}
			}
			else if (rodegrees == 270)
			{
				if ((s_x + a) < map_max_column && (s_y + b) < map_max_row )
				{ 
				ui.x_pos_label->setText("X坐标：" + QString::number(s_x + a));
				ui.y_pos_label->setText("Y坐标：" + QString::number(s_y + b-1));
				}
			}
			
			ui.small_label->update();		
	}
		
}


void MapTest::on_sure_pushButton_clicked()
{
	if (rodegrees == 0|| rodegrees == 270)
	{
		s_x = ui.x_spinBox->text().toInt();
		s_y = ui.y_spinBox->text().toInt();
	}
	else if (rodegrees == 90)
	{

		s_x = ui.x_spinBox->text().toInt() + (map_max_row - map_max_column);
		s_y = ui.y_spinBox->text().toInt();
	}

	else if (rodegrees == 180)
	{
		s_x = ui.x_spinBox->text().toInt()+1 ;
		s_y = ui.y_spinBox->text().toInt() + (map_max_row - map_max_column);
	}

	if ( rodegrees == 270)
	{
		s_x = ui.x_spinBox->text().toInt();
		s_y = ui.y_spinBox->text().toInt()+1;
	}
	//qDebug()<< s_x;
	//qDebug() << s_y;
	key3 = true;
	update();
	
}

void MapTest::on_rotate_clicked()
{
	if (m_mapData.isEmpty()) { return; }
	if (rodegrees < 360) { rodegrees += 90; }
	if (rodegrees == 360) { rodegrees = 0; }
	QMatrix matrix;	
	matrix.rotate(rodegrees);
	//QLabel *Label = new QLabel();
	ui.main_windows_label->setPixmap(QPixmap("../../chip").transformed(matrix, Qt::SmoothTransformation));

	if (rodegrees == 0)//正常矩阵
	{
		rotate_m_mapData.clear();
		for (int i = 0; i < max; i++)
		{
			for (int j = 0; j < max; j++)
			{
				rotate_m_mapData[i][j] = m_mapData[i][j];
			}
		}
		
	}
	else if (rodegrees == 90)//顺时针旋转90度矩阵
	{
		rotate_m_mapData.clear();
		for (int i = 0; i < max; i++)
		{
			for (int j = 0; j < max; j++)
			{
				rotate_m_mapData[i][j] = m_mapData[max - 1 - j][i];
			}
		}
		ui.x_spinBox->setMaximum(map_max_column - 1);
		ui.y_spinBox->setMaximum(map_max_row - 2);
		
	}
	else if (rodegrees == 180)//旋转180度矩阵
	{
		rotate_m_mapData.clear();
		for (int i = 0; i < max; i++)
		{
			for (int j = 0; j < max; j++)
			{
				rotate_m_mapData[i][j] = m_mapData[max - 1 - i][max - 1 - j];
			}
		}
		ui.x_spinBox->setMaximum(map_max_row - 1);
		ui.y_spinBox->setMaximum(map_max_column - 1);
	}

	else if (rodegrees == 270)//旋转270度矩阵
	{
		rotate_m_mapData.clear();
		for (int i = 0; i < max; i++)
		{
			for (int j = 0; j < max; j++)
			{
				rotate_m_mapData[i][j] = m_mapData[j][max - 1 - i];
			}
		}
		ui.x_spinBox->setMaximum(map_max_column - 1);
		ui.y_spinBox->setMaximum(map_max_row - 1);
	}

}

