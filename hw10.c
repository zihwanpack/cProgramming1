#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char country[20];
    char population[20];
} City;

void removeNewLine(char *str) {
    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }
}

void printCity(City *arr) {
    fputs("Printing the three cities: \n", stdout);
    for (int i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %s people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
    }
}

int main(void) {
    City arr[3];
    fputs("Input three cities: \n", stdout);
    for (int i = 0; i < 3; i++) {
        fputs("Name> ", stdout);
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        removeNewLine(arr[i].name);

        fputs("Country> ", stdout);
        fgets(arr[i].country, sizeof(arr[i].country), stdin);
        removeNewLine(arr[i].country);

        fputs("Population> ", stdout);
        fgets(arr[i].population, sizeof(arr[i].population), stdin);
        removeNewLine(arr[i].population);
    }
    printCity(arr);

    return 0;
}
