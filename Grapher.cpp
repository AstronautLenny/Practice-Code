#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


int main()
{


    int a,x,y,xcoord,ycoord,xval[10];
    char again;
	srand(time(0));


    do{
        int xval[10]={0};
        cout<< "Do you want random or user-input values? (1=User-Input, 2=Random)";
        cin>> a;
        switch  (a){
            case 1:
            cout << "Enter your coordinates.. (0 thru 10 only, please.)" << endl;
                do{
                    cout << "Enter x-coordinate " << " >> ";
                    cin>>xcoord;
                }while (xcoord > 10 || xcoord < 0);
                do{
                    cout << "Enter y-coordinate " << " >> " ;
                    cin>>ycoord;
                    cout<<endl;
                }while (ycoord>10 || ycoord<0);
                 xval[xcoord-1]=ycoord;
                break;
            case 2:
                int xcoord= (rand() % 10)+1;
                int ycoord= xcoord*rand () % 10+1;;
                 xval[xcoord-1]=ycoord;
                break;
                }


	for(y = 10; y > 0; y--) //prints y-axis
	{
		if(y<10)
			cout << " "; // Add space if y less than 10 to keep column even
            cout << y << " ";
          for(x = 0; x < 10 ; x++)
		{
			if(xval[x] == y)
			{
                cout<<" * ";
			}
			else
				cout<<"   ";
		}
		cout << endl;
	}

	cout << "   ";

	for(int x = 1; x < 11 ; x++){ //prints x-axis
		cout<<" " << x << " ";
	}
	cout << endl << endl;

	cout<< "Want to plot again? (Y/N): ";
	cin>> again;
	system ("CLS");
    } while(again=='y' || again=='Y');

    cout<< "Goodbye" <<endl;
}
