#include <iostream>

using namespace std;

void suma(int &num1, int &num2 );
main(){

	int a= 10, b= 20;
	suma(a,b);
	cout<< "a: "<<a<<endl;
	cout<< "b: "<<b<<endl;
	
	system("pause");
}
void suma(int &num1, int &num2){
	int resultado= 0;
	num1 +=1; // 11
	num2 +=1; // 21
	resultado= num1 + num2; //32
	cout<< resultado<<endl;
}
