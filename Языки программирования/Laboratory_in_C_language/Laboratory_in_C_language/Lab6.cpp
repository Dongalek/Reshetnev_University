#include <stdio.h>
#include <stdlib.h>


void Lab6() {
	int age;
	char name[100], str[100];

	puts("������� ���� ��� : "); gets_s(name, 100);
	printf("������� ��� ������� : ");
	scanf("%i", &age);
	sprintf_s(str, "����������� %s. ��� ������� %i ���", name, age);
	sprintf_s(str, "%s");
	//int x = 5, y, * px = &x;

	//y = *px + 2;
	//printf("y = %i �������� ��������� = %i\n", y, px);

	//y = *px++;
	//printf("y = %i �������� ��������� = %i\n", y, px);

	//px = &x;
	//y = (*px)++;
	//printf("y = %i �������� ��������� = %i. ��������, ���������� ���������� *px = %i\n", y, px, *px);

	//y = ++ * px;
	//printf("y = %i �������� ��������� = %i\n", y, px);
	//----------
	//int rows = 2;
	//int cols = 5;

	//int** rooms;

	//// �������� ����������
	//rooms = new int *[rows];
	//for (int i = 0; i < rows; i++) { 
	//	rooms[i] = new int[cols]; 
	//}

	//// ������������� ����������
	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		rooms[i][j] = rand()%100;
	//	}
	//}

	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		printf("%i ", rooms[i][j]);
	//	}
	//	puts("");
	//}

	//// �����������
	//for (int i = 0; i < rows; i++) {
	//	delete[] rooms [i];
	//}

	//delete[] rooms;
}


void findTheeWords() {
	char line[100], lineVowel[20] = "����������eyuioa";
	puts("��������� ������� ��� ������� �� ������");
	puts("������� ������:");
	gets_s(line, 100);
	for (int i = 0; i < 100; i++) {
		bool flag = 1;
		for (int j = 0; j < 20; j++) {
			if (line[i] == lineVowel[j]) {
				flag = 0;
			}
		}
		if (flag == 1) {
			printf("%c", line[i]);
		}
	}
}