#include "Control.hpp"

Control::Control()
{

}

Control::~Control()
{

}

/*�������Ƃ��̏�Ԃ��擾����*/
KeyboardBuffer Control::KeyBuffer()
{
	key_buffer = Keyboard->GetBuffer();
	return key_buffer;
}

/*���͒��̏�Ԃ��擾����*/
KeyboardState& Control::KeyState()
{
	key_state = Keyboard->GetState();
	return key_state;
}