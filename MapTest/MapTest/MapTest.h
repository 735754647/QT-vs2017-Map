#pragma once

#include <QtWidgets/QWidget>
#include "ui_MapTest.h"

#include <iostream>
#include <QMouseEvent>
#include <QPainter>
#include <QDebug>
#include <QFile>
#include <QMap>
#include <QVector>
#include <Qtimer>
#include <QKeyEvent>
#include <QElapsedTimer>
#include <QFileDialog>
#include <QMessageBox>

#include "Readmap.h"
#include "mylabel.h"


class MapTest : public QWidget
{
    Q_OBJECT

public:
    MapTest(QWidget *parent = Q_NULLPTR);

	MyLabel *mylabel;

	/*void retunData(int *a, int *b);*/
	short int rodegrees = 0;
	short int Mouse_x = 0, Mouse_y = 0;
	short int s_x = 0, s_y = 0;
	
	int rSide = 3;//每个矩形间隔
	int rSpace = 1.5;//矩形边长
	int smallRNumm = 15;//小窗口矩形个数
	int smallRSide = 18;//每个小矩形边长
	int smallRSpace = 24;//小窗口矩形间隔

	int map_max_row = 0, map_max_column = 0;
	int max = 0;
	
	bool key = false, key2 = false, key3 = false;

	QString	filTexyename;

	QVector<QByteArray> fileText;
	QVector<QByteArray> mapData;
	
	//int Largest(int list[], int length);
	QMap<int, QMap<int, char>> m_mapData;//X,Y data
	QMap<int, QMap<int, char>> rotate_m_mapData;

private:
    Ui::MapTestClass ui;

private slots:
	void on_read_pushButton_clicked();//读取TXT
	void on_change_pushButton_clicked();//转为晶圆图
	void on_sure_pushButton_clicked();//spinBox确定
	void on_rotate_clicked();//旋转90

private:
	void ReadMapTxtFile();
	bool eventFilter(QObject * watched, QEvent * event);
	void Paint();
	void Paint_Secondary();

	void Paint_rectangle();
	
	void read_image(QString filename);
	
protected:

	virtual void mousePressEvent(QMouseEvent*) override;

};

