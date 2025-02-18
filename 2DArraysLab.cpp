/*
Zander
2/17/25
2D Arrays Lab
ASCII art
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// generates a random number in the given range
int getRandom(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(0)); // seed for random numbers
    
    int rows, columns;
    cout << "Enter rows (1-5): ";
    cin >> rows;
    cout << "Enter columns (1-5): ";
    cin >> columns;
    
    int matrix[5][5];
    int maxVal = 0, maxRow = 0, maxCol = 0;
    
    cout << "\nGenerated Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = getRandom(1, 50);
            cout << matrix[i][j] << " ";
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
        cout << endl;
    }
    
    cout << "\nMaximum Value: " << maxVal << " at (" << maxRow << ", " << maxCol << ")" << endl;

    int n;
    cout << "\nEnter n (1-10): ";
    cin >> n;
    
    int squareMatrix[10][10];
    
    cout << "\nGenerated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            squareMatrix[i][j] = getRandom(1, 100);
            cout << squareMatrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nRow and Column Sums and Averages:" << endl;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += squareMatrix[i][j];
        }
        cout << "Row " << i << " Sum: " << rowSum << " Avg: " << rowSum / (double)n << endl;
    }
    
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += squareMatrix[i][j];
        }
        cout << "Column " << j << " Sum: " << colSum << " Avg: " << colSum / (double)n << endl;
    }
    
    int numStudents;
    cout << "\nEnter number of students (1-10): ";
    cin >> numStudents;
    
    int scores[10][3];
    cout << "\nExam Scores:" << endl;
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < 3; j++) {
            scores[i][j] = getRandom(50, 100);
            cout << scores[i][j] << " ";
        }
        cout << endl;
    }
    
    string subjects[3] = {"Math", "English", "Science"};
    cout << "\nSubject Averages:" << endl;
    for (int j = 0; j < 3; j++) {
        int sum = 0;
        for (int i = 0; i < numStudents; i++) {
            sum += scores[i][j];
        }
        cout << subjects[j] << " Average: " << sum / (double)numStudents << endl;
    }
    
    return 0;
}
/*
⡴⠒⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠉⠳⡆⠀
⣇⠰⠉⢙⡄⠀⠀⣴⠖⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠁⠙⡆
⠘⡇⢠⠞⠉⠙⣾⠃⢀⡼⠀⠀⠀⠀⠀⠀⠀⢀⣼⡀⠄⢷⣄⣀⠀⠀⠀⠀⠀⠀⠀⠰⠒⠲⡄⠀⣏⣆⣀⡍
⠀⢠⡏⠀⡤⠒⠃⠀⡜⠀⠀⠀⠀⠀⢀⣴⠾⠛⡁⠀⠀⢀⣈⡉⠙⠳⣤⡀⠀⠀⠀⠘⣆⠀⣇⡼⢋⠀⠀⢱
⠀⠘⣇⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⡴⢋⡣⠊⡩⠋⠀⠀⠀⠣⡉⠲⣄⠀⠙⢆⠀⠀⠀⣸⠀⢉⠀⢀⠿⠀⢸
⠀⠀⠸⡄⠀⠈⢳⣄⡇⠀⠀⢀⡞⠀⠈⠀⢀⣴⣾⣿⣿⣿⣿⣦⡀⠀⠀⠀⠈⢧⠀⠀⢳⣰⠁⠀⠀⠀⣠⠃
⠀⠀⠀⠘⢄⣀⣸⠃⠀⠀⠀⡸⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠈⣇⠀⠀⠙⢄⣀⠤⠚⠁⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⢘⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢰⣿⣿⣿⡿⠛⠁⠀⠉⠛⢿⣿⣿⣿⣧⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡀⣸⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⡀⢀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠹⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⡿⠁⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣤⣞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⣀⣠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⢤⣀⣀⠀⢀⣀⣀⠤⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
