#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "my_list.h"




int main(int argc, const char *argv[])
{
	NODE_T *node;

	initial_list(&node);

	create_list(node);

	print_list(node);



    printf("List Size:%d\n",size_list(node));

    if(is_empty_list(node))
        printf("Empty!!!\n");
    else
        printf("Not empty!\n");

printf("The third data:%d\n", get_element(node, 3));
    int *addr = get_element_addr(node, 3);
    if(NULL != addr)
printf("3's addr:%p--%d\n", addr,*addr);
    else
        printf("3's NULL!\n");
print_list(node);
modify_element(node, 3, 0);
print_list(node);

printf("-------------------------Insert head!\n");
insert_head_list(node, 9);
print_list(node);
printf("-------------------------Insert tail!\n");
insert_tail_list(node, 8);
print_list(node);
#if 0
    clear_list(node);

	print_list(node);

    if(is_empty_list(node))
        printf("Empty!!!\n");
    else
        printf("Not empty!\n");
#endif
	return 0;
}