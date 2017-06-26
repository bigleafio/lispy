GCC_ARGS = -Wall -std=gnu99 -O2
OBJ_FILES = prompt.o
LINKER_ARGS = -ldl -lgc

lispy: lisp.c $(OBJ_FILES)
	gcc $(GCC_ARGS) -rdynamic lisp.c $(OBJ_FILES) $(LINKER_ARGS) -o lisp

# Indiviual components
prompt.o: prompt.c
	gcc $(GCC_ARGS) -c prompt.c
