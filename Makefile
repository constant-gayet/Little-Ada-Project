CC=gcc -Wall -Wextra
LEX=flex 
YACC=bison -d

#usage commands
all:clean prog

run: prog
	./prog

update: prog

#test: 

clean:
	rm -rf *.tab.* *.yy.c

#compiler

lex.yy.c: little_ada.l 
	$(LEX) $< 

little_ada.tab.h: little_ada.y
	$(YACC) $< 

little_ada.tab.c: little_ada.y
	$(YACC) $< 

prog: lex.yy.c little_ada.tab.c
	$(CC) $^ -o prog

#dependencies 

lex.yy.c: y.tab.h little_ada.l
y.tab.h: little_ada.y
y.tab.c: little_ada.y

	