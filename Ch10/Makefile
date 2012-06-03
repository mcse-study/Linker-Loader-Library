all:
	$(CC) -c -g -Wa,-ahl=allocate.s allocate.c
	$(CC) -c -g -Wa,-ahl=call.s call.c
	$(CC) -c -g -Wa,-ahl=host-patch.s host-patch.c

clean:
	rm -f *.s *.o
