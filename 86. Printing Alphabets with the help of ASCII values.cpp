//QUESTION-->
//Print the alphabet set in decimal and character form

//ANSWER-->
#include <iostream>

using namespace std;

// Creating a function for storing alphabets in capital form
void Alphabet(char i , int count){

		for(i=65 , count=65;i<=90 , count<=90;i++ , count++){
		cout<<"["<<count<<" = "<<i<<"]"<<"\n";
	}
	
}

// Creating a function for storing small in capital form
void Small_alphabet(char b , int scount){
	
	for(b=97 , scount=97 ; b<=122 , scount<=122 ; b++ , scount++){
		cout<<"["<<scount<<" = "<<b<<"]"<<"\n";
	}
	
}

int main() {
	//Printing Alphabets in capital letters
	char letter;
	int position_count;
	Alphabet(position_count,letter);
	
	//Printing Alphabets in small letters
	char sletter;
	int sposition_scount;
	Small_alphabet(sposition_scount,sletter);
	
	
	return 0;
}
