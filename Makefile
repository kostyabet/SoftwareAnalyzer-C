# Устанавливаем компилятор и флаги
CC = gcc
CFLAGS = -Wall -Wextra -g

# Определяем исходные файлы и целевой исполняемый файл
SRCS = main.c \
       utils/cpu/cpu.c \
			 source/file_controller/file.c \

OBJS = $(SRCS:.c=.o)
TARGET = my_program

# Правило по умолчанию (сборка)
all: $(TARGET)

# Правило для сборки целевого исполняемого файла
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Правило для компиляции исходных файлов в объектные
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка сгенерированных файлов
clean:
	rm -f $(OBJS) $(TARGET)

# Правило для запуска программы
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
