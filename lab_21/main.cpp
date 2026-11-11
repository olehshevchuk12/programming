#include <iostream>
#include <fstream>
using namespace std;

const int N = 14;                
typedef int Matrix[N][N];        

void ReadMatrix(const char* name, Matrix m) {
    ifstream f(name);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            f >> m[i][j];
    f.close();
}

void WriteMatrix(const char* name, Matrix m) {
    ofstream f(name);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            f << m[i][j] << " ";
        f << endl;
    }
    f.close();
}

void Multiply(Matrix a, Matrix b, Matrix res) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            res[i][j] = 0;
            for (int k = 0; k < N; k++)
                res[i][j] = res[i][j] + a[i][k] * b[k][j];
        }
}

void MultiplyByNumber(Matrix a, int k, Matrix res) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            res[i][j] = k * a[i][j];
}

void Subtract(Matrix a, Matrix b, Matrix res) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            res[i][j] = a[i][j] - b[i][j];
}

void PrintMatrix(Matrix m) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    Matrix A, B, C;
    Matrix A2, A3, B2, X, Y;

    ReadMatrix("a.txt", A);
    ReadMatrix("b.txt", B);

    Multiply(A, A, A2);            
    Multiply(A2, A, A3);           
    Multiply(B, B, B2);            
    MultiplyByNumber(A3, 5, X);    
    MultiplyByNumber(B2, 8, Y);    
    Subtract(X, Y, C);             

    WriteMatrix("c.txt", C);

    cout << "Matrix C:" << endl;
    PrintMatrix(C);

    return 0;
}