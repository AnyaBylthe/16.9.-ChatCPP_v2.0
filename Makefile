.PHONY: chat.a check clean 

CC = g++ -Wall -Wextra -Werror -std=c++17
OS=$(shell uname -s)
LIBS=-lgtest
LINUX=-lgtest -ggdb -pthread

all: chat.a

chat.a:
	$(CC) -c *.cc
	ar rcs chat.a *.o
	ranlib chat.a
	rm -rf *.o

main: chat.a main.cc
ifeq ($(OS), Linux)
	$(CC) chat.a -o test.out $(LINUX) 
else
	$(CC) chat.a -o test.out $(LIBS) 
endif
	./test.out

check:
	clang-format -n *.cc
	clang-format -n *.h

clean:
	rm -f *.o *.a *.out
