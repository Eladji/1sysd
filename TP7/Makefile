.PHONY: all clean

PROGS=polynome
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.o *.s
