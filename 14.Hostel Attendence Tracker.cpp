// #include <stdio.h>
//
// int main(void) {
//     int A[10][7];
//     int i, j;
//
//     /* Read 10 rows of 7 integers (0 or 1).
//        Input can be given as 70 space/newline separated numbers. */
//     for (i = 0; i < 10; ++i) {
//         for (j = 0; j < 7; ++j) {
//             if (scanf("%d", &A[i][j]) != 1) {
//                 fprintf(stderr, "Error: expected 70 integers (10x7)\n");
//                 return 1;
//             }
//             /* optional validation:
//                if (A[i][j] != 0 && A[i][j] != 1) { ... } */
//         }
//     }
//
//     int rowSum[10];
//     int colSum[7];
//     for (i = 0; i < 10; ++i) rowSum[i] = 0;
//     for (j = 0; j < 7; ++j) colSum[j] = 0;
//
//     /* Compute row sums and column sums */
//     for (i = 0; i < 10; ++i) {
//         for (j = 0; j < 7; ++j) {
//             rowSum[i] += A[i][j];
//             colSum[j] += A[i][j];
//         }
//     }
//
//     /* Find student with highest attendance (tie → lower student number) */
//     int bestStudent = 0; /* 0-based index */
//     int maxPresent = rowSum[0];
//     for (i = 1; i < 10; ++i) {
//         if (rowSum[i] > maxPresent) {
//             maxPresent = rowSum[i];
//             bestStudent = i;
//         }
//         /* if equal, do nothing to keep lower student number */
//     }
//
//     /* Find day with lowest overall attendance (tie → lower day number) */
//     int lowestDay = 0; /* 0-based index */
//     int minDayTotal = colSum[0];
//     for (j = 1; j < 7; ++j) {
//         if (colSum[j] < minDayTotal) {
//             minDayTotal = colSum[j];
//             lowestDay = j;
//         }
//         /* if equal, do nothing to keep lower day number */
//     }
//
//     /* Print summary */
//     printf("Weekly Attendance Summary\n");
//     printf("-------------------------\n\n");
//     printf("Total Present Days:\n");
//     for (i = 0; i < 10; ++i) {
//         printf("Student %d: %d\n", i + 1, rowSum[i]);
//     }
//     printf("\n");
//     printf("Student with Highest Attendance: Student %d (%d Days)\n",
//            bestStudent + 1, maxPresent);
//     printf("\n");
//     printf("Day with Lowest Overall Attendance: Day %d\n", lowestDay + 1);
//
//     return 0;
// }
