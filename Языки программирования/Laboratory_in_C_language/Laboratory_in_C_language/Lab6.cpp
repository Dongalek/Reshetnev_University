#include <stdio.h>
#include <stdlib.h>


void Lab6() {
	int age;
	char name[100], str[100];

	puts("������� ���� ��� : "); gets_s(name, 100);
	printf("������� ��� ������� : \n");
	scanf_s("%i", &age);
	sprintf_s(str, "����������� %s. ��� ������� %i ���", name, age);
	puts(str);
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