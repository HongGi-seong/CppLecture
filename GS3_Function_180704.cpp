#include <iostream>

#define function 0
#define reference 0


using namespace std ;


#if function

int Sqaure ( int number ) 
{
	return number * number ;
}


int main ( void ) 
{
	int number ;
	
	cout << "enter a number" << endl ;
	
	cin >> number ;
	
	cout << "result: " << Sqaure ( number ) << endl ;
	
	system ( "PAUSE" ) ;
	
	return 0 ;
}


#elif reference 

void ChangeValue ( int &number ) 
{
	number = 3 ;
}


int main ( void )
{
	// int number = 5 ;
	// cout << number << endl ;
	// ChangeValue ( number ) ;
	// cout << number << endl ;
	
	int x ;
	int& y = x ;
	int& z = y ;
	
	x = 1 ;
	cout << "x: " << x << " y: " << y << " z: " << z << endl ;
	
	y = 2 ; 
	cout << "x: " << x << " y: " << y << " z: " << z << endl ;
	
	z = 3 ;
	cout << "x: " << x << " y: " << y << " z: " << z << endl ;
	
	system ( "PAUSE" ) ;
	
	return 0 ; 
}

#endif