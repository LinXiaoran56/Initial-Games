#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	int non = 1;
	cout<<"Press WASD to test. Press Q to quit.\n";
	while(true)
	{
		if(_kbhit()){ // if keyboard is hit
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
		else {
			if(non >= 20)
			{
				cout<<"Waiting for press."<<endl;	
				non = 0;
			}
			else
				non ++;
		}
		Sleep(300);
	}
	return 0;
}

