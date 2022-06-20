#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDateType;

typedef struct ListNode 
{
	LTDateType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

//��ʼ��
LTNode* ListInit(LTNode* phead);
//�����½ڵ�
LTNode* BuyListNode(LTDateType x);
//��ӡ
void ListPrint(LTNode* phead);
//β��
void ListPushBack(LTNode* phead, LTDateType x);
//βɾ
void ListPopBack(LTNode* phead);
//ͷ��
void ListPushFront(LTNode* phead, LTDateType x);
//ͷɾ
void ListPopFront(LTNode* phead);
//����
LTNode* ListFind(LTNode* phead, LTDateType x);
//xλ��֮�����
void ListInsertBack(LTNode* pos, LTDateType x);
//xλ��֮ǰ����
void ListInsertFront(LTNode* pos, LTDateType x);
//ɾ��
void ListErast(LTNode* pos);
//ɾ����������
void ListDestroy(LTNode* phead);
