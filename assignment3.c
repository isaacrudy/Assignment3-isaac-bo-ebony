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


    }

    printf("Exiting Program...");
}