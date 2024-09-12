/**
* Name: Zander Leon
* Program Name: Make a Calculator
* Date: 9/12/2024
* Extra: ASCII art
*/

#include <iostream>
using namespace std;

int main() {

	//Declaring Variables

	float n1;
	float n2;
	float add;
	float minus;
	float mult;
	float div;
	float mod;
	float up;
	float up2;
	float down;
	float down2;

	//Starting Main Code


	cout << "Enter first number:";
	cin >> n1;

	cout << "Enter second number:";
	cin >> n2;

	//Equations:

	add = (n1 + n2);

	minus = (n1 - n2);

	mult = (n1 * n2);

	div = (n1 / n2);

	mod = (int(n1) % int(n2));

	up = ++(n1);

	up2 = ++(n2);

	down = (n1) -= 2;

	down2 = (n2) -= 2;

	//Printing results

	cout << "Addition: " << add << endl;

	cout << "Subtraction: " << minus << endl;

	cout << "Multiplication: " << mult << endl;

	cout << "Division: " << div << endl;

	cout << "Remainder: " << mod << endl;

	cout << "Increment: " << up << ", " << up2 << endl;

	cout << "Decrement: " << down << ", " << down2 << endl;


	/*


	boo hoo


	⢻⢭⡓⣆⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠸⣏⢖⡲⣅⠀⠀
⣣⢾⡛⣜⢫⣦⠀⠀⢀⣤⠴⡦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣸⢏⡝⣆⢀
⢿⣧⢹⣬⡷⣚⣒⣶⡾⣍⡞⡱⣞⡇⠀⠀⠀⠀⢀⣠⢤⠖⣦⡤⠤⡶⠦⠤⣤⢶⠲⠤⣄⠀⠀⠀⠀⠀⢀⡤⠶⢶⢤⡀⢸⣛⣮⢞⡜⡚
⠈⡷⣻⢏⠶⣙⢶⣼⠟⡼⣜⡵⠋⠀⠀⠀⣠⠞⡩⢴⣿⣿⣾⣹⠐⢢⢁⡾⡵⠚⢻⣷⣤⡙⠲⢄⠀⠀⢾⣍⡻⣌⢧⣷⡾⡞⣥⢫⡝⣃
⠀⢻⣿⢊⣟⣾⢫⢇⡻⣱⢺⠁⠀⠀⠀⡼⣡⣿⣄⣀⡿⣿⣿⡏⡇⢢⢸⡿⣷⣤⣼⠿⢿⣿⣷⣎⣷⠀⠈⠳⣵⡩⢖⡻⣱⢻⣌⡳⢎⡵
⠀⠀⢻⡧⢞⡧⣋⣮⣕⡣⢿⠀⠀⢀⡼⢃⣻⢿⣿⣿⣧⠾⠟⡙⣧⣂⣌⢣⡛⡿⠿⠷⠾⠿⠿⠣⣌⠳⡀⢰⢯⡱⣫⡶⢥⣛⢮⡓⣏⢶
⠀⠀⠈⢯⡧⣓⢧⡚⣽⣞⡾⠀⢀⡞⠠⣿⠀⡰⢂⣖⣤⣯⣾⣿⣿⣿⣿⣿⣿⣇⠄⣎⣱⣉⢎⡱⣘⡇⠹⡞⣮⢵⢯⣱⠳⡬⢧⡙⣦⠋
⠀⠀⠀⠈⠳⣭⢲⡹⢲⡞⠁⠀⣼⢐⠡⡙⠳⠗⡛⣩⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⡁⡉⠛⣶⣵⠋⡐⢿⠈⠻⣆⢧⡛⢜⣣⠟⠁⠀
⠀⠀⠀⠀⠀⠈⠉⠉⠁⠀⠀⢰⡇⢊⠔⡡⢊⠔⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡈⠡⣿⢹⡄⢡⢚⣇⠀⠈⠉⠉⠉⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⢊⠤⢑⠢⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⢹⠃⢢⢻⡄⢊⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣇⠌⢢⠁⢎⣿⣿⣿⣿⣿⣿⣿⠿⠟⠿⢿⣿⣿⣿⣿⣿⣿⣏⡄⢣⢺⡇⢼⡋⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡊⠤⠉⢼⣿⣿⣿⣿⠿⠋⡄⠒⡌⢢⠐⡌⠻⣿⣿⣿⣿⣯⠛⢓⠛⣠⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⡘⡏⣿⣿⣿⡿⠋⡄⠣⠌⡱⢈⠄⢣⠐⡡⠘⢿⣿⣿⣿⡐⣌⢒⣰⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢳⡅⠸⠿⢛⡡⠘⡄⠣⡘⠄⠣⡘⠄⢣⠐⣉⠂⠻⢿⠿⠁⢼⡲⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⣁⠦⠟⡁⢣⠐⡡⠂⡍⠰⢁⠎⡄⠣⢄⡉⠲⢦⣂⣉⢴⠗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⢲⢥⣂⠅⣂⠑⡈⢅⠊⡐⠌⢡⢂⣌⣡⠶⣛⣙⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
	*/
}
