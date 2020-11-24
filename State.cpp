#include "State.h"
#include "WaterBoiler.h"

using namespace StatePattern;

NoQuarterState::NoQuarterState(WaterBoiler* waterBoiler)
{
	this->m_waterBoiler = waterBoiler;
}
NoQuarterState::~NoQuarterState() {}

void NoQuarterState::insertQuarter()
{
	cout << "您投入了两个硬币" << endl;
	m_waterBoiler->setState(m_waterBoiler->getHasQuarterState());
}
void NoQuarterState::ejectQuarter()
{
	cout << "您还未投入硬币。" << endl;
}
void NoQuarterState::turnCrank()
{
	cout << "您按下了按钮，但系统并未检测到您已投币。" << endl;
}
void NoQuarterState::dispense()
{
	cout << "您需要先投币。" << endl;
}



HasQuarterState::HasQuarterState(WaterBoiler* waterBoiler)
{
	this->m_waterBoiler = waterBoiler;
}
HasQuarterState::~HasQuarterState()
{

}
void HasQuarterState::insertQuarter()
{
	cout << "您不能再投币了！" << endl;
}
void HasQuarterState::ejectQuarter()
{
	cout << "硬币已返还。" << endl;
	m_waterBoiler->setState(m_waterBoiler->getNoQuarterState());
}
void HasQuarterState::turnCrank()
{
	cout << "您已按下按钮。" << endl;
	m_waterBoiler->setState(m_waterBoiler->getSoldState());
}
void HasQuarterState::dispense()
{
	cout << "抱歉，这里没有热水了。" << endl;
}



SoldState::SoldState(WaterBoiler* waterBoiler)
{
	this->m_waterbBoiler = waterBoiler;
}
SoldState::~SoldState() {}

void SoldState::insertQuarter()
{
	cout << "请稍等，正在出水，小心烫伤！" << endl;
}
void SoldState::ejectQuarter()
{
	cout << "抱歉，您已经按过按钮了。" << endl;
}
void SoldState::turnCrank()
{
	cout << "若您需要更多热水，请再次投币！" << endl;
}
void SoldState::dispense()
{
	m_waterbBoiler->releaseWater();
	if (m_waterbBoiler->getCount() > 0) {
		m_waterbBoiler->setState(m_waterbBoiler->getNoQuarterState());
	}
	else {
		cout << "抱歉，没有热水了。" << endl;
		m_waterbBoiler->setState(m_waterbBoiler->getSoldOutState());
	}
}


SoldOutState::SoldOutState(WaterBoiler* waterBoiler)
{
	this->m_waterBoiler = waterBoiler;
}
SoldOutState::~SoldOutState() {}

void SoldOutState::insertQuarter()
{
	cout << "抱歉，已经没有热水了，您不能再投币了！" << endl;
}
void SoldOutState::ejectQuarter()
{
	cout << "您还没有投入硬币，不能返还硬币！" << endl;
}
void SoldOutState::turnCrank()
{
	cout << "您按下了按钮，但已经没有热水了！" << endl;
}
void SoldOutState::dispense()
{
	cout << "没有热水了！" << endl;
}


WinnerState::WinnerState(WaterBoiler* waterBoiler)
{
	this->m_waterBoiler = waterBoiler;
}
WinnerState::~WinnerState() {}

void WinnerState::insertQuarter()
{

}
void WinnerState::ejectQuarter()
{

}
void WinnerState::turnCrank()
{

}
void WinnerState::dispense()
{

}
