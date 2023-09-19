#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int main()
// {
//     // char tikTacToeOutcomes[][20] = {
//     //     "rock",
//     //     "paper",
//     //     "scissors"};
//     // // for (int i = 0; i < 3; i++)
//     // // {
//     // //     printf("Outcome %d: %s\n", i + 1, tikTacToeOutcomes[i]);
//     // // }
//     // int arraySize = sizeof(tikTacToeOutcomes) / sizeof(tikTacToeOutcomes[0]);
//     // printf("Array size: %d\n", arraySize);

//     char favPlayer[50];
//     printf("whos the best basketball player ever?\n");
//     scanf("%s", &favPlayer);
//     printf("your favorite player is %s", favPlayer);
//     return 0;
// }
int main()
{
    char favPlayer[50];
    printf("Who's the best basketball player ever?\n");

    // Pass favPlayer without the '&' symbol
    scanf("%s", favPlayer);

    printf("Your favorite player is %s\n", favPlayer);

    return 0;
}