// Tema is playing a very interesting computer game.

// During the next mission, Tema's character found himself on an unfamiliar planet. Unlike Earth, this planet is flat and can be represented as an n×m
//  rectangle.

// Tema's character is located at the point with coordinates (0,0)
// . In order to successfully complete the mission, he needs to reach the point with coordinates (n,m)
//  alive.

// Let the character of the computer game be located at the coordinate (i,j)
// . Every second, starting from the first, Tema can:

// either use vertical hyperjump technology, after which his character will end up at coordinate (i+1,j)
//  at the end of the second;
// or use horizontal hyperjump technology, after which his character will end up at coordinate (i,j+1)
//  at the end of the second;
// or Tema can choose not to make a hyperjump, in which case his character will not move during this second;
// The aliens that inhabit this planet are very dangerous and hostile. Therefore, they will shoot from their railguns r
//  times.

// Each shot completely penetrates one coordinate vertically or horizontally. If the character is in the line of its impact at the time of the shot (at the end of the second), he dies.

// Since Tema looked at the game's source code, he knows complete information about each shot — the time, the penetrated coordinate, and the direction of the shot.

// What is the minimum time for the character to reach the desired point? If he is doomed to die and cannot reach the point with coordinates (n,m)
// , output −1
// .

// Input
// The first line of the input contains a single integer T
//  (1≤T≤104
// ) — the number of test cases.

// Then follow the descriptions of the test cases.

// The first line of each test case contains two integers n
//  and m
//  (1≤n⋅m≤104
// ) — the size of the planet, its height and width.

// The second line of each test case contains a single integer r
//  (1≤r≤100
// ) — the number of shots.

// Then follow r
//  lines, each describing one shot.

// A shot is described by three integers t
// , d
// , coord
// . Where t
//  is the second at which the shot will be fired (1≤t≤109
// ). d
//  is the direction of the shot (d=1
//  denotes a horizontal shot, d=2
//  denotes a vertical shot). coord
//  is the size of the penetrated coordinate (0≤coord≤n
//  for d=1
// , 0≤coord≤m
//  for d=2
// ).

// The sum of the products n⋅m
//  over all test cases does not exceed 104
// .

// Output
// For each test case, output a single number — the minimum time for the character to reach the coordinate (n,m)
// , or −1
//  if he is doomed to die.

// Example
// inputCopy
// 5
// 1 3
// 4
// 1 2 0
// 2 2 1
// 3 2 2
// 4 1 1
// 3 3
// 6
// 2 1 0
// 2 1 1
// 2 1 2
// 2 2 0
// 2 2 1
// 2 2 2
// 2 1
// 3
// 7 1 2
// 2 1 1
// 7 2 1
// 2 2
// 5
// 9 1 2
// 3 2 0
// 5 1 2
// 4 2 2
// 7 1 0
// 4 6
// 7
// 6 1 2
// 12 1 3
// 4 1 0
// 17 2 3
// 1 2 6
// 16 2 6
// 3 2 4
// outputCopy
// 5
// -1
// 3
// 6
// 10
// Note
// In the first test case, the character can move as follows: (0,0)→(0,1)→(0,2)→(0,3)→(0,3)→(1,3)
// .

// In the second test case, the character will not be able to leave the rectangle that will be completely penetrated by shots at the second 2
// .

