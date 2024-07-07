//QUESTION-->
//Display the minimum and maximum values for each of C's data types

//ANSWER-->
#include <iostream>
#include <limits>
using namespace std;

int main() {
	
	std::cout<<"Maximum and minimum value of int type :-- "<<"\n";
	std::cout<<"Maximum value : "<<std::numeric_limits<int>::max();	
	std::cout<<"minimum value : "<<std::numeric_limits<int>::min()<<std::endl;
	
	cout<<"====================================================================="<<std::endl;
	
	std::cout<<"Maximum and minimum value of float type :--"<<"\n";
	std::cout<<"Maximum value : "<<std::numeric_limits<float>::max()<<endl;
	std::cout<<"Minimum value : "<<std::numeric_limits<float>::min()<<endl;
	
	cout<<"====================================================================="<<std::endl;
	
	std::cout<<"Maximum and Minimum value of double type :--"<<"\n";
	std::cout<<"Maximum value : "<<std::numeric_limits<double>::max()<<endl;
	std::cout<<"Minimum value : "<<std::numeric_limits<double>::min()<<endl;
	
	cout<<"====================================================================="<<std::endl;
	std::cout<<"Maximum and Minimum value of char type :--"<<"\n";
	std::cout<<"Maximum value : "<<std::numeric_limits<char>::max()<<endl;
	std::cout<<"Minimum value : "<<std::numeric_limits<char>::min()<<endl;
	
	cout<<"====================================================================="<<std::endl;
	
	std::cout<<"Maximum and Minimum value of string type :--"<<"\n";
	std::cout<<"Maximum value : "<<std::numeric_limits<string>::max()<<endl;
	std::cout<<"Minimum value : " <<std::numeric_limits<string>::min()<<endl;
	
	return 0;
}
