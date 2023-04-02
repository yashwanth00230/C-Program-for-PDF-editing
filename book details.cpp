#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    float price;
};

int main() {
    struct Book books[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter information for book #%d:\n", i+1);
        printf("Title: ");
        fgets(books[i].title, MAX_TITLE_LENGTH, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; 
        printf("Author: ");
        fgets(books[i].author, MAX_AUTHOR_LENGTH, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; 
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); 
    }

    printf("\nBook information:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nBook #%d:\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
