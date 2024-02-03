
CC = g++

CFLAGS = -m64 -std=c++11
ASMFLAGS = -f elf64

# Source files
CPP_SOURCES = main.cpp
ASM_SOURCES = math.asm

# Object files
CPP_OBJECTS = $(CPP_SOURCES:.cpp=.o)
ASM_OBJECTS = $(ASM_SOURCES:.asm=.o)

# Executable
TARGET = calc


# Targets
all: $(TARGET)

$(TARGET): $(CPP_OBJECTS) $(ASM_OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@
	rm -rf *.o 
	
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.asm
	nasm $(ASMFLAGS) $< -o $@


	


	