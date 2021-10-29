#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char computer)
{
    if (you == computer)
    {
        return (0);
    }
    else if (you == 's' && computer == 'g') 
    {
        return (-1);
    }
    else if (you == 'g' && computer == 's')
    {
        return (1);
    }
    else if (you == 'w' && computer == 's')
    {
        return (-1);
    }
    else if (you == 's' && computer == 'w')
    {
        return (1);
    }
    else if (you == 'g' && computer == 'w')
    {
        return (-1);
    }
    else if (you == 'w' && computer == 'g')
    {
        return (1);
    }
}
int main()
{
    char you, computer;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        computer = 's';
    }
    else if ((number >= 33) && (number <= 66))
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }
    printf("Enter s for snake w for water or g for gun: ");
    scanf("%c", &you);
    int result = snakeWaterGun(you, computer);

    printf("You choosen %c and Computer choosen %c\n", you, computer);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win the game!\n");
    }
    else
    {
        printf("You lose the game!\n");
    }

    return (0);
}