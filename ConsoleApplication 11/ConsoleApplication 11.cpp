#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void main()
{
	srand(time(NULL));
	cout << "Zahlenraten Spiel" << endl;
	int x;
	x = rand() % 101;	
	cout << x << endl;
	for (;;) {
		int y;
		cout << "bitte geben sie eine nummer zwichen 0-100 ein :";
		cin >> y;
		if (y >= 0 && y <= 100)
		{
			if (y == x) {
				cout << "gratulation du hast die nummer geraten" << endl;
				break;
			}
			else if (y > x)
			{
				cout << "nummer größer als die gesuchte zahl" << endl;

			}
			else
			{
				cout << "nummer kleiner als die gesuchte zahl" << endl;
			}
		}
		else {
			cout << "Ihre zahl nicht moglich geben sie bitte eine nummer zwichen 0-100 ein " << endl;
		}
	}
}
