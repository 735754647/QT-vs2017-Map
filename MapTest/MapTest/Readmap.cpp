#include "Readmap.h"

Readmap::Readmap(QObject *parent)
	: QObject(parent)
{
	ReadMapTxtFile();


}

Readmap::~Readmap()
{
}

void Readmap::ReadMapTxtFile()
{
	QFile file("C:/Users/admin/Desktop/Map/AN5EP5-05.txt");

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

	//QVector<QByteArray> fileText;
	//for (auto it : fileText)
	//{
	//	//lineSize.push_back(it.size());
	//	//if(it.at(0) != '*'||it.at(0)
	//	if (it.at(0) != '#'&&it.at(0) != ' ')
	//}

	//getchar();

	for (size_t i = 0; i < mapData.size(); i++)
	{
		for (size_t j = 0; j < mapData.at(i).size(); j++)
		{
			//m_ChipData.insert(PosData(j, i), ChipData(mapData.at(i).at(j)));
			m_mapData[i].insert(j, mapData.at(i).at(j));
		}
	}

	getchar();
}
