#pragma once
#include <iostream>
#include <string>
#include "ZhongJieZhe.h"


using namespace std;

// 抽象类
class match {
public:											// 一种赋值类成员变量的方式
	match(ZhongJieZhe *zhongJie, string name) : zhongJie(zhongJie), name(name) { }

	virtual void Send(const char *message) = 0;

protected:
	ZhongJieZhe *zhongJie;	// 中介
	string name;			// 客户的姓名
};