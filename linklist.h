#pragma once
#include <stddef.h>

typedef char LinkType;

typedef struct LinkNode
{
    LinkType data;
    struct LinkNode* next;
}LinkNode;

void LinkListInit(LinkNode** head);

LinkNode* LinkListPushBack(LinkNode** head,LinkType value);

void LinkListReversePrint(LinkNode* head);//逆序打印单链表.

void LinkListInsertBefore(LinkNode** head, LinkNode* pos, LinkType value);//不允许遍历链表, 在 pos之前插入

LinkNode* JosephCycle(LinkNode* head, size_t food);//约瑟夫环

void LinkListReverse(LinkNode** head);//单链表逆置
void LinkListReverse2(LinkNode** head);

void LinkListBubbleSort(LinkNode* head);//单链表的冒泡排序

LinkNode* LinkListMerge(LinkNode* head1, LinkNode* head2);//将两个有序链表, 合并成一个有序链表

LinkNode* FindMidNode(LinkNode* head);//找到链表中间的节点

LinkNode* FindLastKNode(LinkNode* head, size_t K);//找到倒数第 K 个节点.

void EraseLastKNode(LinkNode** head, size_t K);//删除倒数第K个节点

LinkNode* HasCycle(LinkNode* head);//判定单链表是否带环. 如果带环返回1

size_t GetCycleLen(LinkNode* head);//如果链表带环, 求出环的长度

LinkNode* GetCycleEntry(LinkNode* head);//如果链表带环, 求出环的入口

LinkNode* HasCross(LinkNode* head1, LinkNode* head2);//判定两个链表是否相交, 并求出交点
