all:
	gcc test.c my_list.c -o my_list
	
clean:
	rm -rf my_list