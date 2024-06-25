#include <iostream>

using namespace std;

int main() {
	int i;
	
	string str[100]= {"Sunday","Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
	
	for(i=0;i<7;i++){
		cout<<str[i]<<"-->"<<i<<"\n";
	}

	return 0;
}
