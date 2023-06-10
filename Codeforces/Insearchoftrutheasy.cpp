// The only difference between easy and hard versions is the maximum number of queries. In this version, you are allowed to ask at most 2023
//  queries.

// This is an interactive problem.

// You are playing a game. The circle is divided into n
//  sectors, sectors are numbered from 1
//  to n
//  in some order. You are in the adjacent room and do not know either the number of sectors or their numbers. There is also an arrow that initially points to some sector. Initially, the host tells you the number of the sector to which the arrow points. After that, you can ask the host to move the arrow k
//  sectors counterclockwise or clockwise at most 2023
//  times. And each time you are told the number of the sector to which the arrow points.

// Your task is to determine the integer n
//  — the number of sectors in at most 2023
//  queries.

// It is guaranteed that 1≤n≤106
// .

// Input
// The input consists of a single integer x
//  (1≤x≤n
// ) — the number of the initial sector.

// Output
// After you determine the integer n
//  — the number of sectors, you should output "! n" (1≤n≤106
// ). After that the program should immediately terminate.

// Note that, printing the answer does not count as a query.

// It is guaranteed that the integer n
//  and the numbers of the sectors are fixed initially and will not be changed by the jury program depending on the queries.

// Interaction
// After reading the description of the input, you may ask queries. Queries can be of two types:

// "+ k" (0≤k≤109
// ) — ask to move the arrow k
//  sectors clockwise.
// "- k" (0≤k≤109
// ) — ask to move the arrow k
//  sectors counterclockwise.
// After each query, you should read an integer x
//  (1≤x≤n
// ) — the number of the current sector to which the arrow points.

// You are allowed to make at most 2023
//  queries in total.

// If you make too many queries, you will get Wrong answer.

// After printing a query or the answer, do not forget to output a the end of line and flush the output. Otherwise, you will get Idleness limit exceeded. To do this, use:

// fflush(stdout) or cout.flush() in C++;
// System.out.flush() in Java;
// flush(output) in Pascal;
// stdout.flush() in Python;
// see the documentation for other languages.
// Example
// inputCopy
// 1

// 5

// 6

// 7

// 2

// 10

// 9

// 8

// 4

// 3

// 1
// outputCopy
// + 1

// + 1

// + 1

// + 1

// + 1

// + 1

// + 1

// + 1

// + 1

// + 1

// ! 10
// Note
// Hacks

// To hack, use the following test format.

// In the first line, output a single integer n
//  (1≤n≤106
// ) — the number of sectors.

// In the second line, output n
//  different integers 1≤a1,a2,…,an≤n
//  — the numbers of the sectors in clockwise order, the arrow initially points to the sector with the number a1
// .
