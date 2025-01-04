CC = gcc
TARGET = main
OBJS = static.o func.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

# 清理规则
clean:
	del /F /Q $(OBJS) $(TARGET)

# 默认目标
all: $(TARGET)

# 删除所有目标文件和可执行文件
.PHONY: clean