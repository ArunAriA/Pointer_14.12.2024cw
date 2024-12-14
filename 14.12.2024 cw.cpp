#include <iostream>

using namespace std;

int swapedArr(int size, int* arr)
{
    int counter = 1;

    for (int i = 0; i < size / 2; i++)
    {

        int s = *(arr + i * 2);
        *(arr + i * 2) = *(arr + 1 + i * 2);
        *(arr + 1 + i * 2) = s;
        
    }

    return 0;
}

int main()
{
    srand(time(NULL));

    const int size = 10;
    int arr[size];
    int *ptr = arr;

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ' ';
    }

    cout << endl;

    swapedArr(size, ptr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

}