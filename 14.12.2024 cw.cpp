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




//void enterNum(int size, int* arr)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cin >> *(arr + i);
//	}
//}
//
//void printF(int size, int* arr)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(arr + i) << ' ';
//	}
//}
//
//int printMenu(int size, int *arr, int* arr2, int sellect)
//{
//	int index = 0;
//	
//
//	for (int i = 0; i < size; i++)
//	{
//		if (sellect == 1)
//		{
//			if (*(arr + i) % 2 != 0)
//			{
//				*(arr2 + index) = *(arr + i);
//				index++;
//			}
//		}
//		if (sellect == 2)
//		{
//			if (*(arr + i) % 2 == 0)
//			{
//				*(arr2 + index) = *(arr + i);
//				index++;
//			}
//		}
//	}
//
//	return index;
//}
//
//// 2 parne
//
//int main()
//{
//	cout << "Enter massive size: ";
//	int size;
//	cin >> size;
//
//	int* arr = new int[size];
//	
//	int* arr2 = new int[size];
//	
//	enterNum(size, arr);
//	printF(size, arr);
//	cout << endl << "Select delete num - 1 ne panrni / 2 parni: " << endl;
//	int sel;
//	cin >> sel;
//	
//	int index = printMenu(size, arr, arr2, sel);
//	printF(index, arr2);
//
//
//	delete[] arr;
//	delete[] arr2;
//}



int main()
{
	/*const int *p = nullptr;
	int* s;
	cout << p << endl;;

	int x = 5;

	s = &x;

	p = &x;

	cout << *p << endl;

	int y = 7;

	p = &y;

	cout << *p << endl;*/

	int a = 3;
	int* const ptr = &a;

	cout << ptr << endl;

	
	
}