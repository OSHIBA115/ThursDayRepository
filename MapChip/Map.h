#pragma once

#include<vector>//マップチップ使うときにいるらしい
#include<string>//上に同じく
using namespace std;//上に同じく

class Map
{
	//マップチップの番号
	vector<vector<int>> mapData;
	//当たり判定の情報
	vector<vector<int>> hitData;

	//マップチップ画像
	int chipImage[64];

	//マップの縦横のマスの数
	int mapWidth;
	int mpHeight;

	//マップの大きさ
	static constexpr int CHIP_SIZE = 64;

	//csvファイルの読み込み
	bool LoadCSV(const char* fileName,vector<vector<int>> &data);
};

