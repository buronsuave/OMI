# L. Triples
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
Write a program that reads a list of nonnegative integers and finds all "triples" (multiples of 3). For the purpose of this problem a triple is defined as any number that can be expressed as 3 * x. For example, 0, 3, and 27 are considered triples.

To complicate things a bit more, once you identify all the triples you must print their location on the original list.

<br>

## Input
The first line of input consists of an integer, {n}, the length of the list.

The next {n} lines represent the integers in the list.

<br>

## Output
If there were multiples of 3 in the list, the first line of output should be an integer indicating the number of triples found.

The second line contains integers separated by spaces, describing the indices of the triples in ascending order.

If there are no triples you should only print 'No hay triples.'.

<br>

## Example
| Input                 | Output          | Description                                                                                                    |
|-----------------------|-----------------|----------------------------------------------------------------------------------------------------------------|
| 7 <br> 10 <br> 12 <br> 8 <br> 9 <br> 3 <br> 29 <br> 30   | 4 <br> 2 4 5 7       | 4 integers in the list are triples: the second, fourth, fifth, and seventh. (Its values are 12, 9, 3, and 30.) |
| 7 <br> 16 <br> 49 <br> 2 <br> 10 <br> 28 <br> 55 <br> 31 | No hay triples. | No number in the list is a multiple of 3.                                                                      |
<br>

## Limits
* 1 <= n <= 50,000
* 0 <= li <= 2,000,000,000

