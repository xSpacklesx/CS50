#
# Makefile
#
# CS50 AP
# Sort Race
#

race: race.o helpers.c helpers.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o race race.o helpers.c -lcs50 -lm

all: race

clean:
	rm -f a.out core race
