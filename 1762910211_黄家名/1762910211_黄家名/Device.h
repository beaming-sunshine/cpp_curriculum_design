#pragma once
#ifndef  DEVICE_H
#define DEVICE_H


#include<iostream>

class Device {


public:
	char num[24];                     //�豸���
	int deviceType;                    //�豸����   ��1.�õ��豸  2.�����豸  3. ֽ���ʲ� 4. ľ���ʲ���
	char name[24];                   //�豸����
	char typeNum[24];            //�豸�ͺ�
	char userName[12];            //�豸������  ���û���ʵ������
	char college[48];                 //����ѧԺ
	float price;                           //�豸�۸�
	char enter_date[80];            //������� ���������еĵ�ǰʱ�䣩
	int status;                           //�豸״̬  ��0. ���� 1. ����2. ������� 3.���뱨���С����� ��
	char dump_date[80];          //�豸��������   ���������еĵ�ǰʱ�䣩
	char dump_reason[80];      //��������
	char reject_reason[80];       //���ϲ��ɹ�����
	Device *next;



public:
	Device* device_enter(Device* head);                         //�����豸��⺯��
	void device_dumping(Device* head);                      //�����豸���Ϻ���
	void device_search(Device* head,int i);                    //�����豸��Ϣ(1.������ 2. �豸���� 3. ����ѧԺ)
	void showApply(Device* head);                               //�鿴�豸�������

	char * getTime();

};
 


#endif
