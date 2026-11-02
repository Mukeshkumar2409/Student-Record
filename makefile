exe: main.o add_list.o show_list.o delete_list.o modify_list.o sort_list.o exit_list.o save_list.o
	cc main.o add_list.o show_list.o delete_list.o modify_list.o sort_list.o  exit_list.o save_list.o -o exe


main.o: main.c
	cc -c main.c

add_list.o: add_list.c
	cc -c add_list.c

show_list.o: show_list.c
	cc -c show_list.c

delete_list.o: delete_list.c
	cc -c delete_list.c

modify_list.o: modify_list.c
	cc -c modify_list.c

sort_list.o: sort_list.c
	cc -c sort_list.c
exit_list.o: exit_list.c
	cc -c exit_list.c
save_list.o: save_list.c
	cc -c save_list.c

clean:
	rm -f *.o exe
