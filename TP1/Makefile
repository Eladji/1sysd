.PHONY: all clean

PROGS=boomer testrand game1 game
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.o *.s
