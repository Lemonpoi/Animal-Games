#include "BG_ZhongJie.h"

int main(void) {
	BG_ZhongJie*zj = new BG_ZhongJie();					// �����н�
	match *ann01 = new announcer(zj, "�����˶������֪ͨ��01��");		// ����֪ͨ��
	match *chim = new athlete(zj, "���鶯��01�������˶�Ա������");		// �����˶�Ա

	// ֪ͨ�ߺ��˶�Ա���н���ע��
	zj->setann(ann01);
	zj->setath(chim);

	// ֪ͨ�߷�����Ϣ���н�
	ann01->Send("������������ı����ճ�");

	cout << endl;

	// �˶�Ա������Ϣ���н�
	chim->Send("�õ�");

	system("pause");

	ann01->Send("��������1����������Զ����������14ʱ��ϲ������ɽ����һ�����������ű������ؽ��У���������ǰ30���ӵ���������ؽ�����ǰ׼�����յ���ظ���");

	cout << endl;

	chim->Send("�յ���");

	system("pause");

	return 0;
}