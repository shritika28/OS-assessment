CC = gcc
CFLAGS = -Wall -Wextra

OBJ = main.o helpers.o
TARGET = tictactoe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c helpers.h
	$(CC) $(CFLAGS) -c main.c

game.o: helpers.c helpers.h
	$(CC) $(CFLAGS) -c helpers.c

clean:
	rm -f *.o $(TARGET)
