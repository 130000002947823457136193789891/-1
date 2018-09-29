#pragma once

#include <iostream>
#include "stdlib.h"
#include "MyStack.h"
#include "Coordinate.h"
using namespace std;

/********************************************************/
/*
  ջ��
  Ҫ��
    MyStack(int size);       //�����ڴ��ʼ��ջ�ռ䣬�趨ջ������ջ��
	~MyStack();              //����ջ�ռ��ڴ�
	bool stackEmpty();       //�ж�ջ�Ƿ�Ϊ�գ�Ϊ�շ���true���ǿշ���false
	bool stackFull();        //�ж�ջ�Ƿ�������Ϊ������true����������false
	void clearStack();       //���ջ
	int stackLength();       //����Ԫ�صĸ���
	void push(char elem);    //Ԫ����ջ��ջ������
	char pop(char &elem);    //Ԫ�س�ջ��ջ���½�
	void stackTraverse();    //����ջ������Ԫ��

  Ŀ�ģ�����ջ��ʵ��ԭ������л���
*/
/********************************************************/

#define BINARY           2
#define OCTONARY         8
#define HEXADECIMAL      16

int main(void)
{
	char num[]="0123456789ABCDEF";


	MyStack<int> *pStack=new MyStack<int>(30);

	int N=2016;

	while(N!=0)
	{
		int mod;
		mod=N% HEXADECIMAL;
		pStack->push(mod);
		N= N/ HEXADECIMAL;
	}
	
	//pStack->stackTraverse(false);

	int elem =0;
	while(!pStack->stackEmpty())
	{
		pStack->pop(elem);
		cout<<num[elem];
	}

	delete pStack;
	pStack=NULL;
/*
	MyStack<char> *pStack=new MyStack<char>(5);

	pStack->push ('h');//��
	pStack->push ('l');


	pStack->stackTraverse (true);






	pStack->stackTraverse (false);

	cout<<pStack->stackLength ()<<endl;

	if(pStack->stackEmpty ())
	{
		cout<<"ջΪ��"<<endl;
	}

	if(pStack->stackFull ())
	{
		cout<<"ջΪ��"<<endl;
	}

	delete pStack;
	pStack=NULL;
*/
	system("pause");
	return 0;
}