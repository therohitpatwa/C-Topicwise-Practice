# target:prerequisite
# 	command
# 	command

#1
# test:test1
# 	gcc main.c -o test

# test1:
# 	gcc main.c -o test1

#2
# blah:blah.o
# 	cc blah.o -o blah

# blah.o:blah.c
# 	cc blah.c -o blah.o

# blah.c:
# 	echo "int main()
# 	{
# 		return 0;
# 	}"
# clean:
# 	rm -rf blah.o

#3
# files:= file1 file2


# some_file: ${files}
# 	echo "Making files: " ${files}

# file1:
# 	touch filex

# file2:
# 	touch file

# clean:
# 	rm -rf filex flex some_file

# #4
# all: main.c main.o
# 	$@ refers to all
# 	$< refers to main.c
# 	$^ means to all prerequisites


#4.5
# hey: one two
# 	@echo $@
# 	@echo $?
# 	@echo $^
# 	@echo $<
# 	@touch hey
# one:
# 	@touch one
# two:
# 	@touch two
# clean:
# 	rm -f hey one two


