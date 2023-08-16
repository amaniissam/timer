#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

void printn(int x, int y, int z);

int main(void)
{
    int x = 0;
    int y = 0;
    int z = 0;
    system("color 75");
    
    printf("0%i : 0%i : 0%i", z, y, x);
    sleep(1);
    system("cls");
    while (true)
    {
        x++;
        if (x < 60)
        {
            printn(x, y, z);
        }
        else if (x == 60)
        {
            y++;
            if (y < 60)
            {
                x = 0;
                printn(x, y, z);
            }             
            else if (y == 60)
            {
                z++;
                y = 0;
                x = 0;
                printn(x, y, z);
            }            
        }
    }
}
void clear(void);
void printn(int x, int y, int z)
{
            if (z < 10 && y < 10 && x < 10)
            {
                printf("0%i : 0%i : 0%i", z, y, x);
                clear();
            }
            else if (z > 9 && y > 9 && x < 10)
            {
                printf("%i : %i : 0%i", z, y, x);
                clear();
            }
            else if (z < 10 && y > 9 && x > 9)
            {
                printf("0%i : %i : %i", z, y, x);
                clear();
            }
            else if (z > 9 && y < 10 && x > 9)
            {
                printf("%i : 0%i : %i", z, y, x);
                clear();
            }
            else if (z > 9 && y > 9 && x > 9)
            {
                printf("%i : %i : %i", z, y, x);
                clear();
            }
            else if (z < 10 && y < 10 && x > 9)
            {
                printf("0%i : 0%i : %i", z, y, x);
                clear();  
            }
            else if (z > 9 && y < 10 && x < 10)
            {
                printf("%i : 0%i : 0%i", z, y, x);
                clear();
            }
            else if (z < 10 && y > 9 && x < 10)
            {
                printf("0%i : %i : 0%i", z, y, x);
                clear(); 
            }
}
void clear(void)
{
    sleep(1);
    system("cls"); 
}