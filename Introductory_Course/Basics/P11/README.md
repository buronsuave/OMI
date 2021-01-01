# K. Translator
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
On a distant planet, two ancestral cultures coexist, the Numerical and the Enteral. Despite their cultural similarities, they communicate in totally different languages.

For example, in numeric you could say "hello" with "53134" while in enteral it would be "46952".

Your task will be to carry out translations between both languages. Write a program that can translate between the two languages, given the list of words in a dictionary.

<br>

## Input
The first line will have two integers: {d} and {w}.

The following {d} lines represent the dictionary translations, each with a pair of integers: {ni} and {ei}, separated by a space. {ni} represents a word in numeric and {ei} its translation to enteral. You can be sure that the words will not be repeated in the dictionary.

The next {w} lines contain an integer, representing the word in numeric that you will have to translate.

<br>

## Output
For each word to be translated, you must print a line that contains its respective enteral translation. If a word has no translation, should you print C? on that line.

<br>

## Example

| Input                                            | Output              | Description                                                       |
|--------------------------------------------------|---------------------|-------------------------------------------------------------------|
| 5 6 <br> 2 71 <br> 3 556 <br> 140 19 <br> 87 555 <br> 71 3 <br> 140 <br> 2 <br> 87 <br> 2 <br> 3 <br> 4 | 19 <br> 71 <br> 555 <br> 71 <br> 556 <br> C? | Since word 4 does not have an enteral translation, C? Is printed. |
<br>

## Limits
* 0 <= d, w <= 1,000
* 0 <= ni, ei <= 10,000
