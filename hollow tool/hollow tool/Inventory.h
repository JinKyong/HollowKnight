#pragma once
#include "State.h"

class Inventory : public State
{
public:
	Inventory() {};
	~Inventory() {};

	virtual HRESULT init(Player* player, bool reverse = false);
	virtual void release();
	virtual void update();
	virtual void render(HDC hdc);
	virtual void updateDirect(int direct);
	virtual void updateRect();

	virtual int getStateNum() { return INVENTORY; }

	void controlKey();
	void controlFrame();
};

