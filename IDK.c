#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void RockPaperScissors(const char rockPaperorScissors[])
{
    srand(time(NULL));
    char tikTacToeOutcomes[][20] = {
        "rock",
        "paper",
        "scissors"};
    int arraySize = sizeof(tikTacToeOutcomes) / sizeof(tikTacToeOutcomes[0]);
    int randomNum = (rand() % 3);
    char computerChoice[10];
    strcpy(computerChoice, tikTacToeOutcomes[randomNum]);

    if (strcmp(rockPaperorScissors, "rock") == 0 && strcmp(computerChoice, "scissors") == 0)
    {
        printf("yay you won \n");
    }
    else if (strcmp(rockPaperorScissors, computerChoice) == 0)
    {
        printf("you tied \n");
    }
    else if (strcmp(rockPaperorScissors, "paper") == 0 && strcmp(computerChoice, "rock") == 0)
    {
        printf("yay you won \n");
    }
    else if (strcmp(rockPaperorScissors, computerChoice) == 0)
    {
        printf("you tied \n");
    }
    else if (strcmp(rockPaperorScissors, "scissors") == 0 && strcmp(computerChoice, "paper") == 0)
    {
        printf("yay you won \n");
    }
    else if (strcmp(rockPaperorScissors, computerChoice) == 0)
    {
        printf("you tied \n");
    }
    else if (strcmp(rockPaperorScissors, "scissors") != 0 && strcmp(rockPaperorScissors, "paper") != 0 && strcmp(rockPaperorScissors, "rock") != 0)
    {
        printf("pick rock paper scissors\n");
    }

    else
    {
        printf("you can say all you want you lost the game, computer picked: %s \n", computerChoice);
    }
}
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
void tempConversion()
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
}

void calculator()
{
    char operator;
    double num1;
    double num2;

    printf("what operation did you want to use? *, /, +, - \n");
    scanf("%c", &operator);

    if (operator== '+')
    {
        printf("whats the first number you want to add? \n");
        scanf("%lf", &num1);
        printf("whats did you want to add %lf to? \n", num1);
        scanf("%lf", &num2);
        printf("num1: %lf \n", num1);
        printf("num2: %lf \n", num2);
        printf("the calculation is: %lf \n", num1 + num2);
    }
    else if (operator== '-')
    {
        printf("whats the first number you want to subtract? \n");
        scanf("%lf", &num1);
        printf("whats did you want to subtract %lf to? \n", num1);
        scanf("%lf", &num2);
        printf("num1: %lf \n", num1);
        printf("num2: %lf \n", num2);
        printf("the calculation is: %lf \n", num1 - num2);
    }
    else if (operator== '/')
    {
        printf("whats the first number you want to divide? \n");
        scanf("%lf", &num1);
        printf("whats did you want to divide %lf to? \n", num1);
        scanf("%lf", &num2);
        printf("num1: %lf \n", num1);
        printf("num2: %lf \n", num2);
        printf("the calculation is: %lf \n", num1 / num2);
    }
    else if (operator== '*')
    {
        printf("whats the first number you want to mutily? \n");
        scanf("%lf", &num1);
        printf("how many times di you want to multiply %lf ? \n", num1);
        scanf("%lf", &num2);
        printf("num1: %lf \n", num1);
        printf("num2: %lf \n", num2);
        printf("the calculation is: %lf /n", num1 * num2);
    }
    else
    {
        printf("you didn't enter a operation \n");
    }
}

int main()
{
    srand(time(NULL));
    char gameChoice[] = "";
    printf("Rock? Paper? or Scissors?\n");
    scanf("%s", gameChoice);
    for (int i = 0; gameChoice[i]; i++)
    {
        gameChoice[i] = tolower((unsigned char)gameChoice[i]);
    }
    // printf("%s\n", gameChoice);
    RockPaperScissors(gameChoice);
    return 0;
}