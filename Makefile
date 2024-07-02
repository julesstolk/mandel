GXX = g++
LIBS = -lopencv_core -lopencv_highgui
INC = -I/usr/include/opencv4 -Itest1


SRC = test1/main.cpp test1/coordinate.cpp test1/mandel.cpp test1/screen.cpp

all:
	$(GXX) -o main $(SRC) $(LIBS) $(INC)