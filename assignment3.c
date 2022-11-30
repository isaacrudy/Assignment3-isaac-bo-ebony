//
// Created by isaac on 11/30/2022.
//
#include <stdio.h>



int main(int argc, char **argv) {
    int option = 0;

    while (option != 5) {
        printf("\nPlease select an option:\n");
        printf("1. load an input file\n"
               "2. merge holes\n"
               "3. compact memory\n"
               "4. print memory view\n"
               "5. Exit the program\n");
        scanf("%d", &option);

        if (option == 1) {

        } else if (option == 2) {

        } else if (option == 3) {

        } else if (option == 4) {

        } else if (option > 5 || option < 1) {
            printf("Invalid Entry");
            continue;
        }
    }

    printf("Exiting Program...");
}