#pragma once
#include "match.h"

// ������
class athlete : public match {
public:												// һ�ָ�ֵ���Ա�����ķ�ʽ
	athlete(ZhongJieZhe * zhongJie, string name) : match(zhongJie, name) { }

	// ������Ϣ���н�
	void Send(const char *message);

	// �յ��н鷢������Ϣ
	void Notify(const char *message);
};