CFLAGS = -O
CC = g++
SRC = AES.cpp Encrypt.cpp
OBJ = $(SRC:.cpp = .o)
AESTest: $(OBJ)
	$(CC) $(CFLAGS) -o AESTest $(OBJ)
clean:
	rm -f core *.o 
