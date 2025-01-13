#include <iostream>
using namespace std;

int main() {
    // Matriks 3x3
    double matriks[3][3] = {
        {4, 2, 8},
        {2, 1, 5},
        {3, 2, 4}
    };
    double inversMatriks[3][3];
    double det;
    int baris = 3;
    int kolom = 3;

    cout << "Nilai matriks : \n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << " | ";
        }
        cout << "\n";
    }

    // Menghitung determinan
    det = matriks[0][0] * (matriks[1][1] * matriks[2][2] - matriks[1][2] * matriks[2][1]) -
        matriks[0][1] * (matriks[1][0] * matriks[2][2] - matriks[1][2] * matriks[2][0]) +
        matriks[0][2] * (matriks[1][0] * matriks[2][1] - matriks[1][1] * matriks[2][0]);

    if (det == 0) {
        cout << "Matriks tidak memiliki invers karena determinan = 0." << endl;
    }
    else {
        double inversDeterminan = 1 / det;
        inversMatriks[0][0] = (matriks[1][1] * matriks[2][2] - matriks[1][2] * matriks[2][1]) * inversDeterminan;
        inversMatriks[0][1] = (matriks[0][2] * matriks[2][1] - matriks[0][1] * matriks[2][2]) * inversDeterminan;
        inversMatriks[0][2] = (matriks[0][1] * matriks[1][2] - matriks[0][2] * matriks[1][1]) * inversDeterminan;
        inversMatriks[1][0] = (matriks[1][2] * matriks[2][0] - matriks[1][0] * matriks[2][2]) * inversDeterminan;
        inversMatriks[1][1] = (matriks[0][0] * matriks[2][2] - matriks[0][2] * matriks[2][0]) * inversDeterminan;
        inversMatriks[1][2] = (matriks[0][2] * matriks[1][0] - matriks[0][0] * matriks[1][2]) * inversDeterminan;
        inversMatriks[2][0] = (matriks[1][0] * matriks[2][1] - matriks[1][1] * matriks[2][0]) * inversDeterminan;
        inversMatriks[2][1] = (matriks[0][1] * matriks[2][0] - matriks[0][0] * matriks[2][1]) * inversDeterminan;
        inversMatriks[2][2] = (matriks[0][0] * matriks[1][1] - matriks[0][1] * matriks[1][0]) * inversDeterminan;

        cout << "Hasil matriks invers : " << endl;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << inversMatriks[i][j] << " | ";
            }
            cout << endl;
        }
    }
    return 0;
}
