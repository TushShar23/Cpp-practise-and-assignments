// this is a basic testing question
#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i <= 5)
    {
        if (i == 3)
            continue;
        cout << i;
        i++;
    }
    return 0;
}
// Main crux is that i++ is placed after cout means it is in else when i is 3 then it skips the current iteration but value of i is not incremented it is still 3 thus giving a TLE.

//Let's analyze the while loop to understand why Time Limit Exceeded:

    // int i = 0; - Initializes i to 0.

    // while (i <= 5) - This is a while loop that will continue as long as i is less than or equal to 5.

    // Inside the loop:
    //     if (i == 3) continue; - This statement checks if i is equal to 3. If it is, the continue keyword causes the loop to immediately start the next iteration, skipping all the code that comes after it within the loop for that iteration.

    // cout << i; - If i is not 3, this line prints the current value of i.

    // i++; - Increments i by 1. However, this line is crucially placed after the cout statement, which means it's skipped whenever i is 3.

    // What happens when i becomes 3 is the key to the infinite loop:
    //     When i is 3, the if statement triggers, and continue is executed. This causes the loop to immediately begin the next iteration without reaching the i++ line.
    //     As a result, i remains 3 indefinitely. Each time the loop reaches the if statement, it finds that i is still 3, and the continue statement causes the loop to start over without incrementing i.
    //     This creates an infinite loop, as there is no way for i to become greater than 3 and eventually exceed 5, which is necessary to exit the loop.

