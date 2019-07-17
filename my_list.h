#ifndef _MY_LIST_H
#define _MY_LIST_H

typedef struct Node
{
	int data;
	struct Node *next;
}NODE_T;

/* 1. 初始化带头节点的单链表 */
void initial_list(NODE_T **pNode);

/* 2. 创建带头节点的单链表 */
void create_list(NODE_T *pNode);

/* 3. 打印带头节点的单链表 */
void print_list(NODE_T *pNode);

/* 4. 清除线性表中的所有元素，即释放所有节点（除了头节点），使之成为一个空表 */
void clear_list(NODE_T *pNode);

/* 5. 返回带头节点的单链表的长度 */
int size_list(NODE_T *pNode);

/* 6. 判断带头节点的单链表是否为空，为空则返回1，否则返回0 */
int is_empty_list(NODE_T *pNode);

/* 7. 返回单链表中第pos个节点中的元素，若返回-1，表示没有找到 */
int get_element(NODE_T *pNode, int pos);

/* 8. 从单链表中查找具有给定值X的第一个元素，若查找成功则返回该节点data域的存储地址，否则返回NULL */
int *get_element_addr(NODE_T *pNode, int x);

/* 9. 把单链表中第pos个节点的值修改为X的值 */
int modify_element(NODE_T *pNode,int pos,int x);

/* 10. 向单链表的表头插入一个元素 */
NODE_T *insert_head_list(NODE_T *pNode, int x);

/* 11. 向单链表的末尾添加一个元素 */
NODE_T *insert_tail_list(NODE_T *pNode, int x);



#endif