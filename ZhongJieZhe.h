#pragma once
class match;	// 类声明

// 抽象类
class ZhongJieZhe {
public:
	virtual void Send(const char* m_name, match *danShen) = 0;	// 转发消息
};