#include "Player2Move.hpp"
#include "Control.hpp"

Player2Move::Player2Move()
{

}

Player2Move::~Player2Move()
{

}

Vector3 Player2Move::Move(Vector3 position)
{
	KeyboardState key_state = Control::GetInstance().KeyState();
	if (key_state.IsKeyDown(Keys_A))
	{
		position.x -= 3.0f;
	}

	if (key_state.IsKeyDown(Keys_D))
	{
		position.x += 3.0f;
	}

	if (key_state.IsKeyDown(Keys_S))
	{
		position.y += 3.0f;
	}

	if (key_state.IsKeyDown(Keys_W))
	{
		position.y -= 3.0f;
	}
	return position;
}