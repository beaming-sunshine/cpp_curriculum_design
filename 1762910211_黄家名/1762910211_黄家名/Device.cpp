#include "Device.h"
#include"Link.h"
#include<iostream>
#include<iomanip>
#include <time.h>
#include<string>
#include<Windows.h>
using namespace std;
Link links;

//�豸��⺯��
Device* Device::device_enter(Device* head) {
	Device* p = head;
	Device*p1 = new Device;
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
	cout << endl << "   1.�豸��ţ�10λ���֣���";
	cin >> p1->num;
	cout << "\n   2.�豸����   *1.�õ��豸 2.�����豸 3.ֽ���ʲ� 4.ľ���ʲ���";
	cin >> p1->deviceType;
	cout << "\n   3.�豸���ƣ�";
	cin >> p1->name;
	cout << "\n   4.�豸�ͺţ�������24λ����";
	cin >> p1->typeNum;
	cout << "\n   5.�豸�����ˣ�������ʵ��������";
	cin >> p1->userName;
	cout << "\n   6.�豸����ѧԺ��";
	cin >> p1->college;
	cout << "\n   7.�豸�۸�";
	cin >> p1->price;

	strcpy(p1->enter_date , getTime());      //���õ�ǰʱ�������ʱ��
	strcpy(p1->dump_date, "null");              //���ñ���ʱ��
	strcpy(p1->dump_reason, "null");          //���ñ���ԭ��
	strcpy(p1->reject_reason, "null");           //���þܾ�����ԭ��
	p1->status = 2;
	p1->next = 0;
	while (p->next) {
		p = p->next;
	}
	p->next = p1;
	cout << endl << endl << "    �豸¼��ɹ���" << endl << endl << endl;
	Sleep(400);
	return head;
}

//�����豸���Ϻ���
void Device::device_dumping(Device* head) {
	Device* p = head;
	int i;
	char realName[12], date[80], reason[80];
	std::cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}
	std::cout << "��";
	Sleep(50);
	std::cout << "ӭ";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}

	std::cout << "\n   1.��ʵ������";
	cin >> realName;
	system("cls");
	std::cout << endl << endl << endl;
	std::cout << "    **************************ϵͳ�����豸��ʾ*****************************" << endl;
	std::cout << "    |                                                                     |" << endl;
	std::cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(17) << left << "  ����ѧԺ" << setw(10) << left << "��Ǯ" << setw(21) << left << "  �������" << setw(4) << left << "|" << endl;
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
	std::cout << "\n    ��ע������ 1.�õ��豸    2.�����豸   3.ֽ���ʲ�  4.ľ���ʲ���" << endl << "    ";
	for (int num_star = 0; num_star<71; num_star++) {    //��ʾ*����
		std::cout << "*";
		Sleep(5);
	}
	cout << endl << endl << endl;
	cout << "    ��0��������״̬����1�������˵���";
loop0:
	cin >> i;
	if (i == 1) {          //����������
		links.write_Link(head);
		system("cls");
		return;
	}
	else if (i == 0) {
		cout << "    ������Ҫ���뱨�ϵ��豸��������ڣ�";
		cin >> date;
		cout << "    ��˵���������ɣ�";
		cin >> reason;
		p = head;
		while (p != 0) {
			if (strcmp(date, p->enter_date) == 0) {
				p->status = 3;
				strcpy(p->dump_reason, reason);
				cout << "    ���ύ���룬��Ⱥ�֪ͨ��" ;
			}
			p = p->next;
		}
	}
	else {
			cout << "    ���벻�淶�����������룺";
			goto loop0;
		}
	system("cls");
}

//�����豸��Ϣ
void Device::device_search(Device* head, int i) {
	Device* p = head;
	char realName[24];
	std::cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}
	std::cout << "��";
	Sleep(50);
	std::cout << "ӭ";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "ѯ";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}

	switch (i) {
	case(1):
		std::cout << "\n   1.��������ʵ������";
		cin >> realName;
		system("cls");
		std::cout << endl << endl << endl;
		std::cout << "    **************************�豸��ѯ��Ϣ��ʾ*****************************" << endl;
		std::cout << "    |                                                                     |" << endl;
		std::cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(17) << left << "  ����ѧԺ" << setw(10) << left << "��Ǯ" << setw(21) << left << "  ����״̬" << setw(4) << left << "|" << endl;
		std::cout << "    |                                                                     |" << endl;
		while (p != 0) {
			if (strcmp(realName, p->userName) == 0) {

				if (p->status == 1) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left <<p->college << setw(10) << left << p->price<< setw(21) << left << "����ʹ�ã�"  << setw(4) << left << "|" << endl;
				}
				else if (p->status == 0) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "�ѱ��ϣ�" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 2) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "��������С�����" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 3) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "���뱨���С�����" << setw(4) << left << "|" << endl;
				}
			}
			p = p->next;
		}
		std::cout << "    |                                                                     |" << endl;
		std::cout << "    -----------------------------------------------------------------------" << endl;
		std::cout << "\n    ��ע������ 1.�õ��豸    2.�����豸   3.ֽ���ʲ�  4.ľ���ʲ���" << endl << "    ";
		for (int num_star = 0; num_star<71; num_star++) {    //��ʾ*����
			std::cout << "*";
			Sleep(5);
		}
		break;
	case(2):
		std::cout << "\n   1.�������豸���ͣ�1.�õ��豸    2.�����豸   3.ֽ���ʲ�  4.ľ���ʲ�����";
		int n;
		cin >> n;
		system("cls");
		std::cout << endl << endl << endl;
		std::cout << "    **************************�豸��ѯ��Ϣ��ʾ*****************************" << endl;
		std::cout << "    |                                                                     |" << endl;
		std::cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(17) << left << "  ����ѧԺ" << setw(10) << left << "��Ǯ" << setw(21) << left << "  ����״̬" << setw(4) << left << "|" << endl;
		std::cout << "    |                                                                     |" << endl;
		while (p != 0) {
			if (n == p->deviceType) {
				if (p->status == 1) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "����ʹ�ã�" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 0) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "�ѱ��ϣ�" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 2) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "��������С�����" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 3) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "���뱨���С�����" << setw(4) << left << "|" << endl;
				}
			}
			p = p->next;
		}
		std::cout << "    |                                                                     |" << endl;
		std::cout << "    -----------------------------------------------------------------------" << endl;
		std::cout << "\n    ��ע������ 1.�õ��豸    2.�����豸   3.ֽ���ʲ�  4.ľ���ʲ���" << endl << "    ";
		for (int num_star = 0; num_star<71; num_star++) {    //��ʾ*����
			std::cout << "*";
			Sleep(5);
		}
		break;
	case(3):
		std::cout << "\n   1.���������ѧԺ��";
		cin >> realName;
		system("cls");
		std::cout << endl << endl << endl;
		std::cout << "    **************************�豸��ѯ��Ϣ��ʾ*****************************" << endl;
		std::cout << "    |                                                                     |" << endl;
		std::cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(17) << left << "  ����ѧԺ" << setw(10) << left << "��Ǯ" << setw(21) << left << "  ����״̬" << setw(4) << left << "|" << endl;
		std::cout << "    |                                                                     |" << endl;
		while (p != 0) {
			if (strcmp(realName, p->college) == 0) {

				if (p->status == 1) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "����ʹ�ã�" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 0) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "�ѱ��ϣ�" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 2) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "��������С�����" << setw(4) << left << "|" << endl;
				}
				else if (p->status == 3) {
					std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(17) << left << p->college << setw(10) << left << p->price << setw(21) << left << "���뱨���С�����" << setw(4) << left << "|" << endl;
				}
			}
			p = p->next;
		}
		std::cout << "    |                                                                     |" << endl;
		std::cout << "    -----------------------------------------------------------------------" << endl;
		std::cout << "\n    ��ע������ 1.�õ��豸    2.�����豸   3.ֽ���ʲ�  4.ľ���ʲ���" << endl << "    ";
		for (int num_star = 0; num_star<71; num_star++) {    //��ʾ*����
			std::cout << "*";
			Sleep(5);
		}
		break;
	}
	cout << endl << endl << endl;
	cout << "    ��1��س�����";
	cin >> i;
	if (i == 1) {//����������
		system("cls");
		return;
	}
}

//�鿴�豸�������
void Device:: showApply(Device* head) {

	Device* p = head;
	int i;
	char realName[12];
	std::cout << "    ";
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}
	std::cout << "��";
	Sleep(50);
	std::cout << "ӭ";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	std::cout << "��";
	Sleep(50);
	for (int num_star = 0; num_star<17; num_star++) {
		std::cout << "*";
		Sleep(5);
	}

	std::cout << "\n   1.��ʵ������";
	cin >> realName;
	system("cls");
	std::cout << endl << endl << endl;
	std::cout << "    **************************�豸���������ʾ*****************************" << endl;
	std::cout << "    |                                                                     |" << endl;
	std::cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(48) << left << "  ����״̬" << setw(4) << left << "|" << endl;
	std::cout << "    |                                                                     |" << endl;
	while (p != 0) {
		if (strcmp(realName, p->userName) == 0) {
			
			if (p->status == 1&&strcmp(p->reject_reason,"null")==0) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(48) << left <<"��ͨ�������⣡"<< setw(4) << left << "|" << endl;
			}
			if (p->status == 1 && strcmp(p->reject_reason, "null") != 0) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType << setw(16) << left << "δͨ����˱��ϣ�" << setw(32) << left <<p->reject_reason<< setw(4) << left << "|" << endl;
			}
			else if (p->status == 0) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType  << setw(48) << left << "��ͨ����˱��ϣ�" << setw(4) << left << "|" << endl;
			}
			else if (p->status == 2) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType  << setw(48) << left << "��������С�����" << setw(4) << left << "|" << endl;
			}
			else if (p->status == 3) {
				std::cout << setw(6) << left << "    |" << setw(8) << left << p->name << setw(8) << left << p->userName << setw(4) << left << p->deviceType  << setw(48) << left << "���뱨���С�����" << setw(4) << left << "|" << endl;
			}
		}
		p = p->next;
	}
	std::cout << "    |                                                                     |" << endl;
	std::cout << "    -----------------------------------------------------------------------" << endl;
	std::cout << "\n    ��ע������ 1.�õ��豸    2.�����豸   3.ֽ���ʲ�  4.ľ���ʲ���" << endl << "    ";
	for (int num_star = 0; num_star<71; num_star++) {    //��ʾ*����
		std::cout << "*";
		Sleep(5);
	}
	cout << endl << endl << endl;
	cout << "    ��1�������˵���";
	cin >> i;
	if (i == 1) {          //����������
		links.write_Link(head);
		system("cls");
		return;
	}
}











//���ߺ���
//��ȡ��ǰʱ�亯��
char *Device:: getTime() {
	time_t timep;
	time(&timep);
	char tmp[80];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d_%H:%M:%S", localtime(&timep));
	return tmp;
}