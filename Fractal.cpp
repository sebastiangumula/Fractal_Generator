#include <iostream>
#include <makefractal.h>
#include <unistd.h>
using namespace std;

int main(void) 
{

char a;

system("clear");


while (1){ 
cout << '\t' << '\t' << '\t' << "Welcome to Super_Fractal_Generator" << endl << endl;
cout << '\t' << '\t' << '\t' << "current ver. 1.0.0 (Amoebe)"<< endl << endl;
cout << "Choose the fractal of your desire: "<< endl << endl;


cout << "a) Spiral"<< endl << "b) Fern" << endl << "c) Triforce" << endl << "d) Dragon" << endl;

	cin >> a;

	switch(a){
		case 'a': 
		cout << "Generating..." << endl;
		Generate_Spiral();
		system("sh gplot.sh");
		break;

		case 'b':
		cout << "Generating..." << endl;
		Generate_Fern();
		system("sh gplot.sh");
		break;

		case 'c': 
		cout << "Generating..." << endl;
		Generate_Triforce();
		system("sh gplot.sh");
		break;

		case 'd':
		cout << "Generating..." << endl;
		Generate_Dragon();
		system("sh gplot.sh");
		break;

		default:
		break;
		}
	system("clear");	
	}

return 0;
}
