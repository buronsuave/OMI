# A. Mathematical functions
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
Historically, computers have evolved according to the amount of mathematical operations they can do in a given time. Managed operations have also evolved to the point where the computer can perform very complex operations. In this problem we are going to use some basic operations, which are presented below.

---
1. Absolute Value
1. Maximum of two numbers
1. Minimum of two numbers
1. Square Root
1. Powers
---
Each of the previous operations will be represented with the respective number that they have on their left. For this problem, in the particular cases of the Square Root and Powers operations, square roots with integer input and output rounded to two decimal places, and powers with integer inputs and outputs (long integer) will be taken into account.

<br>

## Input
In the first line you will receive a number {N} which will represent the number of operations that you will be asked to perform. In the following {N} lines you will first receive a number {M} which will indicate the operation to be carried out. After receiving said number, on the same line you will receive the numbers with which you will perform the selected operation. In particular, for the cases of Absolute Value and Square Root you will receive a single number, and the other operations will receive two numbers.

<br>

## Output
The output will be {N} lines which will represent the result of each of the operations requested at the input. The order of said results must be the same with which it was put in the entry.

<br>

## Example
| Input                                  | Output                | Description                                                                                                                                                                                                                                                                                                                          |
|----------------------------------------|-----------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6 <br> 1 -8 <br> 4 29 <br> 5 2 4 <br> 2 -7 12 <br> 3 -11 3 <br> 4 49 | 8 <br> 5.39 <br> 16 <br> 12 <br> -11 <br> 7.00 | The first line tells us that 6 operations will be performed. <br> The following lines tell us that the following operations <br> will be performed: Absolute Value, Square Root, Powers, <br>Maximum, Minimum and Square Root. Note that if the <br>Square Root is not exact only two decimal places are <br>shown and if it is exact two zeros are shown. |
<br>

## Limits
* 1 <= M <= 5
* 1 <= N <= 1,000
