#pragma once
#include "../ESGLib.h"
#include "PlayerMoveinterface.hpp"

/*�v���C���[�Q�̈ړ����Ǘ�����N���X*/
class Player2Move : public PlayerMoveinterface
{
public:
	Player2Move();
	virtual ~Player2Move();
	virtual Vector3 Move(Vector3 position);
private:
};
