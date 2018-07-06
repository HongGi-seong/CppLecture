#if 1
#include <iostream>

using namespace std ;

int main ( void )
{
	// int* pointer = new int ;
	// *pointer = 10 ;
	
	// cout << *pointer << endl ;
	
	// delete pointer ;
	
	int arraySize ;
	
	cout << "array size: " ;
	cin >> arraySize ;
	
	int* list = new int [ arraySize ] ;
	
	for ( int i = 0; i < arraySize; i++ ) {
		cin >> list [ i ] ;
	}
	
	for ( int i = 0; i < arraySize; i++ ) {
		cout << i << "element is: " << list [ i ] << endl ;
	}
	
	delete [ ] list ;
	
	system ( "PAUSE" ) ;
	
	return 0 ;
}
#endif