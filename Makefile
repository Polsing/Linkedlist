Linkedlistall: main.o Linkedlist.o ../ChainNode/ChainNode.o
	g++ main.o Linkedlist.o ../ChainNode/ChainNode.o -o Linkedlist
main.o: main.cpp
	g++ -c main.cpp -o main.o
Linkedlist.o: Linkedlist.cpp
	g++ -c Linkedlist.cpp -o Linkedlist.o
../ChainNode/ChainNode.o: ../ChainNode/ChainNode.cpp
	g++ -c ../ChainNode/ChainNode.cpp -o ../ChainNode/ChainNode.o
clean:
	rm -f *.o ../ChainNode/ChainNode.o Linkedlist
