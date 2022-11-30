#include <stdlib.h>
#include <stdio.h>

#include "input.h"
#include "linked_lists.h"
//
// Created by Ebony on 11/30/2022.
//

struct node input() {
    FILE *fpr;
    char* fileName;
    fileName = malloc(1000);
    int lines = 0;


    printf("Type the file name: ");
    scanf("%s", fileName);

    fpr = fopen(fileName, "r");

    char next = getc(fpr);

    while (next != EOF) {
        if (next == '\n') {
            lines++;
        }
        next = getc(fpr);
    }

    fseek(fpr, 0, SEEK_SET);
    struct node root;

    root.name = malloc(sizeof(char) * 2);

    fscanf(fpr, "%s %d %d\n", root.name, &root.start, &root.size);

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

    return root;
}