#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//void printF(int size, int* arr)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << *(arr + i) << ' ';
//    }
//    cout << endl;
//}
//
//void randNum(int size, int* arr)
//{
//    for (int i = 0; i < size; i++)
//    {
//        *(arr + i)= rand() % 10;
//    }
//}
//
//void swapedArr(int size, int* arr)
//{
//    int counter = 1;
//
//    for (int i = 0; i < size / 2; i++)
//    {
//
//        int s = *(arr + i * 2);
//        *(arr + i * 2) = *(arr + 1 + i * 2);
//        *(arr + 1 + i * 2) = s;
//        
//    }
//
//}
//
//int main()
//{
//    srand(time(NULL));
//
//    cout << "Enter massive size: ";
//    int size;
//    cin >> size;
//    int* arr = new int[size];
//
//    randNum(size, arr);
//    printF(size, arr);
//    swapedArr(size, arr);
//    printF(size, arr);
//    
//    delete[] arr;
//}




void enterNum(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
}

void printF(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << ' ';
	}
}



int main()
{
	cout << "Enter massive size: ";
	int size;
	cin >> size;

	int* arr = new int[size];
	enterNum(size, arr);
	printF(size, arr);
}