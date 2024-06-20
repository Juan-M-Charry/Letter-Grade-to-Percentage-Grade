#include <iostream>
using namespace std;
int main (){

// Declare Variables
    char letter = 0;

// Prompts the user enter a letter grade
    cout<<"Enter a letter grade "<< endl;
    cout<<"**";
    cin>> letter;
    cout<<"\n";

// switch case statement to output the appropriate range for the grade entered in.
    switch (letter) {
		case 'A':
		case 'a':
			cout << "Grade range is 90 - 100"<< endl;
			break;
		case 'B':
		case 'b':
			cout << "Grade range is 80 - 89.99" << endl;
			break;
        case 'C':
        case 'c':
            cout<<"Grade range is 70 - 79.99"<< endl;
            break;
        case 'D':
        case 'd':
            cout<<"Grade range is 60 - 69.99"<< endl;
            break;
        case 'F':
        case 'f':
            cout<< "Grade range is 0 - 59.99"<< endl;
            break;

		default:
			cout <<"Error: ""'"<<letter<<"'"" is not a valid letter grade\n";
	}
    return 0;
}
