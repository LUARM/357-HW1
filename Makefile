CC = gcc
CFLAGS = -Wall -ansi -pedantic -g
MYTR = mytr
MYTR_OBJS = mytr.o mytr_help.o

all : $(MYTR) 

$(MYTR) : $(MYTR_OBJS) mytr_help.h
	$(CC) $(CFLAGS) -o $(MYTR) $(MYTR_OBJS)

mytr.o : mytr.c mytr_help.h
	$(CC) $(CFLAGS) -c mytr.c

mytr_help.o : mytr_help.c mytr_help.h
	$(CC) $(CFLAGS) -c mytr_help.c

clean :
	rm *.o *.out $(MYTR) 
