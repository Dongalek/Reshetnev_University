#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>
#include <iostream>


//������������ 1
void Lab1();
void S();

//������������ 2
void find_len();
void Bad_function();

//������������ 3
void Lab3_calculator();
void Lab3_main_task();

//������������ 4
void list_characters();
void funk();

//������������ 5
int randint(int min, int max);
void sortedList();
void Lab5();

//������������ 6
void Lab6();
void findTheeWords();

//������������ 7
void Lab7();
void dynamicArray();

//������������ 8
void Lab8();
void actionsForDynamicArray();

//������������ 9
void workingWithFunction();

//������������ ���������
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();

int main(int argc, char* argv[], char* env[]) {
    setlocale(0, "");
    srand((unsigned)time(0));
    //������������ 1
    //Lab1();
    //S();

    //������������ 2
    //find_len();
    //Bad_function();

    //������������ 3
    //Lab3_calculator();
    //Lab3_main_task();

    //������������ 4
    //list_characters();
    //funk();

    //������������ 5
    //printf("%i", randint(5, 20));
    //sortedList();
    //Lab5();

    //������������ 6
    //Lab6();
    //findTheeWords();

    //������������ 7
    //Lab7();
    //dynamicArray();

    //������������ 8
    //Lab8();
    //actionsForDynamicArray();

    //������������ 9
    //Lab9();
    workingWithFunction();
    //--------------------------------
    //printf("���������� ���������� ��������� ������ %i \n", argc);

    //puts("\n\n");
    //printf("��������� ��������� ������: \n"); 
    //for (int i = 0; i < argc; i++) {
    //    printf("%s\n", argv[i]);
    //}
    //puts("\n\n");

    //printf("\n��������� ��������� �����: \n");
    //for (int i = 0; env[i] != NULL; i++) {
    //    printf("%s\n", env[i]);
    //}
    //----------------------------

    //float value1, value2;
    //char op;
    //if (argc >= 4) {
    //    value1 = atoi(argv[1]);
    //    op = argv[2][0];
    //    value2 = atoi(argv[3]);
    //    if (op == '+') {
    //        printf("%.2f\n", value1 + value2);
    //    }
    //    else  if (op == '-') {
    //        printf("%.2f\n", value1 - value2);
    //    }
    //    else  if (op == '/') {
    //        if (value2 == 0) {
    //            puts("You can't divide by zero!!!");
    //        }
    //        else {
    //            printf("%.2f\n", value1 / value2);
    //        }
    //    }
    //    else  if (op == '*') {
    //        printf("%.2f\n", value1 * value2);
    //    }
    //    else {
    //        puts("Unknown sign!!!");
    //    }
    //}

    //������������ ���������
    //ex1();
    //ex2();
    //ex3();
    //ex4();
    //ex5();
    //ex6();
    //ex7();

    return 1;
}