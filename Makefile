GXX = g++
LIBS = -lopencv_core -lopencv_highgui
INC = -I/usr/include/opencv4 -Itest1

SRC := $(wildcard test1/*.cpp)

all:
	$(GXX) -o main $(SRC) $(LIBS) $(INC)