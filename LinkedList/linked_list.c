// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
    char *name;
    int price;
    int number_of_pages;
    char *language;
    double weight;
    int year_of_release;
    struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
    while (p != NULL) {
        printf("%s\n%d, %d, %s, %.2f, %d\n", p->name, p->price, p->number_of_pages, p->language, p->weight,
               p->year_of_release);
        p = p->next;
    }
}

int main() {
    // Initialize nodes
    struct node *head;
    struct node *first_book = NULL;
    struct node *second_book = NULL;
    struct node *third_book = NULL;
    struct node *fourth_book = NULL;
    struct node *fifth_book = NULL;
    struct node *sixth_book = NULL;
    struct node *seventh_book = NULL;

    // Allocate memory
    first_book = malloc(sizeof(struct node));
    second_book = malloc(sizeof(struct node));
    third_book = malloc(sizeof(struct node));
    fourth_book = malloc(sizeof(struct node));
    fifth_book = malloc(sizeof(struct node));
    sixth_book = malloc(sizeof(struct node));
    seventh_book = malloc(sizeof(struct node));

    first_book->name = "Harry Potter and the Philosopher's Stone";
    first_book->price = 320;
    first_book->number_of_pages = 306;
    first_book->language = "English";
    first_book->weight = 1.7;
    first_book->year_of_release = 1997;

    second_book->name = "Harry Potter and the Chamber of Secrets";
    second_book->price = 320;
    second_book->number_of_pages = 480;
    second_book->language = "English";
    second_book->weight = 0.39;
    second_book->year_of_release = 1998;

    third_book->name = "Harry Potter and the Prisoner of Azkaban";
    third_book->price = 354;
    third_book->number_of_pages = 448;
    third_book->language = "English";
    third_book->weight = 0.93;
    third_book->year_of_release = 1999;

    fourth_book->name = "Harry Potter and the Goblet of Fire";
    fourth_book->price = 255;
    fourth_book->number_of_pages = 636;
    fourth_book->language = "English";
    fourth_book->weight = 0.5;
    fourth_book->year_of_release = 2000;

    fifth_book->name = "Harry Potter and the Order of the Phoenix";
    fifth_book->price = 250;
    fifth_book->number_of_pages = 896;
    fifth_book->language = "English";
    fifth_book->weight = 1.78;
    fifth_book->year_of_release = 2003;

    sixth_book->name = "Harry Potter and the Half-Blood Prince";
    sixth_book->price = 410;
    sixth_book->number_of_pages = 672;
    sixth_book->language = "English";
    sixth_book->weight = 0.75;
    sixth_book->year_of_release = 2005;

    seventh_book->name = "Harry Potter and the Deathly Hallows";
    seventh_book->price = 335;
    seventh_book->number_of_pages = 784;
    seventh_book->language = "English";
    seventh_book->weight = 1.08;
    seventh_book->year_of_release = 2007;

    // Connect nodes
    first_book->next = second_book;
    second_book->next = third_book;
    third_book->next = fourth_book;
    fourth_book->next = fifth_book;
    fifth_book->next = sixth_book;
    sixth_book->next = seventh_book;
    seventh_book->next = NULL;

    // printing node-value
    head = first_book;
    printLinkedlist(head);
    return 0;
}