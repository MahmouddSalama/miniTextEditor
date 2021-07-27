#pragma once
template<class T>
ref class ArrList
{
private:
	T* arr;
	int size;
	int element;
public:
	ArrList();
	bool isFull();
	bool isEmpty();
	int getSize();
	void display();
	void insertAt(int pos, T val);
	void deletAt(int pos);
	void append(T val);
	T atIndx(int pos);
	void update(int pos, T val);
	int search(T val);
	void expand();
	T getFront();
	T getBack();
	void clear();
	~ArrList();
};

