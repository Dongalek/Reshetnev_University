#include <stdio.h>
#include <stdlib.h>
#include <iostream>


void Lab7() {
	int x = 5, y, * px = &x;

	y = *px + 2;
	printf("y = %i �������� ��������� = %i\n", y, px);

	y = *px++;
	printf("y = %i �������� ��������� = %i\n", y, px);

	px = &x;
	y = (*px)++;
	printf("y = %i �������� ��������� = %i. ��������, ���������� ���������� *px = %i\n", y, px, *px);

	y = ++ * px;
	printf("y = %i �������� ��������� = %i\n", y, px);
}


int randint(int min, int max);

using namespace std;
void dynamicArray() {
	// 26 - 15 = 11
	unsigned int N;
	cout << "������� ����� ������: "; 
	cin >> N;

	cout << '\n';

	float* array = new float[N];

	cout << "������ ��������� �����:" << '\n';
	for (int i = 0; i < N; i++) {
		array[i] = (float) randint(1, 500) / randint(5, 80);
		cout << array[i] << " ";
	}
	cout << "\n\n";

	cout << "������ ����� � ������ � ���:" << '\n';

	float* link = array;

	for (int i = 0; i < N; i++) {
		printf(" ������: %i ��������: %f \n", link, *link);
		link++;
	}

	delete[] array;
}
