#pragma once
#include "../ESGLib.h"
#include "PlayerMoveinterface.hpp"

class Control;

/*�v���C���[1�̈ړ����Ǘ�����N���X*/
class Player1Move : public PlayerMoveinterface
{
public:
	Player1Move();
	virtual ~Player1Move();
	virtual Vector3 Move(Vector3 position);
	virtual Vector3 NotLeaveScreen(Vector3 position);
private:
	Vector3 limit_position;
	float MAX_SPEED;
};

