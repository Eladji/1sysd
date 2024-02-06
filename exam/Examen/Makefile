.PHONY: all clean

CC = gcc
#CFLAGS = -g
CFLAGS =
PROGS = intlist convert nchiffres testtab1 nocase_cmp

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGS)
