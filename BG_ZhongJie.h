#pragma once
#include "ZhongJieZhe.h"
#include "announcer.h"
#include "athlete.h"

class match;	// 类声明

// 具体类----------------->继承与抽象类
class BG_ZhongJie : public ZhongJieZhe {
public:
	BG_ZhongJie() : anner(NULL), athe(NULL) { }	// 默认初始化值为NULL

	// 中介（通知）转发消息
	void Send(const char *message, match *match);

	void setann(match *match);	// 在中介中注册
	void setath(match *match); // 在中介中注册

private:
	// 中介（通知）需要知道所有的客户
	announcer *anner;
	athlete *athe;
};
