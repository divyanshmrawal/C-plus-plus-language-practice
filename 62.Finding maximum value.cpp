#include <iostream>

using namespace std;

int main() {
	int i,x,p,m;
	
	cout<<"Enter your number : ";
	 
	 for(i=1;i<7;i++){
	 	cin>>x;
	 	
	 	if(x>=m){
	 		m=x;
	 		p=i;
		 }
	 }
	 
	 cout<<"Maximum value : "<<m<<"\n";
	 cout<<"Position of value : "<<p<<"\n";
	 
	return 0;
}
