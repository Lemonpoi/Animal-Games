#include <iostream>
#include "BG_ZhongJie.h"


void BG_ZhongJie::Send(const char *message, match *match) {

	// 判断合法性
	if (!message || !match) {
		exit(-1);
	}

	// 判断是谁发来的消息，进而对应转发
	if (match == anner) {
		cout << "中介收到来自 通知者01 的消息：【" << message << "】，准备发给 运动员黑猩猩 " << endl;
		athe->Notify(message);
	}
	else {
		cout << "中介收到来自 运动员黑猩猩 的消息：【" << message << "】，准备发给 通知者01 " << endl;
		anner->Notify(message);
	}
}



// 注册
void BG_ZhongJie::setann(match *match) {
	anner = dynamic_cast<announcer*>(match);	// dynamic_cast 将父类对象转换为子类对象
}


// 注册
void BG_ZhongJie::setath(match *match) {
	athe = dynamic_cast<athlete*>(match);	// dynamic_cast 将父类对象转换为子类对象
}