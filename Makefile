CC=gcc -Wall -Wextra
BUILD=./build/

#usage commands
all:clean init $(BUILD)prog

run: $(BUILD)prog
	$(BUILD)prog

update: $(BUILD)prog

#test: 

clean:
	rm -rf $(BUILD)

#compiler
$(BUILD)%.o: %.c
	$(CC) -c $< -o $@

$(BUILD)prog: $(BUILD)little_ada.o
	$(CC) $^ -o $@

#other
init:
	mkdir $(BUILD) 