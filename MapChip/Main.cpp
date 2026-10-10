#include"Dxlib.h"
#include"Map.h"

#include<fstream>
#include<sstream>
#include<cmath>

//コンストラクタ
Map::Map()
{
	mapWidth = 0;
	mapHeight = 0;
	for (int i = 0; i < 64; i++)
	{
		chipImage[i] = -1;
	}
}
bool Map::LoadCSV(const char* fileName, std::vector < std::vector<int>>& data)
{
	std::ifstream file(fileName);

	if (!file.is_open())
	{
		return false;
	}
	data.clear();

	std::string line;

	while (std::getline(file.line))
	{

	}
}