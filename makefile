OBJECTS = self_referential.exe
LOCFLAGS = -I../self_referential
CC = g++
CCFLAGS = -ansi -W -Wall -lstdc++
LOCFLAGS =
all: $(OBJECTS)
%.o: %.cc %.cpp
	$(CC) $(CCFLAGS) $(LOCFLAGS) -c $< -g -o $@
%.exe: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@
clean:
	rm -rf *.o core *.stackdump
clobber: clean
	rm -rf *.exe
