#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf
#include <stdio.h>
#include <stdlib.h> // для перехода на русский язык
int main()
{
  int y;
  system("chcp 1251"); // переходим в консоли на русский язык
  system("cls");       // очищаем окно консоли
  printf("Введите y: "); // выводим сообщение
  scanf("%d", &y); 
  int b = y+20;    // вводим значения переменной y
  printf("Значение переменной b=%d", b); // выводим значение переменной y
  //getchar(); getchar();
  return 0;
}