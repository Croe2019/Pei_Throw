#pragma once
#include "../ESGLib.h"

/*�e�[�u�����Ǘ�����N���X*/
class Table
{
public:
	Table();
	~Table();
	/*������*/
	bool Initialize();
	/*�e�[�u���̗̈�����߂�*/
	Rect GetRect();
	/*�`��*/
	void Draw();

private:
	/*�e�[�u���ϐ�*/
	SPRITE table;
	/*�e�[�u���͈̔�*/
	Rect table_rect;

};
