CC := g++
CFLAGS := -std=c++11 -Wall -Wextra -O3

.PHONY: test clean

all:main

main: main.c
	$(CC) $(CFLAGS) $^ -o $@

test: main
	./$<


clean:
	$(RM) ./main
