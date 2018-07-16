#include <iostream>

using namespace std ;


class MyClass 
{
	int num1, num2 ;
	
	public:
		MyClass ( int num1, int num2 )
		{
			this -> num1 = num1 ;
			this -> num2 = num2 ;		
		}
	
		void GetInfo ( void ) ;
} ;


void MyClass:: GetInfo ( void ) 
{
	cout << num1 << endl ;
	cout << num2 << endl ;
}


int main ( void )
{
	MyClass test ( 10, 20 ) ;
	
	test.GetInfo ( ) ;
	
	return 0 ;
}
