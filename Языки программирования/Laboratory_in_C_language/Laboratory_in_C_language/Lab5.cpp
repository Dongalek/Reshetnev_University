#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>



int randint(int min, int max) {

	return (double)rand() / (RAND_MAX + 1) * (max - min) + min;
}


void sortedList() {
	int lenArray;
	printf("������� ����� ������: "); scanf_s("%i", &lenArray);

	int* array = new int[lenArray];
	
	for (int i = 0; i < lenArray; i++) {
		array[i] = randint(1, 100);
			//(rand()%100 + 1) * (rand() % (i + 3) + 1);
	}

	for (int i = 0; i < lenArray; i++) {
		printf("%i ", array[i]);
	}

	int minimumValue, idMinimumValue;
	idMinimumValue = 0;
	minimumValue = array[0];
	for (int i = 1; i < lenArray; i++) {
		if (array[i] < minimumValue) {
			minimumValue = array[i];
			idMinimumValue = i;
		}
	}
	printf("\n����������� �����: %i \n������ ������������ ��������: %i\n", minimumValue, idMinimumValue);

	for (int i = 0; i < idMinimumValue - 2; i++) {
		for (int j = i; j < idMinimumValue - 1; j++) {
			if (array[j] > array[j + 1]) {
				int tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
			}
		}
	}

	for (int i = 0; i < lenArray; i++) {
		printf("%i ", array[i]);
	}

	delete[] array;
}


void Lab5() {
#include <stdio.h>

	int room[2][10];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			room[i][j] = randint(1, 10);
		}
	}
	int i, j, num, flag = 0;

	puts("����������� ���� ������ ���������:");

	for (j = 0; j < 10; j++) {
		printf("������� %i ���������� �� %i ����\n", room[0][j], room[1][j]);
	}

	puts("������� ����������� ����������� ���������� ����: ");

	scanf_s("%i", &num);

	// ����� ������ ������ � �������� ������������
	for (j = 0; j < 10; j++) {
		if (room[1][j] > num) {
			flag = 1;
			printf("������� #%i ���������� �� %i ����\n", room[0][j], room[1][j]);
		}
	}

	if (flag == 0) {
		puts("������ � ����� ����������� ���� ���");
	}
}