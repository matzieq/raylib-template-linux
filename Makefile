build:
	gcc main.c -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -Llib -Iinclude -o main

run:
	./main
