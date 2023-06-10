// You are given two strings of equal length s1
//  and s2
// , consisting of lowercase Latin letters, and an integer t

// You need to answer q
//  queries, numbered from 1
//  to q
// . The i
// -th query comes in the i
// -th second of time. Each query is one of three types:

// block the characters at position pos
//  (indexed from 1
// ) in both strings for t
//  seconds;
// swap two unblocked characters;
// determine if the two strings are equal at the time of the query, ignoring blocked characters.
// Note that in queries of the second type, the characters being swapped can be from the same string or from s1
//  and s2

// Input
// The first line of the input contains a single integer T
//  (1≤T≤104
// ) — the number of test cases.

// Then follow the descriptions of the test cases.

// The first line of each test case contains a string s1
//  consisting of lowercase Latin letters (length no more than 2⋅105
// ).

// The second line of each test case contains a string s2
//  consisting of lowercase Latin letters (length no more than 2⋅105
// ).

// The strings have equal length.

// The third line of each test case contains two integers t
//  and q
//  (1≤t,q≤2⋅105
// ). The number t
//  indicates the number of seconds for which a character is blocked. The number q
//  corresponds to the number of queries.

// Each of the next q
//  lines of each test case contains a single query. Each query is one of three types:

// "1   pos
// " — block the characters at position pos
//  in both strings for t
//  seconds;
// "2   1/2   pos1   1/2   pos2
// " — swap two unblocked characters. The second number in the query indicates the number of the string from which the first character for the swap is taken. The third number in the query indicates the position in that string of that character. The fourth number in the query indicates the number of the string from which the second character for the swap is taken. The fifth number in the query indicates the position in that string of that character;
// "3
// " — determine if the two strings are equal at the time of the query, ignoring blocked characters.
// For queries of the first type, it is guaranteed that at the time of the query, the characters at position pos
//  are not blocked.

// For queries of the second type, it is guaranteed that the characters being swapped are not blocked.

// All values of pos,pos1,pos2
//  are in the range from 1
//  to the length of the strings.

// The sum of the values of q
//  over all test cases, as well as the total length of the strings s1
// , does not exceed 2⋅105
// .

// Output
// For each query of the third type, output "YES" if the two strings s1
//  and s2
//  are equal at the time of the query, ignoring blocked characters, and "NO" otherwise.

// You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes" and "YES" will be accepted as a positive answer.

// Example
// inputCopy
// 2
// codeforces
// codeblocks
// 5 7
// 3
// 1 5
// 1 6
// 1 7
// 1 9
// 3
// 3
// cool
// club
// 2 5
// 2 1 2 2 3
// 2 2 2 2 4
// 1 2
// 3
// 3
// outputCopy
// NO
// YES
// NO
// YES
// NO
// Note
// Let's look at the strings s1
//  and s2
//  after each of the q
//  queries. Blocked characters will be denoted in red.

// First example input:

// (codeforces
// , codeblocks
// ) →
//  (codeforces
// , codeblocks
// ) →
//  (codeforces
// , codeblocks
// ) →
//  (codeforces
// , codeblocks
// ) →
//  (codeforces
// , codeblocks
// ) →
//  (codeforces
// , codeblocks
// ) →
//  (codeforces
// , codeblocks
// ) →
//  (codeforces
// , codeblocks
// )

// Second example input:

// (cool
// , club
// ) →
//  (cuol
// , clob
// ) →
//  (cuol
// , cbol
// ) →
//  (cuol
// , cbol
// ) →
//  (cuol
// , cbol
// ) →
//  (cuol
// , cbol
// )