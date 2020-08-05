#pragma once
#ifndef  USER_H
#define USER_H


#include<iostream>
#include<string>
#include"Link.h"
using namespace std;

class User {


public:

	char nickName[48];       //�ǳ�
	char realName[16];        //��ʵ����
	int userType;                  //�û�����
	char college[48];             //����ѧԺ
	char password[7];           //�û�����
	int validate;                    //�û�����Ƿ�ͨ����0Ϊδͨ����1Ϊͨ����
	User *next;


public:

	void user_login(User* head);                                //�û���¼����
	User* user_register(User* head);                         //�û�ע�ắ��
	 void modify_passwd(User* head);                     //�޸����뺯��

};

#endif