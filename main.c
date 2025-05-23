#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int roll[100];
    int results[] = {0, 0, 0, 0, 0, 0};
    int sum = 0;

    // Randomize and store numbers
    for (int i = 0; i < 100; i++)
    {
        roll[i] = (rand() % 6) + 1;
        switch (roll[i])
        {
        case 1:
            results[0]++;
            break;
        case 2:
            results[1]++;
            break;
        case 3:
            results[2]++;
            break;
        case 4:
            results[3]++;
            break;
        case 5:
            results[4]++;
            break;
        case 6:
            results[5]++;
            break;
        
        default:
            break;
        }
        sum = sum + roll[i];
    }

    // Calculate average
    float average = sum / 100.0F;


    // Print results
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", results[i]);
    }
    printf("%d\n", sum);
    printf("%.1f\n", average);

    return 0;
}
