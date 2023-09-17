#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char tikTacToeOutcomes[][20] = {
        "rock",
        "paper",
        "scissors"};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Outcome %d: %s\n", i + 1, tikTacToeOutcomes[i]);
    // }
    int arraySize = sizeof(tikTacToeOutcomes) / sizeof(tikTacToeOutcomes[0]);
    printf("Array size: %d\n", arraySize);
    return 0;
}