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


//��½�������ʾ
void Menu::showLoginMenu() {
	cout <<endl<< "                         ��ӭ������½���棡                     "<<endl<<endl;
	cout << "    ***********************��½����˵�**********************"<<endl;
	cout << "    |                                                       |"<<endl;
	cout << "    |                    ___1:�û�ע��___                   |"<<endl;
	cout << "    |                    ___2:�û���¼___                   |"<<endl;
	cout << "    |                                                       |"<<endl;
	cout << "    ---------------------------------------------------------"<<endl;
	cout << "    *********************************************************"<<endl<<endl<<endl;
	cout << "    ���������ʹ�ù��ܣ�";
}

//�û��������ʾ
void Menu::showUserMenu() {
	cout << endl << "                     ��ӭ�����ʲ��豸����ϵͳ��                     " << endl<<endl;
	cout << "    *********************ϵͳ���ܲ˵�************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    |                ___1:�豸�������___                   |" << endl;
	cout << "    |                ___2:�豸���뱨��___                   |" << endl;
	cout << "    |                ___3:�豸��Ϣ��ѯ___                   |" << endl;
	cout << "    |                ___4:�鿴�������___                   |" << endl;
	cout << "    |                ___5:�����豸��Ϣ___                   |" << endl;
	cout << "    |                ___6:�޸��û�����___                   |" << endl;
	cout << "    |                ___0:�˳�����ϵͳ___                   |" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout << "    *********************************************************" << endl << endl << endl;
	cout << "    �����������ʹ���书�ܣ�";
}

//����Ա�˵�����ʾ
void Menu::showAdminMenu() {
	cout << endl << "                     ��ӭ�����ʲ��豸����ϵͳ��                     " << endl << endl;
	cout << "    *********************ϵͳ���ܲ˵�************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    |                ___1:�����û�ע��___                   |" << endl;
	cout << "    |                ___2:�����豸���___                   |" << endl;
	cout << "    |                ___3:�����豸����___                   |" << endl;
	cout << "    |                ___4:�鿴ϵͳ�û�___                   |" << endl;
	cout << "    |                ___5:�����豸��Ϣ___                   |" << endl;
	cout << "    |                ___6:�����豸��Ϣ___                   |" << endl;
	cout << "    |                ___7:�豸��Ϣ��ѯ___                   |" << endl;
	cout << "    |                ___8:�޸��û�����___                   |" << endl;
	cout << "    |                ___0:�˳�����ϵͳ___                   |" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout << "    *********************************************************" << endl << endl << endl;
	cout << "    �����������ʹ���书�ܣ�";

}

//��ѯ�豸�˵�����ʾ
void Menu::showSearchDeviceMenu() {
	cout << endl << endl << endl;
	cout << "    *********************ϵͳ�豸��ѯ************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    |                ___1:�����û�����___                   |" << endl;
	cout << "    |                ___2:�����豸���___                   |" << endl;
	cout << "    |                ___3:���չ���ѧԺ___                   |" << endl;
	cout << "    |                ___0:����ϵͳ��ҳ___                   |" << endl;
	cout << "    |                                                       |" << endl;
	cout << "    ---------------------------------------------------------" << endl;
	cout << "    *********************************************************" << endl << endl << endl;
	cout << "    �����������ʹ���书�ܣ�";
}

//ϵͳ�û�����ʾ
void Menu::showSystemUser() {
	int i;
	User *p;
	cout << endl<< endl << endl;
	cout << "    *********************ϵͳ�û���ʾ************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << setw(8) << left << "    |" << setw(12) << left <<" �ǳ�" << setw(12) << left << "��ʵ����"<< setw(8) << left << "���" << setw(20) << left << "  ����ѧԺ" << setw(12) << left << "|" << endl;
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
	cout<<"\n    ��ע����� 1.��ʦ    2.ѧ��   3.����Ա��"<<endl << "    ";
	for (int num_star = 0; num_star<57; num_star++) {    //��ʾ*����
		cout<<"*";
		Sleep(5);
	}
	cout << endl << endl << endl;
	cout << "    ��1��س�����";
	cin >> i;
	if (i == 1){//����������
		system("cls");
		return;
	}
}

//�����û�����ʾ
void Menu::showAppliers() {
	int i;
	char name[12];
	User *p;
	cout << endl << endl << endl;
	cout << "    *********************�����û���ʾ************************" << endl;
	cout << "    |                                                       |" << endl;
	cout << setw(8) << left << "    |" << setw(12) << left << " �ǳ�" << setw(12) << left << "��ʵ����" << setw(8) << left << "���" << setw(20) << left << "  ����ѧԺ" << setw(12) << left << "|" << endl;
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
	cout << "\n    ��ע����� 1.��ʦ    2.ѧ��   3.����Ա��" << endl << "    ";
	for (int num_star = 0; num_star<57; num_star++) {    //��ʾ*����
		cout << "*";
		Sleep(5);
	}
	loop4:
	cout << endl << endl << endl;
	cout << "    ��0�������״̬����1�������˵���";
	loop0:
	cin >> i;
	if (i == 1) {          //����������
		link.write_Link(participator);
		system("cls");
		return;
	}
	else if (i == 0) {
		cout << "    ������Ҫ���ͨ�����û�����ʵ������";
		cin >> name;
		p = participator;
		while (p != 0){
			if (strcmp(name, p->realName) == 0) {
				p->validate = 1;
				cout << "    �����ͨ��" << name << "��";
				goto loop4;
			}
			p = p->next;
		}
	}
	else {
		cout << "    ���벻�淶�����������룺";
		goto loop0;
	}
}

//ϵͳ�豸����ʾ
void Menu:: showDevice(int switch_num) {
	int i;
	Device *p;
	char date[80],reason[80];
	cout << endl << endl << endl;
	switch (switch_num) {
	case(0):
		cout << "    **************************ϵͳ�����豸��ʾ*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(17) << left << "  ����ѧԺ" << setw(10) << left << "��Ǯ" << setw(21) << left << "  ��������" << setw(4) << left << "|" << endl;
		cout << "    |                                                                     |" << endl;
		break;
	case(1):
		cout << "    **************************ϵͳ�����豸��ʾ*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(17) << left << "  ����ѧԺ" << setw(10) << left << "��Ǯ" << setw(21) << left << "  �������" << setw(4) << left << "|" << endl;
		cout << "    |                                                                     |" << endl;
		break;
	case(2):
		cout << "    **************************��������豸��ʾ*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(3) << left << "����" << setw(17) << left << "  ����ѧԺ" << setw(10) << left << "��Ǯ" << setw(20) << left << "  �������" << setw(4) << left << "|" << endl;
		cout << "    |                                                                     |" << endl;
		break;
	case(3):
		cout << "    **************************���뱨���豸��ʾ*****************************" << endl;
		cout << "    |                                                                     |" << endl;
		cout << setw(6) << left << "    |" << setw(8) << left << "����" << setw(8) << left << "������" << setw(22) << left << "  �������" <<setw(30)<<left<<"����ԭ��"<< setw(4) << left << "|" << endl;
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
	cout << "\n    ��ע������ 1.�õ��豸    2.�����豸   3.ֽ���ʲ�  4.ľ���ʲ���" << endl << "    ";
	for (int num_star = 0; num_star<71; num_star++) {    //��ʾ*����
		cout << "*";
		Sleep(5);
	}

	switch (switch_num) {
	case(0):
	case(1):
		cout << endl << endl << endl;
		cout << "    ��1��س�����";
		cin >> i;
		if (i == 1) {//����������
			system("cls");
			return;
		}
		break;
	case(2):
	loop4:
		cout << endl << endl << endl;
		cout << "    ��0�������״̬����1�������˵���";
	loop0:
		cin >> i;
		if (i == 1) {          //����������
			link.write_Link(device);
			system("cls");
			return;
		}
		else if (i == 0) {
			cout << "    ������Ҫ���ͨ�����豸��������ڣ�";
			cin >> date;
			p = device;
			while (p != 0) {
				if (strcmp(date, p->enter_date) == 0) {
					p->status = 1;
					cout << "    �����ͨ��" << p->userName<<"��"<<p->name << "��";
					goto loop4;
				}
				p = p->next;
			}
		}
		else {
			cout << "    ���벻�淶�����������룺";
			goto loop0;
		}
		break;
	case(3):
	loop:
		cout << endl << endl << endl;
		cout << "    ��0�������˵�����1�������ͨ��״̬����2������˾ܾ�״̬��";
	loops:
		cin >> i;
		if (i == 0) {          //����������
			link.write_Link(device);
			system("cls");
			return;
		}
		else if (i == 1) {
			cout << "    ������Ҫ���ͨ�����豸��������ڣ�";
			cin >> date;
			p = device;
			while (p != 0) {
				if (strcmp(date, p->enter_date) == 0) {
					p->status = 0;
					strcpy(p->dump_date, (*device).getTime());
					cout << "    �����ͨ��" << p->userName << "��" << p->name << "���ϣ�";
					goto loop;
				}
				p = p->next;
			}
		}
		else if (i == 2) {
			cout << "    ������Ҫ��˾ܾ����豸��������ڣ�";
			cin >> date;
			cout << "    ������Ҫ�ܾ������ɣ�";
			cin >> reason;
			p = device;
			while (p != 0) {
				if (strcmp(date, p->enter_date) == 0) {
					p->status = 1;
					strcpy(p->reject_reason, reason);
					cout << "    ����˾ܾ�" << p->userName << "��" << p->name << "���ϣ�";
					goto loop;
				}
				p = p->next;
			}
		}
		else {
			cout << "    ���벻�淶�����������룺";
			goto loops;
		}
		break;
	}
	
}




//��¼ϵͳ�˵���ת
void Menu::chooseLoginSystem() {

	system("color e9");                              //���Ʊ�����������ɫ��xx��ǰ���Ǳ�����ɫ������Ϊ������ɫ��
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
		cout<<"    ������Ϣ�����������룺";
		goto loop7;
	}
	
}



//�û�ϵͳ�˵���ת
void Menu::chooseUserSystem() {

	system("color e9");                              //���Ʊ�����������ɫ��xx��ǰ���Ǳ�����ɫ������Ϊ������ɫ��
	system("cls");
	printf("���Ե�.");
	Sleep(200);
	system("cls");
	printf("���Ե�..");
	Sleep(200);
	system("cls");
	printf("���Ե�...");
	Sleep(700);
	system("cls");

	int i = 1;
	while (i)
	{
		showUserMenu();
		cin >> i;
		switch (i)                                                //�˿�ϵͳ����ѡ��
		{
		case 1: system("cls");                             //�豸�������ģ��
			device = (*device).device_enter(device);
			link.write_Link(device);
			system("cls");
			break;

		case 2: system("cls");                               //�豸���뱨��ģ��
			(*device).device_dumping(device);
			break;


		case 3: system("cls");                                //�豸��Ϣ��ѯ
			chooseSearchDevice();
			break;

		case 4: system("cls");                                //�鿴�������
			(*device).showApply(device);
			break;

		case 5: system("cls");                                 //�����豸��Ϣ
			showDevice(1);
			break;

		case 6: system("cls");                                 //�޸��û�����
			(*participator).modify_passwd(participator);
			link.write_Link(participator);
			 break;

		case 0:                                                            //�˳�����
			cout<<"    *********************��лʹ�ã�**************************"<<endl;
			link.delete_Link(participator);
			link.delete_Link(device);
			break;

		default:
			cout << "    �������" << endl;
			Sleep(500);
			system("cls");
			break;
		}
	}


}



//����Աϵͳ�˵���ת
void Menu::chooseAdminSystem() {

	system("color e9");                              //���Ʊ�����������ɫ��xx��ǰ���Ǳ�����ɫ������Ϊ������ɫ��
	system("cls");
	printf("���Ե�.");
	Sleep(200);
	system("cls");
	printf("���Ե�..");
	Sleep(200);
	system("cls");
	printf("���Ե�...");
	Sleep(700);
	system("cls");
	int i = 1;
	while (i)
	{
		showAdminMenu();
		cin >> i;
		switch (i) {                             //����Աϵͳ����ѡ��
		case 1: system("cls");             //�鿴������
			showAppliers();
			break;

		case 2: system("cls");             //�����豸���
			showDevice(2);
			break;

		case 3: system("cls");            //�����豸����
			showDevice(3);
			break;

		case 4: system("cls");           //�鿴ϵͳ�û�
			showSystemUser();
			break;

		case 5: system("cls");          //�����豸��Ϣ
			showDevice(1);
			break;

		case 6: system("cls");            //�����豸��Ϣ
			showDevice(0);
			break;

		case 7: system("cls");          //�豸��Ϣ��ѯ
			chooseSearchDevice();
			break;

		case 8: system("cls");          //�޸��û�����
			(*participator).modify_passwd(participator);
			link.write_Link(participator);
			break;

		case 0:                                       //�˳�����
			cout << "    *********************��лʹ�ã�**************************" << endl;
			link.delete_Link(participator);
			link.delete_Link(device);
			break;

		default:
			cout << "    �������" << endl;
			Sleep(500);
			system("cls");
			break;
		}
	}

}


//��ѯ�豸������ת
void Menu::chooseSearchDevice() {
	system("color e9");                              //���Ʊ�����������ɫ��xx��ǰ���Ǳ�����ɫ������Ϊ������ɫ��
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
			cout << "    �������" << endl;
			Sleep(500);
			system("cls");
			break;
		}
	}

}