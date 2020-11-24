#pragma once
#ifndef STATE_H
#define STATE_H

#include <iostream>

namespace StatePattern {

	using std::cout;
	using std::endl;

	class WaterBoiler;

	class State {
	public:
		State() {}
		virtual ~State() {}

		virtual void insertQuarter() = 0;
		virtual void ejectQuarter() = 0;
		virtual void turnCrank() = 0;
		virtual void dispense() = 0;
	};

	// δͶ��Ӳ��
	class NoQuarterState : public State {
	private:
		WaterBoiler* m_waterBoiler;
	public:
		NoQuarterState(WaterBoiler* waterBoiler);
		virtual ~NoQuarterState();

		void insertQuarter();
		void ejectQuarter();
		void turnCrank();
		void dispense();
	};

	// Ͷ��Ӳ��
	class HasQuarterState : public State {
	private:
		WaterBoiler* m_waterBoiler;
	public:
		HasQuarterState(WaterBoiler* waterBoiler);
		virtual ~HasQuarterState();

		void insertQuarter();
		void ejectQuarter();
		void turnCrank();
		void dispense();
	};

	// ׼�������ǹ�
	class SoldState : public State {
	private:
		WaterBoiler* m_waterbBoiler;
	public:
		SoldState(WaterBoiler* waterBoiler);
		virtual ~SoldState();

		void insertQuarter();
		void ejectQuarter();
		void turnCrank();
		void dispense();
	};

	// �ǹ�����
	class SoldOutState : public State {
	private:
		WaterBoiler* m_waterBoiler;
	public:
		SoldOutState(WaterBoiler* waterBoiler);
		virtual ~SoldOutState();

		void insertQuarter();
		void ejectQuarter();
		void turnCrank();
		void dispense();
	};

	class WinnerState : public State {
	private:
		WaterBoiler* m_waterBoiler;
	public:
		WinnerState(WaterBoiler* waterBoiler);
		virtual ~WinnerState();

		void insertQuarter();
		void ejectQuarter();
		void turnCrank();
		void dispense();
	};

}

#endif
