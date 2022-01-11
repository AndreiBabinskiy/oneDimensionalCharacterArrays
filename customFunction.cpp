#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <process.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include <iostream>


void changeString(char* string) {
    int length;

    length = strlen(string);

    if (length % 2 == 0) {
        for (int i = 0; i < length; i++) {
            *(string + i) = *(string + i + 2);
        }
        for (int i = length-2; i < length; i++) {
            *(string + i - 2) = *(string + i);
        }
        printf("String after = %s\n", string);
    }
    else {
        printf("\nEntered an odd number of lines!!!");
    }

}

void   main() {
    setlocale(LC_CTYPE, "Russian");
    fflush(stdin);
    system("cls");

    char* string;

    if (!(string = new char[100]))
    {
        printf("Недостаточно памяти!!!");
        string = NULL;
        exit(0);
    }

    puts("Введите строку:");
    gets_s(string,100);

    //puts(string);
    printf("String before = %s\n", string);
    printf("Length string = %d\n", strlen(string));
    changeString(string);

    delete[] string;
    _getch();
}


