//
// Created by isaac on 11/30/2022.
//
#include <stdio.h>

#include "input.h"
#include "linked_lists.h"


/**
 * This method asks the user to select an option
 * to either load an input file into a linked list, merge holes
 * in the linked list, compact the linked list, print the linked list
 * or exit the program.
 *
 * @param argc unused
 * @param argv unused
 * @return 0 if the program ran without faults
 */
int main(int argc, char **argv) {
    int option = 0;
    struct node root;

    while (option != 5) {
        printf("\nPlease select an option:\n");
        printf("1. load an input file\n"
               "2. merge holes\n"
               "3. compact memory\n"
               "4. print memory view\n"
               "5. Exit the program\n");
        scanf("%d", &option);

        if (option == 1) {
            root = input();
        } else if (option == 2) {

        } else if (option == 3) {

        } else if (option == 4) {

        } else if (option != 5) {
            printf("Invalid Entry");
            continue;
        }
    }

    printf("Exiting Program...");

    return 0;
}