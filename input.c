#include <stdlib.h>
#include <stdio.h>

#include "input.h"
#include "linked_lists.h"

/**
 * Methods to take input from a file.
 * @author Ebony Proskow
 * @version 1.0
 */

/**
 * reads input from a file, taking the file name from the user.
 * Reads and writes to file, accepting the String and Int input from the user.
 * @return root
 */
struct node input() {
    FILE *fpr;
    char* fileName;
    fileName = malloc(1000);
    int lines = 0; // variable declarations


    printf("Type the file name: ");
    scanf("%s", fileName); // accepts a file name

    fpr = fopen(fileName, "r"); // opens the file for reading

    char next = getc(fpr); // file pointer gets the next character

    while (next != EOF) {
        if (next == '\n') {
            lines++;
        }
        next = getc(fpr); // reads through the lines of a file
    }

    fseek(fpr, 0, SEEK_SET); // seeks for the next place in the file to start from
    struct node root;

    root.name = malloc(sizeof(char) * 2); // allocates memory to the "name" string

    fscanf(fpr, "%s %d %d\n", root.name, &root.start, &root.size); // user enters string and two ints

    struct node temp;

    for (int i = 1; i < lines; i++) {
        struct node adding;

        adding.name = malloc(sizeof(char) * 2);

        fscanf(fpr, "%s %d %d\n", adding.name, &adding.start, &adding.size);

        if (root.next == NULL) {
            root.next = &adding;
        } else {
            temp.next = &adding;
        }
        temp = adding;
    }
    // adds to the file

    return root;
}