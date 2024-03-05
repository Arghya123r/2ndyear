#include <iostream>

using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposedMatrix[3][3];

    // Transpose the matrix
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            transposedMatrix[j][i] = matrix[i][j];

    // Print transposed matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << transposedMatrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
