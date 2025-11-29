// #include <iostream>
// using namespace std;
//
// int main() {
//     const int STUDENTS = 5;
//     const int SUBJECTS = 3;
//     int marks[STUDENTS][SUBJECTS];
//
//     // Subject names
//     string subjects[] = {"Mathematics", "Physics", "Computer Science"};
//
//     // Input marks
//     cout << "Enter marks of 5 students in 3 subjects:" << endl;
//     for (int i = 0; i < STUDENTS; i++) {
//         cout << "Student " << (i + 1) << " : ";
//         for (int j = 0; j < SUBJECTS; j++) {
//             cin >> marks[i][j];
//         }
//     }
//
//     cout << endl;
//
//     // Find and display highest marks in each subject
//     for (int j = 0; j < SUBJECTS; j++) {
//         int highest = marks[0][j];
//
//         // Find highest marks in current subject
//         for (int i = 1; i < STUDENTS; i++) {
//             if (marks[i][j] > highest) {
//                 highest = marks[i][j];
//             }
//         }
//
//         // Display result
//         cout << " Highest marks in " << subjects[j] << " : " << highest << endl;
//     }
// }