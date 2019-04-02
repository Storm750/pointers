#include <iostream>

using namespace std;

void myswap(int* ptr1, int* ptr2)
{
	
  cout << "ptr1 address: " << &ptr1 << endl;

  auto temp = ptr1;
  ptr1 = ptr2;
  ptr2 = temp;
  
  cout << "address of temp: " << &temp << endl << endl;
  cout << "address of ptr1: " << &ptr1 << endl << endl;
  cout << "address of ptr2: " << &ptr2 << endl << endl;
}


int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;
  
  cout << "Address of a: " << &a << endl;
  cout << "Address of b: " << &b << endl;

//swap(a,b); //why does theirs work????   
 
  myswap(&a, &b); // but mine doesn't ?!?!?!?!!!???

  cout<<"a = "<<a<<", b = "<<b<<endl;
  
  cout << "Address of a: " << &a << " ";
  cout << "Address of b: " << &b << endl;
}
