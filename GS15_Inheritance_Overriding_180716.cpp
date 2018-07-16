#include <iostream>

using namespace std ;


class Parent
{
	public:
		void Over ( void )
		{
			cout << "Call Parent Over function" << endl ;
		}
} ;


class Child: public Parent 
{
	public:
		void Over ( void )
		{
			Parent:: Over ( ) ;
			cout << "Call Child Over function" << endl ;
		}
} ;


int main ( void ) 
{
	Child test ;
	
	test.Over ( ) ;
	
	return 0 ;
}

