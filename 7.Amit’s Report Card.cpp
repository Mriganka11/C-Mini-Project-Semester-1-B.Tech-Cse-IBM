// #include <iostream>
// #include <vector>
// #include <algorithm>  // for max_element and min_element
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;  // number of subjects
//
//     vector<int> marks(n);
//     for (int i = 0; i < n; i++) {
//         cin >> marks[i];
//     }
//
//     // Find the highest and lowest marks
//     int highest = *max_element(marks.begin(), marks.end());
//     int lowest = *min_element(marks.begin(), marks.end());
//
//     // Print results
//     cout << "Highest = " << highest << endl;
//     cout << "Lowest = " << lowest << endl;
//
//     return 0;
// }