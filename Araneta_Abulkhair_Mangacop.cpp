#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    double length = 30.55, width = 50.34, area, expectedgrade, actualgrade = 3.25;
    char letter1 = 'A', letter2 = 'B', letter3 = 'C', letter4 = 'D', letter5 = 'E';

    // Get user input for integers
    cout << "Enter an integer for a: ";
    cin >> a;
    cout << "Enter an integer for b: ";
    cin >> b;
    cout << "Enter an integer for c: ";
    cin >> c;
    cout << "Enter an integer for d: ";
    cin >> d;
    e = a + b + c + d;
    cout << "The sum of all integers given is: " << e << '\n';
    cout << "\nLength: " << length << '\n';
    cout << "Width: " << width << '\n';
    area = length * width;
    cout << "Area of the Rectangle is: " << area << '\n';
    cout << "\nEnter Expected grade: ";
    cin >> expectedgrade;
    cout << "Actual Grade: " << actualgrade << '\n';

    cout << "\nAlphabetical letter: " << letter1 << '\n';
    cout << "Alphabetical letter: " << letter2 << '\n';
    cout << "Alphabetical letter: " << letter3 << '\n';
    cout << "Alphabetical letter: " << letter4 << '\n';
    cout << "Alphabetical letter: " << letter5 << '\n';

    return 0;
}
