#pragma once
#include<vector>
#include"Config.h"
class Map
{
private:
	//ファイルを読み込み
	
	/// <summary>
	/// ロードマップ
	/// </summary>
	/// <param name="filePath">マップCSVファイルパス</param>
	/// <param name="mapData">マップチップイメージ</param>
	/// <returns>描画判定</returns>
	bool LoadMap(const char* filePath,std::vector<std::vector<int>>&mapData);

	/// <summary>
	/// 描画レイヤー
	/// </summary>
	/// <param name="mapData">マップチップイメージ</param>
	void DrawLayer(const std::vector<std::vector<int>>& mapData) const;

	/// <summary>
	/// 描画フラグ
	/// </summary>
	/// <param name="mapX">X座標</param>
	/// <param name="mapY">Y座標</param>
	/// <returns>描画フラグ</returns>
	bool IsValidMapPosition(int mapX, int mapY);

	//マップの内容
	std::vector<std::vector<int>> backMap;
	std::vector<std::vector<int>> baseMap;
	std::vector<std::vector<int>> nearMap;

	int mapXNum;
	int mapYNum;
	bool isInitialized;

public:
	//コンストラクタ
	Map();
	~Map();


	bool Init();
};
