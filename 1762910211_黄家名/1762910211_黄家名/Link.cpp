#include "Link.h"
#include"User.h"
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;


//创建用户的链表（对应 participators.txt）
User* Link::Create() {

	FILE *fp;
	User *p1, *p2, *head;
	head = p2=0;
	fp = fopen("participators.txt", "r+");
	if (fp == NULL){                                        //判断文件是否为空
		cout<<"can't open this file";
		system("pause");
		exit(0);
	}
	while (!feof(fp)){                           //导入
		
		p1 = (User *)malloc(sizeof(User));
		fscanf(fp, "%s%s%d%s%s%d", p1->nickName, p1->realName, &p1->userType, p1->college,p1->password,&p1->validate);
		if (head == 0) {
			head = p1;
			p2 = p1;
		}else {
			p2->next = p1;
			p2 = p1;
		}
	}
	if (head)
		p2->next = 0;
	return  head;
}
//创建设备的链表（对应Devices.txt ）
Device* Link:: Create_link() {
	FILE *fp;
	Device *p1, *p2, *head;
	head = p2 = 0;
	fp = fopen("Devices.txt", "r+");
	if (fp == NULL) {                                        //判断文件是否为空
		cout << "can't open this file";
		system("pause");
		exit(0);
	}
	while (!feof(fp)) {                           //导入

		p1 = (Device *)malloc(sizeof(Device));
		fscanf(fp, "%s%d%s%s%s%s%f%s%d%s%s%s", p1->num, &p1->deviceType, p1->name, p1->typeNum, p1->userName, p1->college, &p1->price, p1->enter_date, &p1->status, p1->dump_date, p1->dump_reason, p1->reject_reason);
		if (head == 0) {
			head = p1;
			p2 = p1;
		}
		else {
			p2->next = p1;
			p2 = p1;
		}
	}
	if (head)
		p2->next = 0;
	return  head;
}


//输出用户对应的链表内容
void Link::print_link(const User *head) {

	const User *p;
	p = head;
	while (p != 0)
	{
		cout <<setw(8)<<left<< "    |"<<setw(12) << left<< p->nickName << setw(12) << left << p->realName << setw(8) << left << p->userType << setw(20) << left << p->college << setw(12) << left << "|" << endl;
		p = p->next;
	}
}
//输出s设备对应的链表内容
void Link::print_link(const Device *head) {

	const Device *p;
	p = head;
	while (p != 0)
	{
		//cout << setw(8) << left << "    |" << setw(12) << left << p->nickName << setw(12) << left << p->realName << setw(8) << left << p->userType << setw(20) << left << p->college << setw(12) << left << "|" << endl;
		p = p->next;
	}
}

//删除链表
void Link:: delete_Link(User *head) {
	User *p1;
	while (head){
		p1 = head;
		head = head->next;
		free(p1);
	}
}
void Link::delete_Link(Device *head) {
	Device *p1;
	while (head) {
		p1 = head;
		head = head->next;
		free(p1);
	}
}


//将链表内容写进文件
void Link:: write_Link(User *head) {

	User *p = head;
	FILE *point;
	point = fopen("Participators.txt", "w");
	if (point == NULL)
	{
		printf("can't find the file");
		exit(0);
	}
	while (p->next){
		fprintf(point, "%s %s %d %s %s %d\n", p->nickName, p->realName, p->userType, p->college, p->password, p->validate);
		p=p->next ;
	}
	fprintf(point, "%s %s %d %s %s %d", p->nickName, p->realName, p->userType, p->college, p->password, p->validate);
	fclose(point);
}
void Link::write_Link(Device *head) {

	Device *p = head;
	FILE *point;
	point = fopen("Devices.txt", "w");
	if (point == NULL)
	{
		printf("can't find the file");
		exit(0);
	}
	while (p->next) {
		fprintf(point, "%s %d %s %s %s %s %.2f %s %d %s %s %s\n", p->num, p->deviceType, p->name, p->typeNum, p->userName, p->college, p->price, p->enter_date, p->status, p->dump_date, p->dump_reason, p->reject_reason);
		p = p->next;
	}
	fprintf(point, "%s %d %s %s %s %s %.2f %s %d %s %s %s", p->num, p->deviceType, p->name, p->typeNum, p->userName, p->college, p->price, p->enter_date, p->status, p->dump_date, p->dump_reason, p->reject_reason);
	fclose(point);
}




