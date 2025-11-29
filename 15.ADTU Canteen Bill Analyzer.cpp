// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main() {
//     int n, m, months;
//
//     cout << "Enter number of students: ";
//     cin >> n;
//
//     cout << "Enter number of days in a month: ";
//     cin >> m;
//
//     cout << "Enter number of months to analyze: ";
//     cin >> months;
//
//     for (int month = 1; month <= months; month++) {
//         cout << "\n--- Month " << month << " ---\n";
//
//         vector<vector<int>> bill(n, vector<int>(m));
//
//         cout << "Enter the bill data (each row = student, each column = day):\n";
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> bill[i][j];
//             }
//         }
//
//         // 1. Total spent by each student
//         vector<int> student_totals(n, 0);
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < m; j++)
//                 student_totals[i] += bill[i][j];
//
//         // Output totals
//         for (int i = 0; i < n; i++)
//             cout << "Student " << i + 1 << " total: ₹" << student_totals[i] << endl;
//
//         // 2. Day with highest total collection
//         vector<int> day_totals(m, 0);
//         for (int j = 0; j < m; j++)
//             for (int i = 0; i < n; i++)
//                 day_totals[j] += bill[i][j];
//
//         int max_day_index = 0;
//         for (int j = 1; j < m; j++)
//             if (day_totals[j] > day_totals[max_day_index])
//                 max_day_index = j;
//
//         cout << "Highest collection on Day " << max_day_index + 1 << endl;
//
//         // 3. Students who spent the most
//         int max_spent = student_totals[0];
//         for (int i = 1; i < n; i++)
//             if (student_totals[i] > max_spent)
//                 max_spent = student_totals[i];
//
//         cout << "Highest spender: ";
//         bool first = true;
//
//         for (int i = 0; i < n; i++) {
//             if (student_totals[i] == max_spent) {
//                 if (!first) cout << " and ";
//                 cout << "Student " << i + 1;
//                 first = false;
//             }
//         }
//
//         cout << "\n";
//     }
//
//     return 0;
// }
