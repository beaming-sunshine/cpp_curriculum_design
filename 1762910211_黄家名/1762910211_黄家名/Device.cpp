#include "Device.h"
#include"Link.h"
#include<iostream>
#include<iomanip>
#include <time.h>
#include<string>
#include<Windows.h>
using namespace std;
Link links;

//设备入库函数
Device* Device::device_enter(Device* head) {
	Device* p = head;
	Device*p1 = new Device;
	cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}
	cout << "欢";
	Sleep(50);
	cout << "迎";
	Sleep(50);
	cout << "进";
	Sleep(50);
	cout << "入";
	Sleep(50);
	cout << "设";
	Sleep(50);
	cout << "备";
	Sleep(50);
	cout << "入";
	Sleep(50);
	cout << "库";
	Sleep(50);
	cout << "界";
	Sleep(50);
	cout << "面";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}
	cout << endl << "   1.设备编号（10位数字）：";
	cin >> p1->num;
	cout << "\n   2.设备类型   *1.用电设备 2.供电设备 3.纸质资产 4.木质资产：";
	cin >> p1->deviceType;
	cout << "\n   3.设备名称：";
	cin >> p1->name;
	cout << "\n   4.设备型号（不超过24位）：";
	cin >> p1->typeNum;
	cout << "\n   5.设备领用人（您的真实姓名）：";
	cin >> p1->userName;
	cout << "\n   6.设备归属学院：";
	cin >> p1->college;
	cout << "\n   7.设备价格：";
	cin >> p1->price;

	strcpy(p1->enter_date , getTime());      //设置当前时间是入库时间
	strcpy(p1->dump_date, "null");              //设置报废时间
	strcpy(p1->dump_reason, "null");          //设置报废原因
	strcpy(p1->reject_reason, "null");           //设置拒绝报废原因
	p1->status = 2;
	p1->next = 0;
	while (p->next) {
		p = p->next;
	}
	p->next = p1;
	cout << endl << endl << "    设备录入成功！" << endl << endl << endl;
	Sleep(400);
	return head;
}

//申请设备报废函数
void Device::device_dumping(Device* head) {
	Device* p = head;
	int i;
	char realName[12], date[80], reason[80];
	std::cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}
	std::cout << "欢";
	Sleep(50);
	std::cout << "迎";
	Sleep(50);
	std::cout << "进";
	Sleep(50);
	std::cout << "入";
	Sleep(50);
	std::cout << "申";
	Sleep(50);
	std::cout << "请";
	Sleep(50);
	std::cout << "报";
	Sleep(50);
	std::cout << "废";
	Sleep(50);
	std::cout << "界";
	Sleep(50);
	std::cout << "面";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}

	std::cout << "\n   1.真实姓名：";
	cin >> realName;
	system("cls");
	std::cout << endl << endl << endl;
	std::cout << "    **************************系统在用设备显示*****************************" << endl;
	std::cout << "    |                                                                     |" << endl;
	std::cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(17) << left << "  归属学院" << setw(10) << left << "价钱" << setw(21) << left << "  入库日期" << setw(4) << left << "|" << endl;
	std::cout << "    |                                                                     |" << endl;
	while (p != 0) {
		if (strcmp(realName, p->userName) == 0) {
			if (p->status == 1) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(3) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(22) << left << p->enter_date << setw(4) << left << "|" << endl;
			}
		}
		p = p->next;
	}
	std::cout << "    |                                                                     |" << endl;
	std::cout << "    -----------------------------------------------------------------------" << endl;
	std::cout << "\n    【注；类型 1.用电设备    2.供电设备   3.纸质资产  4.木质资产】" << endl << "    ";
	for (int num_star = 0; num_star<71; num_star++) {    //显示*符号
		std::cout << "*";
		Sleep(5);
	}
	cout << endl << endl << endl;
	cout << "    按0进入申请状态，按1返回主菜单：";
loop0:
	cin >> i;
	if (i == 1) {          //返回主界面
		links.write_Link(head);
		system("cls");
		return;
	}
	else if (i == 0) {
		cout << "    请输入要申请报废的设备的入库日期：";
		cin >> date;
		cout << "    请说明报废理由：";
		cin >> reason;
		p = head;
		while (p != 0) {
			if (strcmp(date, p->enter_date) == 0) {
				p->status = 3;
				strcpy(p->dump_reason, reason);
				cout << "    已提交申请，请等候通知！" ;
			}
			p = p->next;
		}
	}
	else {
			cout << "    输入不规范，请重新输入：";
			goto loop0;
		}
	system("cls");
}

//查找设备信息
void Device::device_search(Device* head, int i) {
	Device* p = head;
	char realName[24];
	std::cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}
	std::cout << "欢";
	Sleep(50);
	std::cout << "迎";
	Sleep(50);
	std::cout << "进";
	Sleep(50);
	std::cout << "入";
	Sleep(50);
	std::cout << "按";
	Sleep(50);
	std::cout << "需";
	Sleep(50);
	std::cout << "查";
	Sleep(50);
	std::cout << "询";
	Sleep(50);
	std::cout << "界";
	Sleep(50);
	std::cout << "面";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}

	switch (i) {
	case(1):
		std::cout << "\n   1.请输入真实姓名：";
		cin >> realName;
		system("cls");
		std::cout << endl << endl << endl;
		std::cout << "    **************************设备查询信息显示*****************************" << endl;
		std::cout << "    |                                                                     |" << endl;
		std::cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(17) << left << "  归属学院" << setw(10) << left << "价钱" << setw(21) << left << "  申请状态" << setw(4) << left << "|" << endl;
		std::cout << "    |                                                                     |" << endl;
		while (p != 0) {
			if (strcmp(realName, p->userName) == 0) {

				if (p->status == 1) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left <<p->college << setw(10) << left << p->price<< setw(21) << left << "正在使用！"  << setw(4) << left << "|" << endl;
				}
				else if (p->status == 0) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "已报废！" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 2) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "申请入库中···" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 3) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "申请报废中···" << setw(4) << left << "|" << endl;
				}
			}
			p = p->next;
		}
		std::cout << "    |                                                                     |" << endl;
		std::cout << "    -----------------------------------------------------------------------" << endl;
		std::cout << "\n    【注；类型 1.用电设备    2.供电设备   3.纸质资产  4.木质资产】" << endl << "    ";
		for (int num_star = 0; num_star<71; num_star++) {    //显示*符号
			std::cout << "*";
			Sleep(5);
		}
		break;
	case(2):
		std::cout << "\n   1.请输入设备类型（1.用电设备    2.供电设备   3.纸质资产  4.木质资产）：";
		int n;
		cin >> n;
		system("cls");
		std::cout << endl << endl << endl;
		std::cout << "    **************************设备查询信息显示*****************************" << endl;
		std::cout << "    |                                                                     |" << endl;
		std::cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(17) << left << "  归属学院" << setw(10) << left << "价钱" << setw(21) << left << "  申请状态" << setw(4) << left << "|" << endl;
		std::cout << "    |                                                                     |" << endl;
		while (p != 0) {
			if (n == p->deviceType) {
				if (p->status == 1) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "正在使用！" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 0) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "已报废！" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 2) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "申请入库中···" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 3) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "申请报废中···" << setw(4) << left << "|" << endl;
				}
			}
			p = p->next;
		}
		std::cout << "    |                                                                     |" << endl;
		std::cout << "    -----------------------------------------------------------------------" << endl;
		std::cout << "\n    【注；类型 1.用电设备    2.供电设备   3.纸质资产  4.木质资产】" << endl << "    ";
		for (int num_star = 0; num_star<71; num_star++) {    //显示*符号
			std::cout << "*";
			Sleep(5);
		}
		break;
	case(3):
		std::cout << "\n   1.请输入归属学院：";
		cin >> realName;
		system("cls");
		std::cout << endl << endl << endl;
		std::cout << "    **************************设备查询信息显示*****************************" << endl;
		std::cout << "    |                                                                     |" << endl;
		std::cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(17) << left << "  归属学院" << setw(10) << left << "价钱" << setw(21) << left << "  申请状态" << setw(4) << left << "|" << endl;
		std::cout << "    |                                                                     |" << endl;
		while (p != 0) {
			if (strcmp(realName, p->college) == 0) {

				if (p->status == 1) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "正在使用！" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 0) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "已报废！" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 2) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "申请入库中···" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 3) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "申请报废中···" << setw(4) << left << "|" << endl;
				}
			}
			p = p->next;
		}
		std::cout << "    |                                                                     |" << endl;
		std::cout << "    -----------------------------------------------------------------------" << endl;
		std::cout << "\n    【注；类型 1.用电设备    2.供电设备   3.纸质资产  4.木质资产】" << endl << "    ";
		for (int num_star = 0; num_star<71; num_star++) {    //显示*符号
			std::cout << "*";
			Sleep(5);
		}
		break;
	}
	cout << endl << endl << endl;
	cout << "    按1后回车返回";
	cin >> i;
	if (i == 1) {//返回主界面
		system("cls");
		return;
	}
}

//查看设备申请情况
void Device:: showApply(Device* head) {

	Device* p = head;
	int i;
	char realName[12];
	std::cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}
	std::cout << "欢";
	Sleep(50);
	std::cout << "迎";
	Sleep(50);
	std::cout << "进";
	Sleep(50);
	std::cout << "入";
	Sleep(50);
	std::cout << "申";
	Sleep(50);
	std::cout << "请";
	Sleep(50);
	std::cout << "情";
	Sleep(50);
	std::cout << "况";
	Sleep(50);
	std::cout << "界";
	Sleep(50);
	std::cout << "面";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}

	std::cout << "\n   1.真实姓名：";
	cin >> realName;
	system("cls");
	std::cout << endl << endl << endl;
	std::cout << "    **************************设备申请情况显示*****************************" << endl;
	std::cout << "    |                                                                     |" << endl;
	std::cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(48) << left << "  申请状态" << setw(4) << left << "|" << endl;
	std::cout << "    |                                                                     |" << endl;
	while (p != 0) {
		if (strcmp(realName, p->userName) == 0) {
			
			if (p->status == 1&&strcmp(p->reject_reason,"null")==0) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(48) << left <<"已通过审核入库！"<< setw(4) << left << "|" << endl;
			}
			if (p->status == 1 && strcmp(p->reject_reason, "null") != 0) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(16) << left << "未通过审核报废！" << setw(32) << left <<p->reject_reason<< setw(4) << left << "|" << endl;
			}
			else if (p->status == 0) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType  << setw(48) << left << "已通过审核报废！" << setw(4) << left << "|" << endl;
			}
			else if (p->status == 2) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType  << setw(48) << left << "申请入库中···" << setw(4) << left << "|" << endl;
			}
			else if (p->status == 3) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType  << setw(48) << left << "申请报废中···" << setw(4) << left << "|" << endl;
			}
		}
		p = p->next;
	}
	std::cout << "    |                                                                     |" << endl;
	std::cout << "    -----------------------------------------------------------------------" << endl;
	std::cout << "\n    【注；类型 1.用电设备    2.供电设备   3.纸质资产  4.木质资产】" << endl << "    ";
	for (int num_star = 0; num_star<71; num_star++) {    //显示*符号
		std::cout << "*";
		Sleep(5);
	}
	cout << endl << endl << endl;
	cout << "    按1返回主菜单：";
	cin >> i;
	if (i == 1) {          //返回主界面
		links.write_Link(head);
		system("cls");
		return;
	}
}











//工具函数
//获取当前时间函数
char *Device:: getTime() {
	time_t timep;
	time(&timep);
	char tmp[80];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d_%H:%M:%S", localtime(&timep));
	return tmp;
}