# G. Rematch
## Info
| Points                   | 100     |
|--------------------------|---------|
| Memory Limit             | 32MiB   |
| Time Limit (case)        | 1s      |
| Time Limit (total)       | 1m0s    |
| Input/Output             | Console |
| Input size limit (bytes) | 10KiB   |
<br>

## Description
You don't like statistics, and neither do you. Since you were 4 years old, your anger at these number-swallowers has grown.

But this is about to change.

After many sleepless nights, you have come up with the best of revenge: beat them at their own game. You are going to write a statistics package so complete that you are going to put them out of work.

You decide that the first thing your program should do is basic data analysis, which consists of reading a set of data (a list of integers) and is going to calculate the following measures of dispersion:

* Minimum value: the smallest value in the list. For example the smallest (minimum) value of the numbers {5, 6, 5, 3} is 3.

* Maximum value: the largest value in the list. The largest (maximum) value of the numbers {5, 6, 5, 3} is 6.

* Mean (average value): the sum of all the numbers in the list, divided by the number of numbers in it. The mean of the numbers {5, 6, 5, 3} is (5 + 6 + 5 + 3) / 4. For simplicity, they ask your program to round the results to the largest integer, but less than or equal to the result. For example: 4.75 rounds to 4.
<br>

## Input
The first line of input contains a single integer, {n}, the size of the list of numbers. In the next {n} lines there is an integer, {xi}, in each line.

<br>

## Output
The output contains 3 integers separated by a space: the minimum, the maximum, and the average of the list of numbers.

<br>

## Example
| Input                      | Output       | Description                                                                |
|----------------------------|--------------|----------------------------------------------------------------------------|
| 6 <br> 70 <br> 72 <br> 74 <br> 50 <br> 73 <br> 75         | 50 75 69     | The minimum is 50, the maximum is 75, and the average is 69.               |
| 6 <br> 100 <br> 200 <br> 200 <br> 200 <br> 200 <br> 1100 | 100 1100 333 | The minimum is 100, the maximum is 1100, and the average is 333 (rounded). |

<br>

## Limits
* 1 <= n <= 1,000
* 1 <= xi <= 1,000,000