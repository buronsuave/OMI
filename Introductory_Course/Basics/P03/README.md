# C. Mixed fraction
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
In the past there were many different ways to represent fractions: percents, decimals, and mixed fractions. Mixed fractions were your favorites for their beautiful, compact writing. However, you realized that the habit of using them began to be lost.

Write a problem that reads a fraction of the form {n}/{m} and writes it as a mixed fraction: {a} {b}/{m}.

<br>

## Input
A single line containing the integers {n} and {m}.

<br>

## Output
If {b != 0}, it prints the representation in the form {a} {b}/{m} on one line. Otherwise just print {a}. Look at the examples to make it clearer.

You should not simplify the fraction.

<br>

## Example

| Input | Output | Description                                                        |
|-------|--------|--------------------------------------------------------------------|
| 22 6  | 3 4/6  | The mixed fraction of {n} and {m} is 3 4/6.                  |
| 49 7  | 7      | In this case there is no fractional part. That is to say, {b = 0}. |
<br>

## Limits
* 1 <= n, m <= 100,000,000