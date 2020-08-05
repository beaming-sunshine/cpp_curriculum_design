#pragma once
#ifndef  USER_H
#define USER_H


#include<iostream>
#include<string>
#include"Link.h"
using namespace std;

class User {


public:

	char nickName[48];       //昵称
	char realName[16];        //真实姓名
	int userType;                  //用户类型
	char college[48];             //所在学院
	char password[7];           //用户密码
	int validate;                    //用户审核是否通过（0为未通过，1为通过）
	User *next;


public:

	void user_login(User* head);                                //用户登录函数
	User* user_register(User* head);                         //用户注册函数
	 void modify_passwd(User* head);                     //修改密码函数

};

#endif