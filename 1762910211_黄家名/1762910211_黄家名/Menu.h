#pragma once
#ifndef  MENU_H
#define MENU_H


#include<iostream>

class Menu
{

	 //�˵���ĳ�Ա����
public:
	void showLoginMenu();                                //�û���¼�������ʾ
	void showUserMenu();                                   //�û��˵�����ʾ
	void showAdminMenu();                              //����Ա�˵�����ʾ
	void showSearchDeviceMenu();                    //��ѯ�豸�˵�����ʾ
	void showSystemUser();                              //ϵͳ�û�����ʾ
	void showAppliers();                                     //�����û�����ʾ
	void showDevice(int switch_num);            	 //ϵͳ�豸����ʾ

	

	void chooseLoginSystem();                         //��¼ϵͳ�˵���ת
	void chooseUserSystem();                           //�û�ϵͳ�˵���ת
	void chooseAdminSystem();                      //����Աϵͳ�˵���ת
	void chooseSearchDevice();                         //��ѯ�豸������ת

};


#endif
