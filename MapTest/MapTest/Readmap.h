#pragma once

#include <QObject>
#include <QFile>
#include <QMap>
#include <QVector>


class Readmap : public QObject
{
	Q_OBJECT

public:
	Readmap(QObject *parent);
	~Readmap();

	void ReadMapTxtFile();

	QMap<int, QMap<int, char>> m_mapData;//X,Y data


};
