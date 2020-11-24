#include "announcer.h"

// 把信息发送给中介
void announcer::Send(const char *message) {
	zhongJie->Send(message, this);
}


// 把收到的消息显示出来
void announcer::Notify(const char *message) {
	cout << name << "收到消息：" << message << endl;
}