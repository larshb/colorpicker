CC ?= gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -ansi -Ofast

run: colorpicker
	./$<

colorpicker: main.c
	$(CC) $(CFLAGS) -o $@ $^
