#pragma once
#include <iostream>
#include <string>
#include "ZhongJieZhe.h"


using namespace std;

// ������
class match {
public:											// һ�ָ�ֵ���Ա�����ķ�ʽ
	match(ZhongJieZhe *zhongJie, string name) : zhongJie(zhongJie), name(name) { }

	virtual void Send(const char *message) = 0;

protected:
	ZhongJieZhe *zhongJie;	// �н�
	string name;			// �ͻ�������
};