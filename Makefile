CC=gcc
CFLAGS=-I.
DEPS = pdeck.h
OBJ = pdeck.o
EXENAME = pdeck

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXENAME)
	
.PHONY : clean
clean:
	rm -f *.o  *~ core
