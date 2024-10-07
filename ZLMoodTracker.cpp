//Name: Zander Leon
//Program Name: Mood Tracker
//Date: 10/7/2024
//Extra: ASCII art
#include <iostream>
using namespace std;
int main()
{
    //main integer for feeling
    int feeling;
    //asking user about feeling
    cout << "How are you feeling today?\n1: Terrible\n2: Bad\n3: Okay\n4: Good\n5: Great";
    //taking user input
    cin >> feeling;
    //switch statement to interpret feeling
    switch (feeling) {
    case 1:
        cout << "So sorry to hear that. Want to talk about it?";
        break;
    case 2:
        cout << "Sorry, hope you feel better.";
        break;
    case 3:
        cout << "Alright.";
        break;
    case 4:
        cout << "Glad to hear that!";
        break;
    case 5:
        cout << "Thats amazing!";
        break;
    default:
        break;
    }
}

/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠖⠚⠉⠁⠀⠀⠉⠙⠒⢄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⠔⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢢⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀
⠀⠀⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢇⠀
⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄
⠀⠀⠀⠀⢸⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇
⠀⠀⠀⠀⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘
⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⡄⠀⠀⠀⠀⠀⢀⣶⡆⠀⢠⠇
⠀⠀⠀⠀⠀⠀⣣⠀⠀⠀⠀⠀⠀⠀⠙⠛⠁⠀⠀⠀⠀⠀⠈⠛⠁⡰⠃⠀
⠀⠀⠀⠀⢠⠞⠋⢳⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠜⠁⠀⠀
⠀⠀⠀⣰⠋⠀⠀⠀⢷⠙⠲⢤⣀⡀⠀⠀⠀⠀⠴⠴⣆⠴⠚⠁⠀⠀⠀⠀
⠀⠀⣰⠃⠀⠀⠀⠀⠘⡇⠀⣀⣀⡉⠙⠒⠒⠒⡎⠉⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢠⠃⠀⠀⢶⠀⠀⠀⢳⠋⠁⠀⠙⢳⡠⠖⠚⠑⠲⡀⠀⠀⠀⠀⠀⠀⠀
⠀⡎⠀⠀⠀⠘⣆⠀⠀⠈⢧⣀⣠⠔⡺⣧⠀⡴⡖⠦⠟⢣⠀⠀⠀⠀⠀⠀
⢸⠀⠀⠀⠀⠀⢈⡷⣄⡀⠀⠀⠀⠀⠉⢹⣾⠁⠁⠀⣠⠎⠀⠀⠀⠀⠀⠀
⠈⠀⠀⠀⠀⠀⡼⠆⠀⠉⢉⡝⠓⠦⠤⢾⠈⠓⠖⠚⢹⠀⠀⠀⠀⠀⠀⠀
⢰⡀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠀⠀⠀⢸⠀⠀⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀
⠀⠳⡀⠀⠀⠀⠀⠀⠀⣀⢾⠀⠀⠀⠀⣾⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠈⠐⠢⠤⠤⠔⠚⠁⠘⣆⠀⠀⢠⠋⢧⣀⣀⡼⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠈⠁⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/