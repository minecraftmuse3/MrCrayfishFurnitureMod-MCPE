#include "LampItem.h"

int LampItem::_id = 477;

LampItem::LampItem(int id) : PlaceableItem("itemLamp", id, LampTile::_id) {
	setIcon("itemlamp", 0);
}
