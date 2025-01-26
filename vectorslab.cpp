// name: zander
// date: 2025-01-26
// lab: vectors part 1 lab

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void displayGreeting(const vector<string>& names) {
    cout << "hello, ";
    for (const auto& name : names) {
        cout << name << " ";
    }
    cout << "!\n";
}

int main() {
    // part 1: demonstrate vector operations
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << "the 3rd number is: " << numbers[2] << endl;
    numbers.pop_back();
    cout << "all numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // part 2: allow user to build and modify a vector
    vector<int> userVector;
    char choice;
    do {
        cout << "choose an operation:\n";
        cout << "1. add element\n";
        cout << "2. display vector\n";
        cout << "3. vector size\n";
        cout << "4. exit\n";
        cin >> choice;

        switch (choice) {
            case '1': {
                int element;
                cout << "enter an integer to add: ";
                cin >> element;
                userVector.push_back(element);
                break;
            }
            case '2': {
                cout << "vector elements: ";
                for (int num : userVector) {
                    cout << num << " ";
                }
                cout << "\n";
                break;
            }
            case '3': {
                cout << "current vector size: " << userVector.size() << endl;
                break;
            }
            case '4':
                cout << "exiting...\n";
                break;
            default:
                cout << "invalid choice, try again.\n";
        }
    } while (choice != '4');

    // part 3: handle user favorite colors and names
    vector<string> favoriteColors;
    string color;
    char addMore;

    do {
        cout << "enter your favorite color: ";
        cin >> color;
        favoriteColors.push_back(color);

        cout << "would you like to add another color? (y/n): ";
        cin >> addMore;
    } while (tolower(addMore) == 'y');

    cout << "your favorite colors are: ";
    for (const auto& favColor : favoriteColors) {
        cout << favColor << " ";
    }
    cout << "\n";

    int nameCount;
    cout << "how many names do you have? ";
    cin >> nameCount;

    vector<string> names;
    string name;
    for (int i = 0; i < nameCount; ++i) {
        cout << "enter name " << i + 1 << ": ";
        cin >> name;
        names.push_back(name);
    }

    displayGreeting(names);

    cout << "\nthank you for using the program!\n";
    cout << "   *****\n  *     *\n *       *\n*  thank  *\n *  you! *\n  *     *\n   *****\n";

    return 0;
}
