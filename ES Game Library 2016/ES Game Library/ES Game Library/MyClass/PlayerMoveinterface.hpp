#pragma once
#include "../ESGLib.h"

/*�v���C���[�ړ��̒��ۃN���X*/
class PlayerMoveinterface
{
public:
	PlayerMoveinterface(){}
	virtual ~PlayerMoveinterface(){}
	virtual Vector3 Move(Vector3 position) = 0;
private:
};
