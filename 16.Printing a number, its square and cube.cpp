#include <iostream>

using namespace std;

int main() {
	int i,square,cube,n;
	
	cout<<"Enter number of lines : ";
	cin>>n;
	
	for(i=1;i<n+1;i++){
		square=i*i;
		cube=i*i*i;
		cout<<i<<square<<cube<<"\n";
	}
	return 0;
}
