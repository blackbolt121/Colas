#pragma once
#include <iostream>
using namespace std;
template <class T>
class frame {
public:
	frame<T>();
	frame<T>(T* item);
	frame<T>(T item);
	frame<T>(T* item, frame<T>* next);
	T* getItem();
	frame<T>* getNext();
	void setItem(T* item);
	void setItem(T item);
	void setNext(frame<T>* next);
	static void printPath(T item);
private:
	T* item;
	frame<T>* next;
};

template <class T>
frame<T>::frame(T* item, frame<T>* next) {
	this->item = item;
	this->next = next;
}
template <class T>
frame<T>::frame() {
	this->item = NULL;
	this->next = NULL;
}
template <class T>
frame<T>::frame(T item) {
	T* aux = new T;
	*aux = item;
	this->item = aux;
	this->next = NULL;
}
template <class T>
T* frame<T>::getItem() {
	return this->item;
}
template <class T>
frame<T>* frame<T>::getNext() {
	return this->next;
}
template <class T>
void frame<T>::setItem(T* item) {
	this->item = item;
}
template <class T>
void frame<T>::setNext(frame<T>* next) {
	this->next = next;
}
template <class T>
void frame<T>::setItem(T item) {
	T* aux = new T;
	*aux = item;
	this->item = aux;
}

