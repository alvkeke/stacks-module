SRC_DIR = .
OBJ_DIR = obj
BIN_DIR = bin

SRC_C = $(wildcard $(SRC_DIR)/*.c)
OBJ_C = $(addprefix $(OBJ_DIR)/, $(patsubst %.c, %.o, $(notdir $(SRC_C))))

main : $(OBJ_C)
	gcc -g -o bin/main $^

$(OBJ_DIR)/%.o : %.c
	gcc -g -c -o $@ $^

clean:
	rm bin/*
	rm obj/*