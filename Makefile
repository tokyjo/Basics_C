CC=g++ -g
CCFLAGS= -Wall -Werror -std=c++11
LIBFLAGS=
SRC= $(wildcard *.cc)
OBJ= $(SRC:.cc=.o)
EXEC= flow

all: $(EXEC)


$(EXEC): $(OBJ)
	$(CC) $^ -o $@   $(LIBFLAGS)

%.o: %.cc
	$(CC) $(CCFLAGS) -o $@ -c $<

.depends:
	g++ -MM $(SRC) > .depends

-include .depends

clean:
	rm -f $(OBJ) $(EXEC) 
