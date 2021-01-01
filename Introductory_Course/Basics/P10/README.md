# J. Excursion
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
The school is organizing a field trip and it is your job to keep track of how many students are traveling in each of the trucks. For this you have a list of all the trucks and the number of students that travel in each one.

Then you will be asked a series of questions such as "How many students are in the truck {x}?" and you must answer the number you have on your list.

Write a program that reads the list of trucks and then answers a series of questions with the number of students in each truck.

<br>

## Input
Your program should read two integers {n} and {p} from the keyboard. Where {n} is the number of trucks and {p} the number of questions you will have to answer. Each of the following {n} lines represents the number of students riding that truck. The first line represents truck 1, the second line represents truck 2, and so on. Each of the following {p} lines represents the {x} of the question you must answer.

<br>

## Output
You must print {p} integers with the answer to each of the questions.

<br>

## Example

| Input                                   | Output                | Description                                                                                                                         |
|-----------------------------------------|-----------------------|-------------------------------------------------------------------------------------------------------------------------------------|
| 6 5 <br> 1151 <br> 723 <br> 1321 <br> 815 <br> 780 <br> 931 <br> 4 <br> 3 <br> 4 <br> 5 <br> 1 | 815 <br> 1321 <br> 815 <br> 780 <br> 1151 | The output consists of 5 lines answering the questions in the order they were asked. Notice that the trucks start to number from 1. |
<br>

## Limits
* 1 <= n <= 10,000
* 0 <= p <= 2,000,000,000
* 1 <= x <= n
* You are assured that the number of passengers in the trucks are all different.