//QUESTION-->
//Write a c++ program which find missing number

//ANSWER-->
#include <iostream>

using namespace std;

int main() {
	int main_arr[100],i,size,sum1=0,sum2=0;
	
	cout<<"Enter total numbers of values = ";
	cin>>size;
	
	//Accpeting and adding digits from user
	for(i=0;i<size;i++){
	    cout<<"Enter your "<<i<<" digits = ";
		cin>>main_arr[i];
		
	    sum1=sum1+main_arr[i];
	}

//printing user-digits
cout<<"Your entered digits = ";
cout<<"[";
for(i=0;i<size;i++){
	cout<<main_arr[i]<<",";
}
cout<<"]"<<endl;

cout<<"=================================================================================================================================="<<endl;

//Edited array
int edited_arr[100],b,size2;

	cout<<"Enter total numbers of non-removed values = ";
	cin>>size2;
//Accepting and adding digits of edited array from user
	for(b=0;b<size2;b++){
	    cout<<"Enter your "<<b<<" digits = ";
		cin>>edited_arr[b];
		
		 sum2=sum2+edited_arr[b];
	}
	
	//printing user-digits of edited array
cout<<"Your non-remove entered digits = ";
cout<<"[";
for(b=0;b<size2;b++){
	cout<<edited_arr[b]<<",";
}
cout<<"]"<<endl;

cout<<"===================================================================================================================================="<<endl;

//prinnting missing number
int missing_number=sum1-sum2;
cout<<"Missing number = "<<missing_number;
		return 0;
}
