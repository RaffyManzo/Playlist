link: list.o song.o item-song.o playlist.o main.o 
	gcc list.o song.o item-song.o playlist.o main.o -o playlist.exe

list.o:
	gcc -c list.c

song.o:
	gcc -c song.c

item-song.o:
	gcc -c item-song.c

playlist.o:
	gcc -c playlist.c

main.o:
	gcc -c main.c

clean: 
	rm -f *.o playlist.exe