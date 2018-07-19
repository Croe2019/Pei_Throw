#pragma once
#include "../ESGLib.h"

/*�L�[�{�[�h�̏����擾����N���X*/
class Control
{
public:
	~Control();
	/*�V���O���g���C���X�^���X�̎擾*/
	static Control& GetInstance() { static Control control; return control; }
	KeyboardBuffer KeyBuffer();
	KeyboardState& KeyState();
private:
	Control();
	KeyboardBuffer key_buffer;
	KeyboardState key_state;
};