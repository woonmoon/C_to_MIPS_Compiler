CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

all : bin/c_compiler

bin/c_compiler : bin/gen_mips
	chmod u+x bin/c_compiler run.sh mipsrun.sh

src/maths_parser.tab.cpp src/maths_parser.tab.hpp : src/maths_parser.y
	bison -v -d src/maths_parser.y -o src/maths_parser.tab.cpp

src/maths_lexer.yy.cpp : src/maths_lexer.flex src/maths_parser.tab.hpp
	flex -o src/maths_lexer.yy.cpp  src/maths_lexer.flex

bin/gen_mips : src/gen_mips.o src/maths_parser.tab.o src/maths_lexer.yy.o src/maths_parser.tab.o
	mkdir -p bin
	g++ ${CPPFLAGS} -o bin/gen_mips $^


clean :
	rm src/*.o
	rm bin/gen_mips
	rm src/*.tab.cpp
	rm src/*.yy.cpp
	rm -r tmp/
