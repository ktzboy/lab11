#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string random() {
    int i = rand() % 9;
    switch(i) {
        case 0 :
            return "A";
            break;
        case 1 :
            return "B+";
            break;
        case 2 :
            return "B";
            break;
        case 3 :
            return "C+";
            break;
        case 4 :
            return "C";
            break;
        case 5 :
            return "D+";
            break;
        case 6 :
            return "D";;
            break;
        case 7 :
            return "F";;
            break;
        case 8 :
            return "W";;
            break;
    }
}

int main() {
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    cout << "You will get " << random() << " in this 261102.";
}