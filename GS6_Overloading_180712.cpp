#include <iostream>
using namespace std ;


void print ( char value ) 
{
	cout << value << endl ;
}


void print ( int value ) 
{
	cout << value << endl ;
}


void print ( double value )
{
	cout << value << endl ;  
}


int main ( void ) 
{
	char charValue = 'a' ;
	int intValue = 1 ;
	double doubleValue = 1.23 ;
	
	print ( charValue ) ;
	print ( intValue ) ;
	print ( doubleValue ) ;
	
	return 0 ; 
}