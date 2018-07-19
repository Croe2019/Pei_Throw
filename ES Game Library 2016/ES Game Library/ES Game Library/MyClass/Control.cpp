#include "Control.hpp"

Control::Control()
{

}

Control::~Control()
{

}

/*‰Ÿ‚µ‚½‚Æ‚«‚Ìó‘Ô‚ğæ“¾‚·‚é*/
KeyboardBuffer Control::KeyBuffer()
{
	key_buffer = Keyboard->GetBuffer();
	return key_buffer;
}

/*“ü—Í’†‚Ìó‘Ô‚ğæ“¾‚·‚é*/
KeyboardState& Control::KeyState()
{
	key_state = Keyboard->GetState();
	return key_state;
}