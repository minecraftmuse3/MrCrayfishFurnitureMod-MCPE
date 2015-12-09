#pragma once

#include "FurnitureItem.h"

#include "../tile/RotatableTile.h";
#include "MCPE/world/level/tile/Block.h"
#include "MCPE/world/Facing.h"
#include "MCPE/world/entity/player/Player.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/world/item/ItemInstance.h"

class PlaceableItem : public FurnitureItem {
public:
	PlaceableItem(const std::string&, int, int);

	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);

private:
	int placed;
};