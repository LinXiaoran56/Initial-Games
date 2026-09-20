#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
	cout<<"Press WASD to test. Press Q to quit.\n";
	while(true)
	{
		int key = _getch( );
		switch(key){
			case 'W': case 'w':
				cout<<"W is pressed"<<endl;
				break;
			case 'A': case 'a':
				cout<<"A is pressed"<<endl;
				break;
			case 'S': case 's':
				cout<<"S is pressed"<<endl;
				break;
			case 'D': case 'd':
				cout<<"D is pressed"<<endl;
				break;
			case 'Q': case 'q':
				cout<<"Test is over."<<endl;
				return 0;
			default:
				cout<<"Another key is pressed."<<endl;
		}
	}
	return 0;
}

