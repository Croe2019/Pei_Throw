#pragma once
#include "../ESGLib.h"

/*�v���C���[���Ǘ�����N���X*/
class Player
{
public:
	Player();
	~Player();
	bool Initialize(Vector3 position, LPCTSTR player_name);
	void Draw();
private:
	/*�v���C���[�ϐ�*/
	SPRITE charactor;
	/*�v���C���[�̍��W*/
	Vector3 position;
};
