#include <iostream>
using namespace std ;


class B ;


class A 
{
	int data ;
	
	public:
		A ( int factorData ) ;
		
		void ShowData ( B showB ) ;
		friend B ;
} ;


class B
{
	int data ;
	
	public:
		B ( int factorData ) ;
		
		void ShowData ( A showA ) ;
		friend A ;
} ;


A:: A ( int factorData )
{
	data = factorData ;
}


void A:: ShowData ( B showB )
{
	cout << "B data is "<< showB.data << endl ;
}


B:: B ( int factorData ) 
{
	data = factorData ;	
}


void B:: ShowData ( A showA ) 
{
	cout << "A data is "<< showA.data << endl ;
	
}


int main ( void ) 
{
	A a ( 10 ) ;
	B b ( 20 ) ;
	
	a.ShowData ( b ) ;
	b.ShowData ( a ) ;
	
	return 0 ;
}