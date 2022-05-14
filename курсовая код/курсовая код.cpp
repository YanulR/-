#include <iostream>
#include<time.h>
using namespace std;

void bubble(int* A, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j] > A[j + 1])
			{
				int tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	const int A1 = 1000;
	const int A2 = 5000;
	const int A3 = 10000;
	int Arr1[A1], Arr2[A2], Arr3[A3];
	srand(time(NULL));




	for (int i = 0; i < A1; i++)
	{
		Arr1[i] = rand() % 1000;
	}
	cout << "Исходный первый массив:" << endl;
	cout << "10 эллементов из начала  :";
	for (int i = 0; i < 10; i++)
		cout << Arr1[i] << " ";
	cout << endl;
	cout << "10 эллементов из середины:";
	for (int i = A1 / 2 - 5; i < A1 / 2 + 5; i++)
		cout << Arr1[i] << " ";
	cout << endl;
	cout << "10 эллементов из конца   :";
	for (int i = A1 - 10; i < A1; i++)
		cout << Arr1[i] << " ";
	cout << endl;
	bubble(Arr1, A1);
	cout << endl;
	cout << "Отсортированный первый массив:" << endl;
	cout << "10 эллементов из начала  :";
	for (int i = 0; i < 10; i++)
		cout << Arr1[i] << " ";
	cout << endl;
	cout << "10 эллементов из середины:";
	for (int i = A1 / 2 - 5; i < A1 / 2 + 5; i++)
		cout << Arr1[i] << " ";
	cout << endl;
	cout << "10 эллементов из конца   :";
	for (int i = A1 - 10; i < A1; i++)
		cout << Arr1[i] << " ";
	cout << endl << "_________________________________________________________________" << endl << endl;




	for (int i = 0; i < A2; i++)
	{
		Arr2[i] = rand() % 1000;
	}
	cout << "Исходный второй массив:" << endl;
	cout << "10 эллементов из начала  :";
	for (int i = 0; i < 10; i++)
		cout << Arr2[i] << " ";
	cout << endl;
	cout << "10 эллементов из середины:";
	for (int i = A2 / 2 - 5; i < A2 / 2 + 5; i++)
		cout << Arr2[i] << " ";
	cout << endl;
	cout << "10 эллементов из конца   :";
	for (int i = A2 - 10; i < A2; i++)
		cout << Arr2[i] << " ";
	cout << endl;
	bubble(Arr2, A2);
	cout << endl;
	cout << "Отсортированный второй массив:" << endl;
	cout << "10 эллементов из начала  :";
	for (int i = 0; i < 10; i++)
		cout << Arr2[i] << " ";
	cout << endl;
	cout << "10 эллементов из середины:";
	for (int i = A2 / 2 - 5; i < A2 / 2 + 5; i++)
		cout << Arr2[i] << " ";
	cout << endl;
	cout << "10 эллементов из конца   :";
	for (int i = A2 - 10; i < A2; i++)
		cout << Arr2[i] << " ";
	cout << endl << "_________________________________________________________________" << endl << endl;




	for (int i = 0; i < A3; i++)
	{
		Arr3[i] = rand() % 1000;
	}
	cout << "Исходный третий массив:" << endl;
	cout << "10 эллементов из начала  :";
	for (int i = 0; i < 10; i++)
		cout << Arr3[i] << " ";
	cout << endl;
	cout << "10 эллементов из середины:";
	for (int i = A3 / 2 - 5; i < A3 / 2 + 5; i++)
		cout << Arr3[i] << " ";
	cout << endl;
	cout << "10 эллементов из конца   :";
	for (int i = A3 - 10; i < A3; i++)
		cout << Arr3[i] << " ";
	cout << endl;
	bubble(Arr3, A3);
	cout << endl;
	cout << "Отсортированный третий массив:" << endl;
	cout << "10 эллементов из начала  :";
	for (int i = 0; i < 10; i++)
		cout << Arr3[i] << " ";
	cout << endl;
	cout << "10 эллементов из середины:";
	for (int i = A3 / 2 - 5; i < A3 / 2 + 5; i++)
		cout << Arr3[i] << " ";
	cout << endl;
	cout << "10 эллементов из конца   :";
	for (int i = A3 - 10; i < A3; i++)
		cout << Arr3[i] << " ";
	cout << endl << "_________________________________________________________________" << endl << endl;
}
