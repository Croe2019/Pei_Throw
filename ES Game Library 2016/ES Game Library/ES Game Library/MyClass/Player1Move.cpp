#include "Player1Move.hpp"
#include "Control.hpp"


Player1Move::Player1Move()
{
	MAX_SPEED = 5.0f;
}

Player1Move::~Player1Move()
{

}

/*プレイヤーの移動処理*/
Vector3 Player1Move::Move(Vector3 position)
{
	KeyboardState key_state = Control::GetInstance().KeyState();
	if (key_state.IsKeyDown(Keys_Left))
	{
		position.x -= MAX_SPEED;
	}

	if (key_state.IsKeyDown(Keys_Right))
	{
		position.x += MAX_SPEED;
	}

	if (key_state.IsKeyDown(Keys_Up))
	{
		position.y -= MAX_SPEED;
	}

	if (key_state.IsKeyDown(Keys_Down))
	{
		position.y += MAX_SPEED;
	}
	return position;
}

/*画面外から出ない処理*/
Vector3 Player1Move::NotLeaveScreen(Vector3 position)
{
	if (position.x >= 1280.0f - 70.0f)
	{
		position.x = 1280.0f - 70.0f;
	}

	if (position.x <= 660.0f + 0.0f)
	{
		position.x = 660.0f + 0.0f;
	}

	if (position.y <= 0.0f + 0.0f)
	{
		position.y = 0.0f + 0.0f;
	}

	if (position.y >= 720.0f - 128.0f)
	{
		position.y = 720.0f - 128.0f;
	}

	return position;
}
