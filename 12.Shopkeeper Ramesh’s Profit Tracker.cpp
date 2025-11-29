// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//
//     int totalProfit = 0;
//     int totalLoss = 0;   // will store absolute value of losses
//
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//
//         if (x > 0) {
//             totalProfit += x;
//         }
//         else if (x < 0) {
//             totalLoss += -x;   // convert negative value to positive
//         }
//     }
//
//     int netBalance = totalProfit - totalLoss;
//     cout << "Total Profit: " << totalProfit << endl;
//     cout << "Total Loss: " << totalLoss << endl;
//     cout << "Net Balance: " << netBalance << endl;
//
//     return 0;
// }