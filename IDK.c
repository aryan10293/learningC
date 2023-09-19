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
void findCircumfrence()
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
}
void fariinheightToCel(int temp)
{
    // F = (°C × 9/5) + 32
    // °C = (°F - 32) × 5/9
    const float idk = 5.0 / 9.0;

    double conversion = ceil((temp - 32) * idk);
    printf("%lf \n", conversion);
}
void celToFairinheight(int temp)
{
    double conversion = (temp * (9.0 / 5.0)) + 32.0;
    printf("%lf", conversion);
}
void someTriangleFormula()
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
};
int main()
{
    // fariinheightToCel(55);
    char unit;
    printf("what temp are you converting to? \n");

    scanf("%c", &unit);
    if (unit == 'c' || unit == 'C')
    {
        int temp;
        printf("Whats the current fairenhieght temp? \n");
        scanf("%d", &temp);
        fariinheightToCel(temp);
    }
    else if (unit == 'f' || unit == 'F')
    {
        int temp;
        printf("Whats the current celcius temp? \n");
        scanf("%d", &temp);
        celToFairinheight(13);
    }
    else
    {
        printf("you entrered a invaid conversion \n");
    }
    // celToFairinheight(13);
    return 0;
}