#include "Control.hpp"

Control::Control()
{

}

Control::~Control()
{

}

/*押したときの状態を取得する*/
KeyboardBuffer Control::KeyBuffer()
{
	key_buffer = Keyboard->GetBuffer();
	return key_buffer;
}

/*入力中の状態を取得する*/
KeyboardState Control::KeyState()
{
	key_state = Keyboard->GetState();
	return key_state;
}