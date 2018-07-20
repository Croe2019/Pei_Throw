#include "Player2Move.hpp"
#include "Control.hpp"

Player2Move::Player2Move()
{
	MAX_SPEED = 5.0f;
}

Player2Move::~Player2Move()
{

}

/*ˆÚ“®ˆ—*/
Vector3 Player2Move::Move(Vector3 position)
{
	KeyboardState key_state = Control::GetInstance().KeyState();
	if (key_state.IsKeyDown(Keys_A))
	{
		position.x -= MAX_SPEED;
	}

	if (key_state.IsKeyDown(Keys_D))
	{
		position.x += MAX_SPEED;
	}

	if (key_state.IsKeyDown(Keys_S))
	{
		position.y += MAX_SPEED;
	}

	if (key_state.IsKeyDown(Keys_W))
	{
		position.y -= MAX_SPEED;
	}
	return position;
}

/*‰æ–ÊŠO‚©‚ço‚È‚¢ˆ—*/
Vector3 Player2Move::NotLeaveScreen(Vector3 position)
{
	if (position.x >= 560.0f - 0.0f)
	{
		position.x = 560.0f - 0.0f;
	}

	if (position.x <= 0.0f + 0.0f)
	{
		position.x = 0.0f + 0.0f;
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
