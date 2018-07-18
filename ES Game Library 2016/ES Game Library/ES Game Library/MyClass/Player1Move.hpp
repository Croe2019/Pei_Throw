#pragma once
#include "../ESGLib.h"
#include "PlayerMoveinterface.hpp"

/*プレイヤー1の移動を管理するクラス*/
class Player1Move : public PlayerMoveinterface
{
public:
	Player1Move();
	virtual ~Player1Move();
	virtual Vector3 Move(Vector3 position);
private:
};

