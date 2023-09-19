#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

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
int findCircumfrence()
{
    // char favPlayer[50];
    // printf("Who's the your favorite basketball player?\n");

    // // Pass favPlayer without the '&' symbol
    // fgets(favPlayer, 50, stdin);
    // favPlayer[strcspn(favPlayer, "\n")] = '\0';
    // printf("Your favorite player is %s\n", favPlayer);
    // printf("%lu\n", strlen(favPlayer));
    // return 0;

    float circumfence;
    int radius;

    printf("whats the radius of your circle ");

    // scanf("%d", &radius);
    if (scanf("%d", &radius) == 1)
    {
        circumfence = 2 * 3.14159 * radius;
        printf("im working on something %.2f\n", circumfence);
    }
    else
    {
        printf("just make sure you enter a number next time\n");
    };

    // circumfence = 2 * 3.14159 * radius;
    // printf("the radius you entered was %d \n", radius);
    // printf("im working on something %.2f\n", circumfence);
    return 0;
}
int main()
{
    double theAnswer;
    double oneSideOfThetriangle;
    double otherSideOfThetriangle;
    double right;
    double left;

    printf("whats one side of the triangle? \n");
    scanf("%lf", &oneSideOfThetriangle);

    printf("whats the other side of the triangle? \n");
    scanf("%lf", &otherSideOfThetriangle);

    right = pow(otherSideOfThetriangle, 2);
    left = pow(oneSideOfThetriangle, 2);

    theAnswer = sqrt(right + left);
    printf("%.2lf \n", theAnswer);
    return 0;
}