OBJS = main.o printColor.o
TARGET = main

main: main.o printColor.o
	g++ -o main main.o printColor.o

main.o: main.cpp
	g++ -c main.cpp

printColor.o: printColor.cpp
	g++ -c printColor.cpp

# 清理规则
clean:
	del /F /Q $(OBJS) 
	
# 默认目标
.PHONY: all clean