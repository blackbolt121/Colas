#pragma once
#include <iostream>
#include "frame.h"
using namespace std;
template <class T>
class cola {
private:
	frame<T>* item;
	int size;
public:
	cola<T>();
	void insertar(frame<T>* item);
	frame<T>* getItem();
	int getsize();
};
template <class T>
cola<T>::cola() {
	this->item = NULL;
	this->size = 0;
}
template <class T>
void cola<T>::insertar(frame<T>* item) {
	if (this->item == NULL) {
		this->item = item;
	}
	else {
		frame<T>* aux = this->item;
		while (aux->getNext() != NULL) {
			aux = aux->getNext();
		}
		aux->setNext(item);
	}
	this->size++;
}
template <class T>
frame<T>* cola<T>::getItem() {
	return this->item;
}
template <class T>
int cola<T>::getsize() {
	return this->size;
}
