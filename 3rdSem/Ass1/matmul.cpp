#include <iostream>

using namespace std;

int main() {
    int matrixA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrixB[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int resultMatrix[2][2] = {0};

    // Matrix multiplication
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 3; ++k)
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];

    // Print result matrix
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << resultMatrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
