#include "Player1Move.hpp"
#include "Control.hpp"


Player1Move::Player1Move()
{

}

Player1Move::~Player1Move()
{

}

/*ƒvƒŒƒCƒ„[‚ÌˆÚ“®ˆ—*/
Vector3 Player1Move::Move(Vector3 position)
{
	KeyboardState key_state = Control::GetInstance().KeyState();
	if (key_state.IsKeyDown(Keys_Left))
	{
		position.x -= 3.0f;
	}

	if (key_state.IsKeyDown(Keys_Right))
	{
		position.x += 3.0f;
	}

	if (key_state.IsKeyDown(Keys_Up))
	{
		position.y -= 3.0f;
	}

	if (key_state.IsKeyDown(Keys_Down))
	{
		position.y += 3.0f;
	}
	return position;
}