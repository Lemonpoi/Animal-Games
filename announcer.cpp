#include "announcer.h"

// ����Ϣ���͸��н�
void announcer::Send(const char *message) {
	zhongJie->Send(message, this);
}


// ���յ�����Ϣ��ʾ����
void announcer::Notify(const char *message) {
	cout << name << "�յ���Ϣ��" << message << endl;
}