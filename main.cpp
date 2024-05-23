#include <stdio.h>
#include "kolejka.h"

    void menu(void)
    {
        printf("\n");
        printf("1 - Add a number to the queue \n");
        printf("2 - Read the first value from the queue \n");
        printf("3 - Remove a value from the queue \n");
        printf("4 - Check if the queue is empty\n");
        printf("5 - Check if the queue is full\n");
        printf("6 - End the program\n");
        printf("\n");
    }



int main()
{
    int temp = 0;
    int option = 0;
    while (1)
    {
        menu();
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                if (!isQueueFull()) {
                    printf("Enter value: ");
                    scanf("%d", &temp);
                    add(temp);
                } else {
                    printf("Operation not allowed. Queue is full!!!\n\n");
                }
                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = first();
                    printf("Read value: %d\n", temp);
                } else {
                    printf("Operation not allowed. Queue is empty!!!\n\n");
                }
                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = remove();
                    printf("Read value: %d\n", temp);
                } else {
                    printf("Operation not allowed. Queue is empty!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("The queue is empty.\n");
                } else {
                    printf("The queue is not empty.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("The queue is full.\n");
                } else {
                    printf("The queue is not full.\n");
                }
                break;

            case 6:
                // End the program
                return 0;

            default:
                printf("Choose a valid option.\n\n");
                break;
        }
    }

    return 0;
}
