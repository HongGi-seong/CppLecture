#include <iostream>
// #define VIRTUAL 1
#define PURE_VIRTUAL 1

using namespace std ;

#if VIRTUAL
class Parent 
{
	public:
		virtual void Func ( void ) { cout << "Call Parent Function!!" << endl ; }	
} ;


class Child: public Parent
{
	public:
		virtual void Func ( void ) { cout << "Call Child Function!!" << endl ; }
} ;


int main ( void ) 
{
	Parent P, *pP ;
	Child C ;
	
	pP = &P ;
	pP -> Func ( ) ;
	pP = &C ;
	pP -> Func ( ) ;
	
	return 0 ;
}


////////////////////////////////////////////////////////////////////////////////////////


#elif PURE_VIRTUAL
class Parent 
{
	public:
		virtual void Func ( void ) = 0 ;
} ;


class Child: public Parent
{
	public:
		virtual void Func ( void ) { cout << "Call Child Function" ; } 
} ;


int main ( void ) 
{
	// Parent P ;
	Parent* P ;
	
	P = new Child ;
	P -> Func ( ) ;
	
	return 0 ;
}
#endif