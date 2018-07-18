#pragma once
#include "../ESGLib.h"

/*テーブルを管理するクラス*/
class Table
{
public:
	Table();
	~Table();
	/*初期化*/
	bool Initialize();
	/*テーブルの領域を決める*/
	Rect GetRect();
	/*描画*/
	void Draw();

private:
	/*テーブル変数*/
	SPRITE table;
	/*テーブルの範囲*/
	Rect table_rect;

};
