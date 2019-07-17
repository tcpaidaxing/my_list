/**
 *  初始化、创建一个带头结点的单链表
 */


#include "my_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* 1. 初始化带头节点的单链表 */
void initial_list(NODE_T **pNode)
{
	*pNode = (NODE_T *)malloc(sizeof(NODE_T));
	if(NULL == *pNode){
		printf("Malloc Failed!\n");
	}
	else{
		(*pNode)->next = NULL;
		printf("Initial list successful!\n");
	}
}

/* 2. 创建带头节点的单链表 */
void create_list(NODE_T *pNode)
{
	NODE_T *pInsert;

	pInsert = (NODE_T *)malloc(sizeof(NODE_T));
	printf("Please input data:\n");
	scanf("%d", &pInsert->data);
	while(pInsert->data >0){
        pNode->next = pInsert;
        pNode = pInsert;
		pInsert = (NODE_T *)malloc(sizeof(NODE_T));
		scanf("%d", &pInsert->data);
	}
}

/* 3. 打印带头节点的单链表 */
void print_list(NODE_T *pNode)
{
	while(pNode->next != NULL){
		printf("pNode data:%d\n", pNode->next->data);
		pNode = pNode->next;
	}
}

/* 4. 清除线性表中的所有元素，即释放所有节点（除了头节点），使之成为一个空表 */
void clear_list(NODE_T *pNode)
{
    NODE_T *pMove;
    pMove = pNode->next;
    while(pMove != NULL){
        pNode->next = pMove->next;
        free(pMove);
        pMove = pNode->next;
    }
    printf("Clear list OK!\n");
}


/* 5. 返回带头节点的单链表的长度 */
int size_list(NODE_T *pNode)
{
    int size = 0;
    while(pNode->next != NULL){
        size++;
        pNode = pNode->next;
    }   
    return size;
}


/* 6. 判断带头节点的单链表是否为空，为空则返回1，否则返回0 */
int is_empty_list(NODE_T *pNode)
{
	return (pNode->next == NULL);
}


/* 7. 返回单链表中第pos个节点中的元素，若返回-1，表示没有找到 */
int get_element(NODE_T *pNode, int pos)
{
    while(pos--){
        pNode = pNode->next;
        if(NULL == pNode){
            return -1;
        }
    }

	return pNode->data;
}


/* 8. 从单链表中查找具有给定值X的第一个元素，若查找成功则返回该节点data域的存储地址，否则返回NULL */
int *get_element_addr(NODE_T *pNode, int x)
{
	while(pNode->next != NULL){
        if(pNode->next->data == x)
            return &(pNode->next->data);
        pNode = pNode->next;
    }
    return NULL;
}


/* 9. 把单链表中第pos个节点的值修改为X的值 */
int modify_element(NODE_T *pNode,int pos,int x)
{
	while(pos--){
        if(pNode->next == NULL)
            return -1;
        pNode = pNode->next;
    }
    pNode->data = x;

    return 0;
}


/* 10. 向单链表的表头插入一个元素 */
NODE_T *insert_head_list(NODE_T *pNode, int x)
{
	NODE_T *pInsert = NULL;

    pInsert = (NODE_T *)malloc(sizeof(NODE_T));
    pInsert->data = x;

    pInsert->next = pNode->next;
    pNode->next = pInsert;

    return pNode;
}

/* 11. 向单链表的末尾添加一个元素 */
NODE_T *insert_tail_list(NODE_T *pNode, int x)
{
	NODE_T *pInsert,*pMove = NULL;
    pInsert = (NODE_T *)malloc(sizeof(NODE_T));
    pInsert->data = x;
    pInsert->next = NULL;

    pMove = pNode;
    while(pMove->next != NULL){
        pMove = pMove->next;
    }

    pMove->next = pInsert;
    return pNode;
}
