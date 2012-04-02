#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("Random Name Generator: Beta!\n");
    char a[11][12];
    strcpy(a[0], "James");
    strcpy(a[1], "John");
    strcpy(a[2], "Robert");
    strcpy(a[3], "Dan");
    strcpy(a[4], "Ryan");
    strcpy(a[5], "Richard");
    strcpy(a[6], "Thomas");
    char b[11][12];
    strcpy(b[0], "Smith");
    strcpy(b[1], "Johnson");
    strcpy(b[2], "Williams");
    strcpy(b[3], "Jones");
    strcpy(b[4], "Brown");
    int x = rand() % 7;
    int y = rand() % 5;
    printf("Your new random name is: %s %s\n", a[x], b[y]);
}
