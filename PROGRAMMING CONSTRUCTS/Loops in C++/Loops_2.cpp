//Ques 1 - Good debug/predict output question.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1;
    int sum = 0;
    for (; i < 5;)
    {
        sum += i;
        i++;
    }
    cout << sum << " ";
    while (i < sum)
    {
        i++;
        sum -= i * 2;
    }
    cout << sum << endl;
    return 0;
}

// output : 10 -2 

// explaination : 
// 

//     int i = 1; - This initializes i to 1.

//     int sum = 0; - sum is initialized to 0.

//     The for loop is structured as for (; i < 5;). It has no initialization or increment/decrement statements within the for parentheses. Instead, it solely relies on the condition i < 5.
//         Inside the for loop:
//             sum += i; - Adds i to sum. In each iteration, sum accumulates the value of i.
//             i++; - Increments i by 1.

//     The for loop will iterate as long as i is less than 5. So, it will run for i values 1, 2, 3, and 4.

//     sum will accumulate these values: 0 + 1 + 2 + 3 + 4 = 10.

//     After the for loop, sum is 10, and i is 5.

//     The while loop condition is i < sum, which is 5 < 10, so the loop executes.
//         Inside the while loop:
//             i++; - Increments i. So i becomes 6 in the first iteration.
//             sum -= i * 2; - Subtracts double the value of i from sum. In the first iteration, sum becomes 10 - 6 * 2 = -2.

//     At the end of the first iteration of the while loop, sum is -2, and i is 6.

//     The loop condition i < sum now becomes 6 < -2, which is false. Therefore, the loop exits.

//     Finally, the program prints the value of sum, which is -2.

// So, the output of the program is 10 -2. The first 10 comes from the for loop, which sums up the numbers from 1 to 4. The -2 is the result of the single iteration of the while loop, where sum is decremented by twice the value of i (which became 6 after the first iteration).