#pragma once
#include "../ESGLib.h"

/*プレイヤー移動の抽象クラス*/
class PlayerMoveinterface
{
public:
	PlayerMoveinterface(){}
	virtual ~PlayerMoveinterface(){}
	virtual Vector3 Move(Vector3 position) = 0;
private:
};
