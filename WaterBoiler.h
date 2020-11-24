#pragma once
#ifndef WATERBOILER_H
#define WATERBOILER_H

#include "State.h"

namespace StatePattern {

	class WaterBoiler
	{
	private:
		State* m_soldOutState;
		State* m_noQuarterState;
		State* m_hasQuarterState;
		State* m_soldState;

		State* m_state;
		int count;

	public:
		WaterBoiler(int waterBoilers = 0)
		{
			m_soldOutState = new SoldOutState(this);
			m_noQuarterState = new NoQuarterState(this);
			m_hasQuarterState = new HasQuarterState(this);
			m_soldState = new SoldState(this);

			this->count = waterBoilers;
			m_state = m_soldOutState;

			if (waterBoilers > 0) {
				m_state = m_noQuarterState;
			}
		}
		~WaterBoiler() {}
		void insertQuarter()	// ����Ӳ��
		{
			m_state->insertQuarter();
		}
		void ejectQuarter()		// ����Ӳ��
		{
			m_state->ejectQuarter();
		}
		void turnCrank()		// ���°�ť������ˮ
		{
			m_state->turnCrank();
			m_state->dispense();
		}
		void setState(State* state)
		{
			this->m_state = state;
		}
		void releaseWater()
		{
			cout << "���̵�Һ�壬���˳���" << endl;
			if (0 != count) {
				count--;
			}
		}
		void refill(int waterBoilers)
		{
			this->count = waterBoilers;
			if (waterBoilers > 0) {
				m_state = m_noQuarterState;
			}
		}

		State* getSoldOutState()
		{
			return m_soldOutState;
		}
		State* getNoQuarterState()
		{
			return m_noQuarterState;
		}
		State* getHasQuarterState()
		{
			return m_hasQuarterState;
		}
		State* getSoldState()
		{
			return m_soldState;
		}
		int getCount()
		{
			return count;
		}
	};

}

#endif
