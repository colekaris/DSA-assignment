#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {0, 0, 5},
        {0, 8, 0},
        {0, 0, 9}
    };

    int row[9], col[9], value[9];
    int k = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] != 0) {
                row[k] = i;
                col[k] = j;
                value[k] = matrix[i][j];
                k++;
            }
        }
    }

    cout << "Row  Column  Value\n";

    for (int i = 0; i < k; i++) {
        cout << row[i] << "      "
             << col[i] << "       "
             << value[i] << endl;
    }

    return 0;
}
