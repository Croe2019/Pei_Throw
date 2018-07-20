#pragma once
#include "../ESGLib.h"
#include "PlayerMoveinterface.hpp"

/*�v���C���[���Ǘ�����N���X*/
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
	/*�v���C���[�ϐ�*/
	SPRITE charactor;
	/*�v���C���[�̍��W*/
	Vector3 position;

	PlayerMoveinterface *player_move_interface;
};
