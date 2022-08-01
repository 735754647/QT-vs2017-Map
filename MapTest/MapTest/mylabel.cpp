#pragma execution_character_set("utf-8")
#include "mylabel.h"
int pos_x = 0;
int pos_y = 0;

bool flag = false;
MyLabel::MyLabel(QWidget *parent) :QLabel(parent)
{

}

void MyLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);//先调用父类的paintEvent为了显示'背景'!!!  
	QPainter painter(this);
	painter.setPen(QPen((QColor(0, 255, 0)), 3));
	
	int a = pos_x / 24;
	int b = pos_y / 24;
	if (flag) 
	{
		painter.drawRect(QRect(a * 24 - 2.1, b * 24 - 2.1, 24, 24));
		painter.drawLine(a * 24, b * 24 , a * 24 +20, b * 24 + 20);
		painter.drawLine(a * 24+20, b * 24, a * 24 , b * 24+20 );
	}
}

void MyLabel::mousePressEvent(QMouseEvent *e)
{
	QWidget::mousePressEvent(e);
	pos_x = e->pos().x();
	pos_y = e->pos().y();
	//qDebug() << pos_x << pos_y;
	//qDebug() <<"mylabel点击X："<< pos_x/24;
	//qDebug() << "mylabel点击Y：" << pos_y/24;
	flag = true;
}



