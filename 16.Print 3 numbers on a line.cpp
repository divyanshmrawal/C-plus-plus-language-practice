#include <iostream>

using namespace std;

int main() {
	int i,userinput,j=1,x=0;
	
	cout<<"Enter your user input : ";
	cin>>userinput;
	
	for(i=1;i<=userinput;i++){
		 while(x < 3) {
            cout<<j++;
            x++;
        }
		x=0;
		cout<<"\n";
	}
	return 0;
}
