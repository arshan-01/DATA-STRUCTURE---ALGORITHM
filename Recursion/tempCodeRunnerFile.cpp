int Fibonacci(int n)
// {
//     int nexterm = 0;
//     int t1 = 0;
//     int t2 = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         // Prints the first two terms.
//         if (i == 1)
//         {
//             cout << t1 << ", ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout << t2;
//             continue;
//         }
//         nexterm = t1 + t2;
//         t1 = t2;
//         t2 = nexterm;
//         cout << ", " << nexterm;
//     }
// }