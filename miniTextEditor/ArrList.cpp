#include "ArrList.h"
#include <iostream>
#include<assert.h>
using namespace std;
template<class T>
inline ArrList<T>::ArrList()
{
	element = 0;
	size = 5;
	arr = new T[size];
}

template<class T>
bool ArrList<T>::isFull()
{
	return (element == size);
}

template<class T>
bool ArrList<T>::isEmpty()
{
	return (element == 0);
}

template<class T>
int ArrList<T>::getSize()
{
	return element;
}

template<class T>
void ArrList<T>::display()
{
	assert(!isEmpty());
	cout << "[ ";
	for (int i = 0; i < element; i++)
		cout << arr[i] << " ";
	cout << "]\n";
}

template<class T>
void ArrList<T>::insertAt(int pos, T val)
{
	if (isFull())
		expand();
	assert(!(pos < 0));
	assert(!(pos > element));

	for (int i = element; i > pos; i--)
		arr[i] = arr[i - 1];
	arr[pos] = val;
	element++;
}

template<class T>
void ArrList<T>::deletAt(int pos)
{
	assert(!(pos<0 && pos>element));
	assert(!isEmpty());
	for (int i = pos; i < element; i++)
		arr[i] = arr[i + 1];
	element--;
}
template<class T>
void ArrList<T>::append(T val)
{
	if (isFull())
		expand();
	arr[element] = val;
	element++;
}
// int arr[]={1,2,3,4,5,6} arr[1]=2 , at[1]=2 
template<class T>
T ArrList<T>::atIndx(int pos)
{
	return arr[pos];
}
template<class T>
void ArrList<T>::update(int pos, T val)
{
	arr[pos] = val;
}
template<class T>
int ArrList<T>::search(T val)
{
	int s = -1;
	for (int i = 0; i < element; i++)
	{
		if (arr[i] == val)
		{
			s = i;
			break;
		}
	}
	return s;
}
template<class T>
inline void ArrList<T>::expand()
{
	int  size2 = size + 5;
	T* tmp = new T[size2];
	for (int i = 0; i < element; i++)
		tmp[i] = arr[i];
	size = size2;
	delete[] arr;
	arr = tmp;
}

template<class T>
T ArrList<T>::getFront()
{
	assert(!isEmpty());
	return arr[0];
}

template<class T>
T ArrList<T>::getBack()
{
	assert(!isEmpty());
	return arr[element - 1];
}

template<class T>
void ArrList<T>::clear()
{
	element = 0;
}

template<class T>
ArrList<T>::~ArrList()
{
	delete[] arr;
}





