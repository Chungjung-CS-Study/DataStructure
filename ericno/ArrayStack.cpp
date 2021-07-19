#include "ArrayStack.hpp"
#include <stdlib.h>

void ArrayStack::CreateStack(int capacity){
	Nodes = (Node*)malloc(sizeof(Node)*capacity);
	
	this->Capacity = capacity;
	Top = 0;
}

void ArrayStack::DestroyStack(){
	free(Nodes);
}

void ArrayStack::Push(int newData) {
    Nodes[Top++].Data = newData;
}

int ArrayStack::Pop(){
	return Nodes[--Top].Data;
}

