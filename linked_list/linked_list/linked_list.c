#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char* name;
    char* lang;
    int pages;
    int year;
    float price;
    float weight;
    struct Node* next;
} Node;

Node* createNode(char* name, char* lang, int pages, int year, float price, float weight) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    newNode->name = name;
    newNode->lang = lang;
    newNode->pages = pages;
    newNode->year = year;
    newNode->price = price;
    newNode->weight = weight;
    newNode->next = NULL;

    return newNode;
}

int main() {
    Node* book1 = createNode("Harry Potter and the Philosopher's Stone", "English", 223, 1997, 442.0, 2.31);
    Node* book2 = createNode("Harry Potter and the Chamber of Secrets", "English", 352, 1998, 442.0, 2.31);
    Node* book3 = createNode("Harry Potter and the Prisoner of Azkaban", "English", 435, 1999, 442.0, 2.09);
    Node* book4 = createNode("Harry Potter and the Goblet of Fire", "English", 734, 2000, 442.0, 4.67);
    Node* book5 = createNode("Harry Potter and the Order of the Phoenix", "English", 912, 2003, 442.0, 12.56);
    Node* book6 = createNode("Harry Potter and the Half-Blood Prince", "English", 652, 2005, 442.0, 2.31);
    Node* book7 = createNode("Harry Potter and the Deathly Hallows", "English", 759, 2007, 442.0, 2.4);
    Node* book8 = createNode("Harry Potter and the Cursed Child: Parts One and Two", "English", 343, 2016, 442.0, 1.45);

    book1->next = book2;
    book2->next = book3;
    book3->next = book4;
    book4->next = book5;
    book5->next = book6;
    book6->next = book7;
    book7->next = book8;


    Node* curr = book1;
    int num = 1;
    while (curr != NULL) {
        printf("-----BOOK #%i-----\n", num);
        printf("Name: %s\n", curr->name);
        printf("Language: %s\n", curr->lang);
        printf("Pages: %i\n", curr->pages);
        printf("Year: %i\n", curr->year);
        printf("Price: %.2f\n", curr->price);
        printf("Weight:%.2f\n", curr->weight); 
        curr = curr->next;
        num += 1;
    }

    free(book1);
    free(book2);
    free(book3);
    free(book4);
    free(book5);
    free(book6);
    free(book7);
    free(book8);

    return 0;
}
