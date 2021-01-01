# I. Drought
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
Years of drought have hit Australia hard. With catchment levels at an all-time low, you decide to buy a rainwater tank. Soon the winter rains arrive and the tank begins to fill slowly. You start to wonder when the tank will be completely full. A friend from the meteorological office shared with you the rain predictions for the next few days.

With these predictions in mind, and the size of your rainwater tank, write a program to determine how many the tank will fill.

<br>

## Input
The first input line will have the form {n}, {c} where {n} is the number of weather predictions, and {c} is the capacity of your rainwater tank in liters. {c} is guaranteed to be a positive integer no greater than the total amount of rain that falls during the {n} days.

The {n} remaining input lines will describe the precipitation levels for each day in order. each line {i} will contain an integer {Li}: the amount of rain (in liters) that will fall on your rainwater tank on day {i}.

<br>

## Output
Your output should consist of a single integer: the number of days until the rainwater tank is filled.

<br>

## Example

| Input                                          | Output |
|------------------------------------------------|--------|
| 6 10 <br> 2 <br> 3 <br> 3 <br> 2 <br> 2 <br> 4 | 4      |
<br>

## Limits
* 1 <= n <= 1,000
* 0 <= Li <= 1,000,000