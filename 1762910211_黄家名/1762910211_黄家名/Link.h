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

	class User * Create();                                  //�����û���������Ӧ participators.txt��
	void print_link(const User *head);                            //����û���Ӧ����������
	void delete_Link(User *head);                          //ɾ������
	void write_Link(User *head);                           //����������д���ļ�



	Device* Create_link();                      //�����豸��������Ӧdevices.txt ��
	void print_link(const Device *head);                  //����豸��Ӧ����������
	void delete_Link(Device *head);                          //ɾ������
	void write_Link(Device *head);                           //����������д���ļ�

};





#endif