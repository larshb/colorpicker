CC ?= gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -ansi

run: colorpicker
	./$<

colorpicker: main.c
	$(CC) $(CFLAGS) -o $@ $^
