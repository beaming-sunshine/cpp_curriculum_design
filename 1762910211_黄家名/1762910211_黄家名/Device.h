#pragma once
#ifndef  DEVICE_H
#define DEVICE_H


#include<iostream>

class Device {


public:
	char num[24];                     //设备编号
	int deviceType;                    //设备类型   （1.用电设备  2.供电设备  3. 纸质资产 4. 木制资产）
	char name[24];                   //设备名称
	char typeNum[24];            //设备型号
	char userName[12];            //设备领用人  （用户真实姓名）
	char college[48];                 //归属学院
	float price;                           //设备价格
	char enter_date[80];            //入库日期 （程序运行的当前时间）
	int status;                           //设备状态  （0. 报废 1. 在用2. 申请入库 3.申请报废中··· ）
	char dump_date[80];          //设备报废日期   （程序运行的当前时间）
	char dump_reason[80];      //报废理由
	char reject_reason[80];       //报废不成功理由
	Device *next;



public:
	Device* device_enter(Device* head);                         //申请设备入库函数
	void device_dumping(Device* head);                      //申请设备报废函数
	void device_search(Device* head,int i);                    //查找设备信息(1.领用人 2. 设备类型 3. 归属学院)
	void showApply(Device* head);                               //查看设备申请情况

	char * getTime();

};
 


#endif
