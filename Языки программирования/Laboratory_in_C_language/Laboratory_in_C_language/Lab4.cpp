#include <stdio.h>


void list_characters() {
    puts("������� ������ �������� ASCII:");

    for (int i = 0; i < 255; i++) {
        printf("%i = %c \n", i, i);
    };
};


void funk() {
    double n1, n2, result = 1;
    puts("��������� ������� ������������ ����� �� ������� 5 �� n1 �� n2");
    printf("n1 = "); scanf_s("%lf", &n1);
    printf("n2 = "); scanf_s("%lf", &n2);
    if (n2 < n1) {
        puts("������ n2 �� ����� ���� ������ n1");
        funk();
    }
    for (int i = n1; i <= n2; i++) {
        if (i % 5 != 0) {
            result = (double) result * i;
        }
    }
    if (result != 1) {
        printf("���������: %lf", result);
    }
}
