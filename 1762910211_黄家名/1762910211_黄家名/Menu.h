#pragma once
#ifndef  MENU_H
#define MENU_H


#include<iostream>

class Menu
{

	 //菜单类的成员函数
public:
	void showLoginMenu();                                //用户登录界面的显示
	void showUserMenu();                                   //用户菜单的显示
	void showAdminMenu();                              //管理员菜单的显示
	void showSearchDeviceMenu();                    //查询设备菜单的显示
	void showSystemUser();                              //系统用户的显示
	void showAppliers();                                     //申请用户的显示
	void showDevice(int switch_num);            	 //系统设备的显示

	

	void chooseLoginSystem();                         //登录系统菜单跳转
	void chooseUserSystem();                           //用户系统菜单跳转
	void chooseAdminSystem();                      //管理员系统菜单跳转
	void chooseSearchDevice();                         //查询设备功能跳转

};


#endif
