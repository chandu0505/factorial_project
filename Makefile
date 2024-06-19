CC = gcc
CFLAGS = -I./src
SRCS = src/main.c src/factorial.c
TEST_SRCS = tests/test_factorial.c src/factorial.c
OBJS = $(SRCS:.c=.o)
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: factorial_program test_program

factorial_program: $(OBJS)
	$(CC) -o factorial_program $(OBJS)

test_program: $(TEST_OBJS)
	$(CC) -o test_program $(TEST_OBJS)

clean:
	del /f /q src\*.o tests\*.o factorial_program.exe test_program.exe
