# E. Tak Tak Tree
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
In the center of Tak-Tak village stands a large sprawling tree, the long branches of which provide shade during hot summers. The fruit of the Tak-Tak tree (as it is affectionately known) is renowned for its sweet and delicious taste. Also, the Tak-Tak tree bears fruit incredibly fast: every night each fruit on the tree gives rise to a new fruit. In other words, every night the number of fruits on the tree doubles.

Only a select group of 10 villagers know the location of the tree and this group has selected you to be its new member. But to be accepted you must first be able to answer the following question:

Given the number of fruits currently on the tree and the number of group members (11 counting you), calculate how many nights will it take for each group member to get the same number of fruits if they harvest ALL the fruits in the group tree minus one?

Write a program that given {f}, the number of fruits currently on the tree, calculate the number of nights it is necessary to wait so that if ALL the fruits of the tree except one are harvested, each member of the group gets the same amount of fruits.

<br>

## Input
Your program should read a single integer, {f}, that represents the number of fruits on the tree.

<br>

## Output
The output will consist of two integers separated by a space: the least number of nights they will have to wait, and the number of fruits by then.

It is guaranteed that the festival will eventually be possible.

<br>

## Example

| Input | Output | Description                                                                                                                                                                                                                                            |
|-------|--------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 23    | 0 23   | He does not have to spend any night, since 23 = 2x11 + 1, so each member of the group gets two fruits and one is left over.                                                                                                                            |
| 17    | 1 34   | 17 cannot be distributed among all and that on a fruit. However, after one night, the number of fruits doubled, becoming 2x17 = 34, which we can already distribute because 34 = 3x11 + 1. Now, everyone gets three fruits and there is one left over. |
| 14    | 2 56   | After two nights, the number of fruits has quadrupled, becoming 56 = 5x11 + 1.                                                                                                                                                                         |
<br>

## Limits
* 2 <= f <= 1,000,000
* You will always be able to harvest eventually.