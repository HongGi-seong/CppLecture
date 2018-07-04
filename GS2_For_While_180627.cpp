#if 1
#include <iostream>
using namespace std ;

int main ( ) 
{
	int sum = 0, number = 1 ;
	
	// for ( int number = 1; number < 11; number++ ) 
		// sum += number ;	
	
	while ( number < 11 ) 
		sum += number++ ;
	
	cout << sum << endl ;
	
	system ( "PAUSE" ) ;
	
	return 0 ;
	
}
#endif