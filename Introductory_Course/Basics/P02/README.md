# B. Sitting or standing?
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
A musician from the city is giving a concert to raise funds for charity. The concert will take place in a theater, with a perfectly designated space, in which there are rows of seats with seats each. A maximum of one person can be seated on each seat (i.e. two people cannot sit in the same seat).

But there is a problem: the concert tickets have been oversold, so some people are going to have to stand to watch the concert.

The musician has asked for your help to answer the following question: If everyone who bought a ticket comes to the concert, how many people will be seated and how many will be standing?

<br>

## Input
The first line of the entry will consist of two integers, {r} and {s}, the number of rows and the number of seats per row.

The second line will contain a single integer, {b}, that represents between the number of tickets that have been sold.

<br>

## Output
The output must consist of two integers separated by a space: the number of people who will be seated and those who will remain standing, respectively.

Remember that everyone will try to sit if they can.

<br>

## Example

| Input | Output | Description                                                                                                                                                                                                                                                     |
|-------|--------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 7 <br> 16 | 84 16  | The first line of the entry says there are rows of seats each (that is, seats in total).  The second line indicates that there are people who have tickets. So there is not enough room for everyone; only people will be able to sit and will remain standing. |
<br>

## Limits
* 0 <= {r} <= 10,000
* 0 <= {s} <= 10,000
* 0 <= {b} <= 1,000,000,000