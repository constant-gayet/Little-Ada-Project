CC=gcc -Wall -Wextra
BUILD=./build/
LEX=flex 
YACC=bison -d

#usage commands
all:clean init $(BUILD)prog

run: $(BUILD)prog
	$(BUILD)prog

update: $(BUILD)prog

#test: 

clean:
	rm -rf $(BUILD)

#compiler


lex.yy.c: little_ada.l 
	$(LEX) $< 

little_ada.tab.h: little_ada.y
	$(YACC) $< 

little_ada.tab.c: little_ada.y
	$(YACC) $< 

$(BUILD)%.o: %.c
	$(CC) -c $< -o $@

$(BUILD)prog: lex.yy.c little_ada.tab.c
	$(CC) $^ -o $(BUILD)prog

#dependencies 

$(BUILD)lex.yy.c: $(BUILD)y.tab.h little_ada.l
$(BUILD)y.tab.h: little_ada.y
$(BUILD)y.tab.c: little_ada.y

#other
init:
	mkdir $(BUILD) 
	