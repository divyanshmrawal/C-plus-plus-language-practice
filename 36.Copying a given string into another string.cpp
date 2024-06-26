//QUESTION-->
//Write a C program to copy a given string into another and count the number of characters copied

//ANSWER-->
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	char str1[50],str2[50];
	int i,len;
	
	//Saving user input text with the help of cin function
	cout<<"Enter your text : ";
	cin>>str1;
	
	//Copying text from str1 to str2
	strcpy(str2,str1);
	
	//printing original and copied string 
	cout<<"Original string : "<<str1<<"\n";
	cout<<"Copied string : "<<str2<<"\n";
	
	//Finding length of Copied string with the help of strlen function
	len=strlen(str2);
	cout<<"lenght of Copied string : "<<len;

	
	return 0;
}
