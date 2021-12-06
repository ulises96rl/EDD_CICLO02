#include <iostream>
#include <array>
#include <ctime>
using namespace std;



int main(){
	
char letras[] = {'J', 'U', 'V', 'E', 'N', 'T', 'U', 'D'};

char *ptr1, *ptr2;
char temp;
ptr1 = &letras[4];  // 
 
 
temp = *(ptr1 - 3); // 
 
 
ptr2 = ptr1 - 4; // 
 
 
temp = *++ptr2; // 
 
 
ptr1 = ptr2++; //

//cout << "*p3 = " << *p3 << endl;
cout << "*prtl =" << *ptrl <<endl;
	
	return 0;
}
