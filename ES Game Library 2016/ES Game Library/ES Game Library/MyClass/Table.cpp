#include "Table.hpp"

Table::Table()
{

}

Table::~Table()
{

}

/*•Ï”‰Šú‰»*/
bool Table::Initialize()
{
	table = GraphicsDevice.CreateSpriteFromFile(_T("Stage/Table.png"), Color(255, 255, 255));
	return true;
}

/*ƒe[ƒuƒ‹‚Ì—Ìˆæ‚ğŒˆ‚ß‚é*/
Rect Table::GetRect()
{
	table_rect.left = 500.0f;
	table_rect.right = 784.0f;
	table_rect.top = 0.0f;
	table_rect.bottom = 690.0f;
	return table_rect;
}

/*‰æ‘œ•`‰æ*/
void Table::Draw()
{
	SpriteBatch.Draw(*table, Vector3(500.0f, 0.0f, 0.0f));
}