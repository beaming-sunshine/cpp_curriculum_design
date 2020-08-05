#include "User.h"
#include"Link.h"
#include"Menu.h"
#include<iostream>
#include<Windows.h>
using namespace std;
Menu menu;

//用户登录函数
void User::user_login(User* head) {
	User* p=head;
	char realName[12], password[7];
	cout << "    ";
	for (int num_star = 0; num_star<17; num_star++){
		cout<<"*";
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
	cout << "登";
	Sleep(50);
	cout << "陆";
	Sleep(50);
	cout << "界";
	Sleep(50);
	cout << "面";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++){
		cout << "*";
		Sleep(5);
	}

	cout << "\n   1.真实姓名：";
	cin>>realName;
	loopb:
	cout<<"\n   2.密码："; 
	cin >> password;
	while (p){

		if (strcmp(realName, p->realName) == 0) {
			if (p->validate == 1) {
				if (strcmp(password, p->password) == 0) {
					if (p->userType == 3) {
						menu.chooseAdminSystem();
					}
					else {
						menu.chooseUserSystem();
					}
					break;
				}
				else {
					cout << "    -----密码输入错误！请重新输入：-----" << endl;
					goto loopb;
				}
			}
			else {
				cout << endl << "    -----还未通过审核，请耐心等待！-----" << endl;
				system("pause");
				exit(0);
			}

		}
		else {
			p = p->next;
		}
	}
	if (p == NULL) {
		cout << "    -----此用户不存在！请返回注册！-----" << endl;
		Sleep(500);
		menu.chooseLoginSystem();
	}
}

//用户注册函数
User* User::user_register(User* head) {
	User* p = head;
	User*p1=new User;
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
	cout << "注";
	Sleep(50);
	cout << "册";
	Sleep(50);
	cout << "界";
	Sleep(50);
	cout << "面";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}
	cout <<endl<< "   1.昵称：";
	cin >> p1->nickName;
	cout << "\n   2.真实姓名：";
	cin >> p1->realName;
	cout << "\n   3.类别   *1.老师 2.学生 3.管理员：";
	cin >> p1->userType;
	cout << "\n   4.所在学院：";
	cin >> p1->college;
	cout << "\n   5.密码（请不要超过6位）：";
	cin >> p1->password;
	p1->validate = 0;
	p1->next = 0;
	while (p->next) {
		p = p->next;
	}
	p->next = p1;
	return head;
}

//修改密码函数
void User::modify_passwd(User* head) {
	User* p = head;
	int i;
	char realName[12], password[7], new_passwd[7];
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
	cout << "修";
	Sleep(50);
	cout << "改";
	Sleep(50);
	cout << "密";
	Sleep(50);
	cout << "码";
	Sleep(50);
	cout << "界";
	Sleep(50);
	cout << "面";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}

loopa:
	cout << "\n   1.真实姓名：";
	cin >> realName;
loopb:
	cout << "\n   2.请输入原密码：";
	cin >> password;
	cout << "\n   3.请输入新密码：";
	cin >> new_passwd;
	while (p != 0) {
		if (strcmp(realName, p->realName) == 0) {
			if(strcmp(password,p->password)==0){
				if (strcmp(password, new_passwd)) {
					strcpy(p->password, new_passwd);
					cout <<endl<<endl<< "    密码修改成功！" << endl << endl << endl;
					cout << endl << endl << endl;
					cout << "    按1后回车返回";
					cin >> i;
					if (i == 1) {//返回主界面
						system("cls");
						return;
					}
				}
				else {
					cout <<endl<<endl<< "    两次输入的密码相同，请重新输入："<<endl<<endl<<endl;
					goto loopb;
				}
			}
			else {
				cout << "    输入的密码不正确，请重新输入：";
				goto loopb;
			}
		}
		p = p->next;
	}
	cout <<endl<<endl<< "    该用户不存在，请重新输入："<<endl<<endl<<endl;
	goto loopa;
}