#include "ToasterItem.h"

int ToasterItem::_id = 479;

ToasterItem::ToasterItem(int id) : PlaceableItem("itemToaster", id, ToasterTile::_id) {
	setIcon("itemtoaster", 0);
}
