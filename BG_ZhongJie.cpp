#include <iostream>
#include "BG_ZhongJie.h"


void BG_ZhongJie::Send(const char *message, match *match) {

	// �жϺϷ���
	if (!message || !match) {
		exit(-1);
	}

	// �ж���˭��������Ϣ��������Ӧת��
	if (match == anner) {
		cout << "�н��յ����� ֪ͨ��01 ����Ϣ����" << message << "����׼������ �˶�Ա������ " << endl;
		athe->Notify(message);
	}
	else {
		cout << "�н��յ����� �˶�Ա������ ����Ϣ����" << message << "����׼������ ֪ͨ��01 " << endl;
		anner->Notify(message);
	}
}



// ע��
void BG_ZhongJie::setann(match *match) {
	anner = dynamic_cast<announcer*>(match);	// dynamic_cast ���������ת��Ϊ�������
}


// ע��
void BG_ZhongJie::setath(match *match) {
	athe = dynamic_cast<athlete*>(match);	// dynamic_cast ���������ת��Ϊ�������
}