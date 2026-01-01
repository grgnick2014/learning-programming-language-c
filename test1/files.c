 #include<stdio.h>

// // int main()
// // {
// //     int a,i;
// //     printf("*************Website files*************\n");
// //     printf("Classified\n");
// //     printf("Please select file you would like to open(1,2,3): \n");
// //     scanf("%d",&a);
// //     switch (a)
// //     {
// //     case 1:
// //         printf("File 1");
// //         break;
    
// //     default:
// //         break;
// //     }
// // }

// #include <stdio.h>

// int main(void)
// {
//     int choice;

//     printf("=================================\n");
//     printf("        WEBSITE FILE MANAGER     \n");
//     printf("=================================\n");
//     printf(" 1. Open File 1\n");
//     printf(" 2. Open File 2\n");
//     printf(" 3. Open File 3\n");
//     printf("---------------------------------\n");
//     printf(" Select a file to open (1-3): ");

//     if (scanf("%d", &choice) != 1)
//     {
//         printf("\nInvalid input. Please enter a number.\n");
//         return 1;
//     }

//     printf("\n");

//     switch (choice)
//     {
//         case 1:
//             printf("Opening File 1...\n");
//             break;

//         case 2:
//             printf("Opening File 2...\n");
//             break;

//         case 3:
//             printf("Opening File 3...\n");
//             break;

//         default:
//             printf("Invalid choice. Please select 1, 2, or 3.\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

void openFile(const char *filename)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error: Could not open %s\n", filename);
        return;
    }

    printf("\n----- Contents of %s -----\n\n", filename);

    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    printf("\n\n----- End of file -----\n");

    fclose(file);
}

int main(void)
{
    int choice;

    printf("=================================\n");
    printf("        WEBSITE FILE MANAGER     \n");
    printf("=================================\n");
    printf(" 1. file1.txt\n");
    printf(" 2. file2.txt\n");
    printf(" 3. file3.txt\n");
    printf(" 0. Exit\n");
    printf("---------------------------------\n");
    printf(" Select a file to open: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            openFile("file1.txt");
            break;

        case 2:
            openFile("file2.txt");
            break;

        case 3:
            openFile("file3.txt");
            break;

        case 0:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid selection.\n");
    }

    return 0;
}
