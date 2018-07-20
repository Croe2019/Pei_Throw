#pragma once
#include "../ESGLib.h"
#include "PlayerMoveinterface.hpp"

/*プレイヤーを管理するクラス*/
class Player
{
public:
	Player();
	~Player();
	bool Initialize(Vector3 position, LPCTSTR player_name);
	void Update();
	static Player* CreatePlayer1();
	static Player* CreatePlayer2();
	void SetMove(PlayerMoveinterface *player_move_interface);
	void Draw();
private:
	/*プレイヤー変数*/
	SPRITE charactor;
	/*プレイヤーの座標*/
	Vector3 position;

	PlayerMoveinterface *player_move_interface;
};
