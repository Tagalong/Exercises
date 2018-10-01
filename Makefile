#
# Copyright (c) 2018, Sekhar Ravinutala.
#

INC = -I. -I/usr/local/include
LIB = -L/usr/local/lib
G++ = g++ -std=gnu++17 -g $(INC) $(LIB) -o $@ $^
SRC = ex?/*.cpp
TST = tests/*.cpp

all: run test

run: run.cpp $(SRC)
	$(G++)

test: $(TST) $(SRC)
	$(G++) -pthread -lgtest_main

%.cpp: %.h

clean:
	rm -f run test
