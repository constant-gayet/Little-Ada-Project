CC=gcc -Wall -Wextra
BUILD=./build/
LEX=lex 
YACC=yacc -d

#usage commands
all:clean init $(BUILD)prog

run: $(BUILD)prog
	$(BUILD)prog

update: $(BUILD)prog

#test: 

clean:
	rm -rf $(BUILD)

#compiler


$(BUILD)lex.yy.c:%.l 
	$(LEX) $< -o $@

$(BUILD)y.tab.h: %.y
	$(YACC) $< -o $@

$(BUILD)y.tab.c: %.y
	$(YACC) $< -o $@

$(BUILD)%.o: %.c
	$(CC) -c $< -o $@

$(BUILD)prog: $(BUILD)lex.yy.c $(BUILD)y.tab.c
	$(CC) $^ -o $(BUILD)prog

#dependencies 

$(BUILD)lex.yy.c: $(BUILD)y.tab.h little_ada.l
$(BUILD)y.tab.h: little_ada.y
$(BUILD)y.tab.c: little_ada.y

#other
init:
	mkdir $(BUILD) 
	