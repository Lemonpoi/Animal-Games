#pragma once
#include "match.h"

// 具体类
class announcer : public match {
public:											// 一种赋值类成员变量的方式
	announcer(ZhongJieZhe * zhongJie, string name) : match(zhongJie, name) { }

	// 发送消息给中介
	void Send(const char *message);

	// 收到中介发来的消息
	void Notify(const char *message);
};