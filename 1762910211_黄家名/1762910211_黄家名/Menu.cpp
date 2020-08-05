#include "Menu.h"
#include"Link.h"
#include"User.h"
#include<iostream>
#include<Windows.h>
#include<iomanip>
using namespace std;
User* participator;
Link link;
Device* device;


//登陆界面的显示
void Menu::showLoginMenu() {
	cout <<endl<< "                         欢迎来到登陆界面！                     "<<endl<<endl;
	cout << "    ***********************登陆界面菜单**********************"<<endl;
	cout << "    |                                                       |"<<endl;
	cout << "    |                    ___1:用户注册___                   |"<<endl;
	cout << "    |                    ___2:用户登录___                   |"<<endl;
	cout << "    |                                                       |"<<endl;
	cout << "    ---------------------------------------------------------"<<endl;
	cout << "    *********************************************************"<<endl<<endl<<endl;
	cout << "    输入序号以使用功能：";
}

//用户界面的显示
void Menu::showUserMenu() {
	cout << endl << "                     欢迎进入资产设备管理系统！                     " << endl<<endl;
	cout << "    *********************系统功能菜单************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    |                ___1:设备申请入库___                   |" << endl;
	cout << "    |                ___2:设备申请报废___                   |" << endl;
	cout << "    |                ___3:设备信息查询___                   |" << endl;
	cout << "    |                ___4:查看申请情况___                   |" << endl;
	cout << "    |                ___5:在用设备信息___                   |" << endl;
	cout << "    |                ___6:修改用户密码___                   |" << endl;
	cout << "    |                ___0:退出管理系统___                   |" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout << "    *********************************************************" << endl << endl << endl;
	cout << "    输入以上序号使用其功能：";
}

//管理员菜单的显示
void Menu::showAdminMenu() {
	cout << endl << "                     欢迎进入资产设备管理系统！                     " << endl << endl;
	cout << "    *********************系统功能菜单************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    |                ___1:审批用户注册___                   |" << endl;
	cout << "    |                ___2:审批设备入库___                   |" << endl;
	cout << "    |                ___3:审批设备报废___                   |" << endl;
	cout << "    |                ___4:查看系统用户___                   |" << endl;
	cout << "    |                ___5:在用设备信息___                   |" << endl;
	cout << "    |                ___6:报废设备信息___                   |" << endl;
	cout << "    |                ___7:设备信息查询___                   |" << endl;
	cout << "    |                ___8:修改用户密码___                   |" << endl;
	cout << "    |                ___0:退出管理系统___                   |" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout << "    *********************************************************" << endl << endl << endl;
	cout << "    输入以上序号使用其功能：";

}

//查询设备菜单的显示
void Menu::showSearchDeviceMenu() {
	cout << endl << endl << endl;
	cout << "    *********************系统设备查询************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    |                ___1:按照用户姓名___                   |" << endl;
	cout << "    |                ___2:按照设备类别___                   |" << endl;
	cout << "    |                ___3:按照归属学院___                   |" << endl;
	cout << "    |                ___0:返回系统首页___                   |" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout << "    *********************************************************" << endl << endl << endl;
	cout << "    输入以上序号使用其功能：";
}

//系统用户的显示
void Menu::showSystemUser() {
	int i;
	User *p;
	cout << endl<< endl << endl;
	cout << "    *********************系统用户显示************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << setw(8) << left << "    |" << setw(12) << left <<" 昵称" << setw(12) << left << "真实姓名"<< setw(8) << left << "类别" << setw(20) << left << "  所在学院" << setw(12) << left << "|" << endl;
	cout << "    |                                                       |" << endl;
	p = participator;
	while (p != 0)
	{
		if (p->validate == 1)
			cout << setw(8) << left << "    |" << setw(12) << left << p->nickName << setw(12) << left << p->realName << setw(8) << left << p->userType << setw(20) << left << p->college << setw(12) << left << "|" << endl;
		p = p->next;
	}
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout<<"\n    【注；类别 1.教师    2.学生   3.管理员】"<<endl << "    ";
	for (int num_star = 0; num_star<57; num_star++) {    //显示*符号
		cout<<"*";
		Sleep(5);
	}
	cout << endl << endl << endl;
	cout << "    按1后回车返回";
	cin >> i;
	if (i == 1){//返回主界面
		system("cls");
		return;
	}
}

//申请用户的显示
void Menu::showAppliers() {
	int i;
	char name[12];
	User *p;
	cout << endl << endl << endl;
	cout << "    *********************申请用户显示************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << setw(8) << left << "    |" << setw(12) << left << " 昵称" << setw(12) << left << "真实姓名" << setw(8) << left << "类别" << setw(20) << left << "  所在学院" << setw(12) << left << "|" << endl;
	cout << "    |                                                       |" << endl;
	p = participator;
	while (p != 0)
	{
		if(p->validate==0)
			cout << setw(8) << left << "    |" << setw(12) << left << p->nickName << setw(12) << left << p->realName << setw(8) << left << p->userType << setw(20) << left << p->college << setw(12) << left << "|" << endl;
		p = p->next;
	}
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout << "\n    【注；类别 1.教师    2.学生   3.管理员】" << endl << "    ";
	for (int num_star = 0; num_star<57; num_star++) {    //显示*符号
		cout << "*";
		Sleep(5);
	}
	loop4:
	cout << endl << endl << endl;
	cout << "    按0进入审核状态，按1返回主菜单：";
	loop0:
	cin >> i;
	if (i == 1) {          //返回主界面
		link.write_Link(participator);
		system("cls");
		return;
	}
	else if (i == 0) {
		cout << "    请输入要审核通过的用户的真实姓名：";
		cin >> name;
		p = participator;
		while (p != 0){
			if (strcmp(name, p->realName) == 0) {
				p->validate = 1;
				cout << "    已审核通过" << name << "！";
				goto loop4;
			}
			p = p->next;
		}
	}
	else {
		cout << "    输入不规范，请重新输入：";
		goto loop0;
	}
}

//系统设备的显示
void Menu:: showDevice(int switch_num) {
	int i;
	Device *p;
	char date[80],reason[80];
	cout << endl << endl << endl;
	switch (switch_num) {
	case(0):
		cout << "    **************************系统报废设备显示*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(17) << left << "  归属学院" << setw(10) << left << "价钱" << setw(21) << left << "  报废日期" << setw(4) << left << "|" << endl;
		cout << "    |                                                                     |" << endl;
		break;
	case(1):
		cout << "    **************************系统在用设备显示*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(17) << left << "  归属学院" << setw(10) << left << "价钱" << setw(21) << left << "  入库日期" << setw(4) << left << "|" << endl;
		cout << "    |                                                                     |" << endl;
		break;
	case(2):
		cout << "    **************************申请入库设备显示*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(3) << left << "类型" << setw(17) << left << "  归属学院" << setw(10) << left << "价钱" << setw(20) << left << "  入库日期" << setw(4) << left << "|" << endl;
		cout << "    |                                                                     |" << endl;
		break;
	case(3):
		cout << "    **************************申请报废设备显示*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "名称" << setw(8) << left << "领用人" << setw(22) << left << "  入库日期" <<setw(30)<<left<<"申请原因"<< setw(4) << left << "|" << endl;
		cout << "    |                                                                     |" << endl;
		break;
	}
	p = device;
	while (p != 0)
	{
		if (switch_num == 0) {
			if (p->status == switch_num)
				cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(3) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(22) << left << p->dump_date << setw(4) << left << "|" << endl;
		}
		else if (switch_num==1||switch_num ==2) {
			if (p->status == switch_num)
				cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(3) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(22) << left << p->enter_date << setw(4) << left << "|" << endl;
		}
		else {
			if (p->status == switch_num)
				cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName   << setw(22) << left << p->enter_date << setw(30) << left << p->dump_reason<< setw(4) << left << "|" << endl;
		}
		p = p->next;
	}
	cout << "    |                                                                     |" << endl;
	cout << "    -----------------------------------------------------------------------" << endl;
	cout << "\n    【注；类型 1.用电设备    2.供电设备   3.纸质资产  4.木质资产】" << endl << "    ";
	for (int num_star = 0; num_star<71; num_star++) {    //显示*符号
		cout << "*";
		Sleep(5);
	}

	switch (switch_num) {
	case(0):
	case(1):
		cout << endl << endl << endl;
		cout << "    按1后回车返回";
		cin >> i;
		if (i == 1) {//返回主界面
			system("cls");
			return;
		}
		break;
	case(2):
	loop4:
		cout << endl << endl << endl;
		cout << "    按0进入审核状态，按1返回主菜单：";
	loop0:
		cin >> i;
		if (i == 1) {          //返回主界面
			link.write_Link(device);
			system("cls");
			return;
		}
		else if (i == 0) {
			cout << "    请输入要审核通过的设备的入库日期：";
			cin >> date;
			p = device;
			while (p != 0) {
				if (strcmp(date, p->enter_date) == 0) {
					p->status = 1;
					cout << "    已审核通过" << p->userName<<"的"<<p->name << "！";
					goto loop4;
				}
				p = p->next;
			}
		}
		else {
			cout << "    输入不规范，请重新输入：";
			goto loop0;
		}
		break;
	case(3):
	loop:
		cout << endl << endl << endl;
		cout << "    按0返回主菜单，按1进入审核通过状态，按2进入审核拒绝状态：";
	loops:
		cin >> i;
		if (i == 0) {          //返回主界面
			link.write_Link(device);
			system("cls");
			return;
		}
		else if (i == 1) {
			cout << "    请输入要审核通过的设备的入库日期：";
			cin >> date;
			p = device;
			while (p != 0) {
				if (strcmp(date, p->enter_date) == 0) {
					p->status = 0;
					strcpy(p->dump_date, (*device).getTime());
					cout << "    已审核通过" << p->userName << "的" << p->name << "报废！";
					goto loop;
				}
				p = p->next;
			}
		}
		else if (i == 2) {
			cout << "    请输入要审核拒绝的设备的入库日期：";
			cin >> date;
			cout << "    请输入要拒绝的理由：";
			cin >> reason;
			p = device;
			while (p != 0) {
				if (strcmp(date, p->enter_date) == 0) {
					p->status = 1;
					strcpy(p->reject_reason, reason);
					cout << "    已审核拒绝" << p->userName << "的" << p->name << "报废！";
					goto loop;
				}
				p = p->next;
			}
		}
		else {
			cout << "    输入不规范，请重新输入：";
			goto loops;
		}
		break;
	}
	
}




//登录系统菜单跳转
void Menu::chooseLoginSystem() {

	system("color e9");                              //控制背景和字体颜色：xx（前面是背景颜色，后面为字体颜色）
	system("cls");
	showLoginMenu();
	int switch_num;
	participator = link.Create();
	device = link.Create_link();
loop7:
	cin>>switch_num;
	switch (switch_num)
	{
	case 1:system("cls");
		participator= (*participator).user_register(participator);
		link.write_Link(participator);
		system("cls");
		(*participator).user_login(participator);
		break;
	case 2: system("cls");
		(*participator).user_login(participator);
		break;
	default:
		cout<<"    错误信息，请重新输入：";
		goto loop7;
	}
	
}



//用户系统菜单跳转
void Menu::chooseUserSystem() {

	system("color e9");                              //控制背景和字体颜色：xx（前面是背景颜色，后面为字体颜色）
	system("cls");
	printf("请稍等.");
	Sleep(200);
	system("cls");
	printf("请稍等..");
	Sleep(200);
	system("cls");
	printf("请稍等...");
	Sleep(700);
	system("cls");

	int i = 1;
	while (i)
	{
		showUserMenu();
		cin >> i;
		switch (i)                                                //顾客系统功能选择
		{
		case 1: system("cls");                             //设备申请入库模块
			device = (*device).device_enter(device);
			link.write_Link(device);
			system("cls");
			break;

		case 2: system("cls");                               //设备申请报废模块
			(*device).device_dumping(device);
			break;


		case 3: system("cls");                                //设备信息查询
			chooseSearchDevice();
			break;

		case 4: system("cls");                                //查看申请情况
			(*device).showApply(device);
			break;

		case 5: system("cls");                                 //在用设备信息
			showDevice(1);
			break;

		case 6: system("cls");                                 //修改用户密码
			(*participator).modify_passwd(participator);
			link.write_Link(participator);
			 break;

		case 0:                                                            //退出程序
			cout<<"    *********************感谢使用！**************************"<<endl;
			link.delete_Link(participator);
			link.delete_Link(device);
			break;

		default:
			cout << "    输入错误！" << endl;
			Sleep(500);
			system("cls");
			break;
		}
	}


}



//管理员系统菜单跳转
void Menu::chooseAdminSystem() {

	system("color e9");                              //控制背景和字体颜色：xx（前面是背景颜色，后面为字体颜色）
	system("cls");
	printf("请稍等.");
	Sleep(200);
	system("cls");
	printf("请稍等..");
	Sleep(200);
	system("cls");
	printf("请稍等...");
	Sleep(700);
	system("cls");
	int i = 1;
	while (i)
	{
		showAdminMenu();
		cin >> i;
		switch (i) {                             //管理员系统功能选择
		case 1: system("cls");             //查看申请者
			showAppliers();
			break;

		case 2: system("cls");             //审批设备入库
			showDevice(2);
			break;

		case 3: system("cls");            //审批设备报废
			showDevice(3);
			break;

		case 4: system("cls");           //查看系统用户
			showSystemUser();
			break;

		case 5: system("cls");          //在用设备信息
			showDevice(1);
			break;

		case 6: system("cls");            //报废设备信息
			showDevice(0);
			break;

		case 7: system("cls");          //设备信息查询
			chooseSearchDevice();
			break;

		case 8: system("cls");          //修改用户密码
			(*participator).modify_passwd(participator);
			link.write_Link(participator);
			break;

		case 0:                                       //退出程序
			cout << "    *********************感谢使用！**************************" << endl;
			link.delete_Link(participator);
			link.delete_Link(device);
			break;

		default:
			cout << "    输入错误！" << endl;
			Sleep(500);
			system("cls");
			break;
		}
	}

}


//查询设备功能跳转
void Menu::chooseSearchDevice() {
	system("color e9");                              //控制背景和字体颜色：xx（前面是背景颜色，后面为字体颜色）
	system("cls");
	int switch_num=1;
	while (switch_num) {
		showSearchDeviceMenu();
		cin >> switch_num;
		switch (switch_num) {
		case 1:system("cls");
			(*device).device_search(device, 1);
			break;
		case 2: system("cls");
			(*device).device_search(device, 2);
			break;

		case 3: system("cls");
			(*device).device_search(device, 3);
			break;

		case 0: system("cls");
			return;
			break;
		default:
			cout << "    输入错误！" << endl;
			Sleep(500);
			system("cls");
			break;
		}
	}

}