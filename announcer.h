#pragma once
#include "match.h"

// ������
class announcer : public match {
public:											// һ�ָ�ֵ���Ա�����ķ�ʽ
	announcer(ZhongJieZhe * zhongJie, string name) : match(zhongJie, name) { }

	// ������Ϣ���н�
	void Send(const char *message);

	// �յ��н鷢������Ϣ
	void Notify(const char *message);
};