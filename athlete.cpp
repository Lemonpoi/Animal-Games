#include "athlete.h"

// ����Ϣ���͸��н�
void athlete::Send(const char *message) {
	zhongJie->Send(message, this);
}


// ���յ�����Ϣ��ʾ����
void athlete::Notify(const char *message) {
	cout << name << "�յ���Ϣ��" << message << endl;
}