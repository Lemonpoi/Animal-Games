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
	cout << "��Ͷ��������Ӳ��" << endl;
	m_waterBoiler->setState(m_waterBoiler->getHasQuarterState());
}
void NoQuarterState::ejectQuarter()
{
	cout << "����δͶ��Ӳ�ҡ�" << endl;
}
void NoQuarterState::turnCrank()
{
	cout << "�������˰�ť����ϵͳ��δ��⵽����Ͷ�ҡ�" << endl;
}
void NoQuarterState::dispense()
{
	cout << "����Ҫ��Ͷ�ҡ�" << endl;
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
	cout << "��������Ͷ���ˣ�" << endl;
}
void HasQuarterState::ejectQuarter()
{
	cout << "Ӳ���ѷ�����" << endl;
	m_waterBoiler->setState(m_waterBoiler->getNoQuarterState());
}
void HasQuarterState::turnCrank()
{
	cout << "���Ѱ��°�ť��" << endl;
	m_waterBoiler->setState(m_waterBoiler->getSoldState());
}
void HasQuarterState::dispense()
{
	cout << "��Ǹ������û����ˮ�ˡ�" << endl;
}



SoldState::SoldState(WaterBoiler* waterBoiler)
{
	this->m_waterbBoiler = waterBoiler;
}
SoldState::~SoldState() {}

void SoldState::insertQuarter()
{
	cout << "���Եȣ����ڳ�ˮ��С�����ˣ�" << endl;
}
void SoldState::ejectQuarter()
{
	cout << "��Ǹ�����Ѿ�������ť�ˡ�" << endl;
}
void SoldState::turnCrank()
{
	cout << "������Ҫ������ˮ�����ٴ�Ͷ�ң�" << endl;
}
void SoldState::dispense()
{
	m_waterbBoiler->releaseWater();
	if (m_waterbBoiler->getCount() > 0) {
		m_waterbBoiler->setState(m_waterbBoiler->getNoQuarterState());
	}
	else {
		cout << "��Ǹ��û����ˮ�ˡ�" << endl;
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
	cout << "��Ǹ���Ѿ�û����ˮ�ˣ���������Ͷ���ˣ�" << endl;
}
void SoldOutState::ejectQuarter()
{
	cout << "����û��Ͷ��Ӳ�ң����ܷ���Ӳ�ң�" << endl;
}
void SoldOutState::turnCrank()
{
	cout << "�������˰�ť�����Ѿ�û����ˮ�ˣ�" << endl;
}
void SoldOutState::dispense()
{
	cout << "û����ˮ�ˣ�" << endl;
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
