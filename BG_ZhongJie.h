#pragma once
#include "ZhongJieZhe.h"
#include "announcer.h"
#include "athlete.h"

class match;	// ������

// ������----------------->�̳��������
class BG_ZhongJie : public ZhongJieZhe {
public:
	BG_ZhongJie() : anner(NULL), athe(NULL) { }	// Ĭ�ϳ�ʼ��ֵΪNULL

	// �н飨֪ͨ��ת����Ϣ
	void Send(const char *message, match *match);

	void setann(match *match);	// ���н���ע��
	void setath(match *match); // ���н���ע��

private:
	// �н飨֪ͨ����Ҫ֪�����еĿͻ�
	announcer *anner;
	athlete *athe;
};
