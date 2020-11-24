#include "BG_ZhongJie.h"

int main(void) {
	BG_ZhongJie*zj = new BG_ZhongJie();					// 定义中介
	match *ann01 = new announcer(zj, "动物运动会比赛通知者01号");		// 定义通知者
	match *chim = new athlete(zj, "哺乳动物01号跳高运动员黑猩猩");		// 定义运动员

	// 通知者和运动员在中介中注册
	zj->setann(ann01);
	zj->setath(chim);

	// 通知者发送消息给中介
	ann01->Send("请接收明天您的比赛日程");

	cout << endl;

	// 运动员发送消息给中介
	chim->Send("好的");

	system("pause");

	ann01->Send("明天您有1个比赛，跳远比赛，下午14时在喜马拉雅山东侧一号体育场三号比赛场地进行，请至少提前30分钟到达比赛场地进行赛前准备。收到请回复。");

	cout << endl;

	chim->Send("收到！");

	system("pause");

	return 0;
}