#include "User.h"
#include"Link.h"
#include"Menu.h"
#include<iostream>
#include<Windows.h>
using namespace std;
Menu menu;

//�û���¼����
void User::user_login(User* head) {
	User* p=head;
	char realName[12], password[7];
	cout << "    ";
	for (int num_star = 0; num_star<17; num_star++){
		cout<<"*";
		Sleep(5);
	}
	cout << "��";
	Sleep(50);
	cout << "ӭ";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "½";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++){
		cout << "*";
		Sleep(5);
	}

	cout << "\n   1.��ʵ������";
	cin>>realName;
	loopb:
	cout<<"\n   2.���룺"; 
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
					cout << "    -----��������������������룺-----" << endl;
					goto loopb;
				}
			}
			else {
				cout << endl << "    -----��δͨ����ˣ������ĵȴ���-----" << endl;
				system("pause");
				exit(0);
			}

		}
		else {
			p = p->next;
		}
	}
	if (p == NULL) {
		cout << "    -----���û������ڣ��뷵��ע�ᣡ-----" << endl;
		Sleep(500);
		menu.chooseLoginSystem();
	}
}

//�û�ע�ắ��
User* User::user_register(User* head) {
	User* p = head;
	User*p1=new User;
	cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}
	cout << "��";
	Sleep(50);
	cout << "ӭ";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "ע";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}
	cout <<endl<< "   1.�ǳƣ�";
	cin >> p1->nickName;
	cout << "\n   2.��ʵ������";
	cin >> p1->realName;
	cout << "\n   3.���   *1.��ʦ 2.ѧ�� 3.����Ա��";
	cin >> p1->userType;
	cout << "\n   4.����ѧԺ��";
	cin >> p1->college;
	cout << "\n   5.���루�벻Ҫ����6λ����";
	cin >> p1->password;
	p1->validate = 0;
	p1->next = 0;
	while (p->next) {
		p = p->next;
	}
	p->next = p1;
	return head;
}

//�޸����뺯��
void User::modify_passwd(User* head) {
	User* p = head;
	int i;
	char realName[12], password[7], new_passwd[7];
	cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}
	cout << "��";
	Sleep(50);
	cout << "ӭ";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	cout << "��";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		cout << "*";
		Sleep(5);
	}

loopa:
	cout << "\n   1.��ʵ������";
	cin >> realName;
loopb:
	cout << "\n   2.������ԭ���룺";
	cin >> password;
	cout << "\n   3.�����������룺";
	cin >> new_passwd;
	while (p != 0) {
		if (strcmp(realName, p->realName) == 0) {
			if(strcmp(password,p->password)==0){
				if (strcmp(password, new_passwd)) {
					strcpy(p->password, new_passwd);
					cout <<endl<<endl<< "    �����޸ĳɹ���" << endl << endl << endl;
					cout << endl << endl << endl;
					cout << "    ��1��س�����";
					cin >> i;
					if (i == 1) {//����������
						system("cls");
						return;
					}
				}
				else {
					cout <<endl<<endl<< "    ���������������ͬ�����������룺"<<endl<<endl<<endl;
					goto loopb;
				}
			}
			else {
				cout << "    ��������벻��ȷ�����������룺";
				goto loopb;
			}
		}
		p = p->next;
	}
	cout <<endl<<endl<< "    ���û������ڣ����������룺"<<endl<<endl<<endl;
	goto loopa;
}