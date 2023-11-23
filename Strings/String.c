#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int a;
//    char str[] = "12345";
    char str[] = "Computer engineering is cool specialisation!!!";
    printf("%s\n", str);
    int len = sizeof(str) / sizeof(str[0]); // Визначаємо розмір строки
    int temp = len - 1;
    char str1[len];
    for (int i = 0; i < len - 1; i++) {
        srand(time(NULL)); // Задаємо насіння для генерації випадкового числа
        a = rand() % temp; // За допомогою рандомного числа вибираю будь-який індекс з массиву char
        str1[i] = str[a]; //ПрисвоЮємо іншій строці цей елемент
        for (int j = a; j < len-1; j++){
            str[j] = str[j+1]; // Зсуваємо всі символи строки на 1 назад щоб кожного разу вибирати новий символ із залишившихся
        }
        temp-=1; // Декрементуємо змінну, щоб і далі вибирати рандомні числа
    }
    printf("%s", str1);
    return 0;
}