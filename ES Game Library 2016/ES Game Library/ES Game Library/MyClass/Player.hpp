#pragma once
#include "../ESGLib.h"

/*プレイヤーを管理するクラス*/
class Player
{
public:
	Player();
	~Player();
	bool Initialize(Vector3 position, LPCTSTR player_name);
	void Draw();
private:
	/*プレイヤー変数*/
	SPRITE charactor;
	/*プレイヤーの座標*/
	Vector3 position;
};
