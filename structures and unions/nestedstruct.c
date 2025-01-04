#include <stdio.h>

// Define the structure for Author
struct Author {
    char name[50];
    int birthYear;
};

// Define the structure for Book with an embedded Author structure
struct Book {
    char title[100];
    struct Author author;  // Nested structure
    int publicationYear;
};

int main() {
    struct Book book1;

    // Get user input for the book's title
    printf("Enter the book title: ");
    scanf("%s", book1.title);

    // Get user input for the author's name
    printf("Enter the author's name: ");
    scanf("%s", book1.author.name);

    // Get user input for the author's birth year
    printf("Enter the author's birth year: ");
    scanf("%d", &book1.author.birthYear);

    // Get user input for the book's publication year
    printf("Enter the book's publication year: ");
    scanf("%d", &book1.publicationYear);

    // Print the details of the book
    printf("\nBook Details:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author.name);
    printf("Author's Birth Year: %d\n", book1.author.birthYear);
    printf("Publication Year: %d\n", book1.publicationYear);

    return 0;
}
