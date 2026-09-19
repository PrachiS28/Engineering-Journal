#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int rowA, colA, rowB, colB;
 
    //Input Matrix A
    cout << "Enter number of rows for Matrix A: ";
    cin >> rowA;
    cout << "Enter number of columns for Matrix A: ";
    cin >> colA;
 
    vector<vector<int>> A(rowA, vector<int>(colA));
    cout << "Enter elements of Matrix A (" << rowA << "x" << colA << "):\n";
    for (int i = 0; i < rowA; i++)
        for (int j = 0; j < colA; j++)
            cin >> A[i][j];
 
    // Input Matrix B
    cout << "Enter number of rows for Matrix B: ";
    cin >> rowB;
    cout << "Enter number of columns for Matrix B: ";
    cin >> colB;
 
    // Check
    if (colA != rowB) {
        cout << "\nError: Matrix multiplication not possible.\n";
        cout << "Number of columns of A (" << colA
             << ") must equal number of rows of B (" << rowB << ").\n";
        return 1;
    }
 
    vector<vector<int>> B(rowB, vector<int>(colB));
    cout << "Enter elements of Matrix B (" << rowB << "x" << colB << "):\n";
    for (int i = 0; i < rowB; i++)
        for (int j = 0; j < colB; j++)
            cin >> B[i][j];
            
    // Display Matrix A and B
    cout << "\nMatrix A:\n";
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++)
            cout << A[i][j] << " ";
        cout << "\n";
    }
 
    cout << "\nMatrix B:\n";
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++)
            cout << B[i][j] << " ";
        cout << "\n";
    }
    
            // Multiply A and B
    vector<vector<int>> C(rowA, vector<int>(colB, 0));
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
 
    // Display Result
    
    cout << "\nResultant Matrix (A x B):\n";
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++)
            cout << C[i][j] << " ";
        cout << "\n";
    }
 
    return 0;
}
 
