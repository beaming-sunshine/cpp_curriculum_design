#pragma once
#ifndef  LINK_H
#define LINK_H


#include<iostream>
#include<string>
#include"User.h"
#include"Device.h"
using namespace std;


class Link {

public:

	class User * Create();                                  //创建用户的链表（对应 participators.txt）
	void print_link(const User *head);                            //输出用户对应的链表内容
	void delete_Link(User *head);                          //删除链表
	void write_Link(User *head);                           //将链表内容写进文件



	Device* Create_link();                      //创建设备的链表（对应devices.txt ）
	void print_link(const Device *head);                  //输出设备对应的链表内容
	void delete_Link(Device *head);                          //删除链表
	void write_Link(Device *head);                           //将链表内容写进文件

};





#endif