#include <iostream>

using namespace std;

int main() {
	int i;
	float series=0;

	
	for(i=1;i<=50;i++){
		 series=series+(float)1/i;
	}
	
	cout<<series;
      
	return 0;
}
