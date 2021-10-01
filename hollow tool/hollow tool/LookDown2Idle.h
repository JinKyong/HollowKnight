#pragma once
#include "State.h"

class LookDown2Idle : public State
{
public:
	LookDown2Idle() {};
	~LookDown2Idle() {};

	virtual HRESULT init(Player* player, bool reverse = false);
	virtual void release();
	virtual void update();
	virtual void render(HDC hdc);
	virtual void updateDirect(int direct);
	virtual void updateRect();

	virtual int getStateNum() { return LOOKDOWN2IDLE; }

	void controlKey();
	void controlFrame();
};

