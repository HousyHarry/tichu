all: compile checkstyle

compile: Tichu

shuffle.o: shuffle.cpp card.h
	g++ -c shuffle.cpp

tichu.o: tichu.cpp shuffle.h card.h
	g++ -c tichu.cpp

Tichu: tichu.o shuffle.o
	g++ -o Tichu tichu.o shuffle.o

checkstyle:
	python ../cpplint/cpplint.py *.cpp

clean:
	rm -f Tichu
	rm -f *.o
