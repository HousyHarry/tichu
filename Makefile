compile:
	g++ -o Tichu tichu.cpp

checkstyle:
	python ../cpplint/cpplint.py *.cpp

clean:
	rm -f Tichu
