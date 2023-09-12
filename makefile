CC=gcc
Game: gui.glade src/* include/* 
	$(CC) `pkg-config --cflags gtk+-3.0` -o Game src/main.c -I include/ `pkg-config --libs gtk+-3.0` -rdynamic
	cp data/logs.txt data/deflogs.txt
clean:
	rm *.o
