#include "ChoppingBoardItem.h"

int ChoppingBoardItem::_id = 478;

ChoppingBoardItem::ChoppingBoardItem(int id) : PlaceableItem("itemChoppingBoard", id, ChoppingBoardTile::_id) {
	setIcon("itemchoppingboard", 0);
}
