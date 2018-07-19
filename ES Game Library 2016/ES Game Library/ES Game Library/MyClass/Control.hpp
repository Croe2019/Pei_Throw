#pragma once
#include "../ESGLib.h"

/*キーボードの情報を取得するクラス*/
class Control
{
public:
	~Control();
	/*シングルトンインスタンスの取得*/
	static Control& GetInstance() { static Control control; return control; }
	KeyboardBuffer KeyBuffer();
	KeyboardState& KeyState();
private:
	Control();
	KeyboardBuffer key_buffer;
	KeyboardState key_state;
};