#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Task 1
void task1() {
    int array[10];
    srand(time(0));

    for (int i = 0; i < 10; ++i) {
        array[i] = rand() % 10 + 1;
    }

    cout << "Array: ";
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Array backwards: ";
    for (int i = 9; i >= 0; --i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int even_count = 0;
    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 == 0) {
            ++even_count;
        }
    }
    cout << "Total number of even numbers: " << even_count << endl;
}

// Task 2
void task2() {
    int sales[5];
    for (int i = 0; i < 5; ++i) {
        sales[i] = rand() % 401 + 100;  // Random sales between 100 and 500
    }

    cout << "Sales for the week: ";
    for (int i = 0; i < 5; ++i) {
        cout << sales[i] << " ";
    }
    cout << endl;

    int day;
    string continue_input;
    do {
        cout << "Enter a day:\n1 = Monday\n2 = Tuesday\n3 = Wednesday\n4 = Thursday\n5 = Friday\n\n";
        cin >> day;

        if (day >= 1 && day <= 5) {
            cout << "Sales for day " << day << ": " << sales[day - 1] << endl;
        } else {
            cout << "Invalid day." << endl;
        }

        cout << "Do you wish to continue? (Yes/No): ";
        cin >> continue_input;
    } while (continue_input == "Yes" || continue_input == "yes");
}

// Task 3
void task3() {
    int ages[20];
    for (int i = 0; i < 20; ++i) {
        cout << "Enter age #" << i + 1 << ": ";
        cin >> ages[i];
    }

    int greater_than_15 = 0;
    for (int i = 0; i < 20; ++i) {
        if (ages[i] > 15) {
            ++greater_than_15;
        }
    }
    cout << "Total number of ages greater than 15: " << greater_than_15 << endl;
}

// Task 4
void task4() {
    double finalGrade[6] = {85.8, 93.7, 76, 88.5, 100, 91.3};
    double sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += finalGrade[i];
    }
    double average = sum / 6;
    cout << "Average final grade: " << round(average * 10) / 10 << endl;
}

int main() {
    task1();
    task2();
    task3();
    task4();

    return 0;
}
