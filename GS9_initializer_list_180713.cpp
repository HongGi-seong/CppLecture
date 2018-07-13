#include <iostream>
using namespace std ;


class Marine 
{
	static int totalMarines ;
	
	int hp ;
	int posX, posY ;
	const int damage ;
	bool isDead ;
	
	public:
		Marine ( void ) ;
		Marine ( int x, int y ) ;
		Marine ( int x, int y, int damage ) ;
		~Marine ( void ) { totalMarines-- ; } ;
		
		int Attack ( void ) ;
		void BeAttacked ( int attack ) ;
		void Move ( int x, int y ) ;
		void ShowStatus ( void ) ;
		static void ShowMarineNum ( void ) ;
} ;

int Marine:: totalMarines = 0 ;


void Marine:: ShowMarineNum ( void ) 
{
	cout << "static class function: " << totalMarines << endl ;
}


Marine:: Marine ( ): hp ( 50 ), posX ( 0 ), posY ( 0 ),
damage ( 5 ), isDead ( false ) { totalMarines++ ; } ;


Marine:: Marine ( int x, int y ): hp ( 50 ), posX ( x ), posY ( y ),
damage ( 5 ), isDead ( false ) { totalMarines++ ; } ;


Marine:: Marine ( int x, int y, int damage ): hp ( 50 ), posX ( x ), posY ( y ),
damage ( damage ), isDead ( false ) { totalMarines++ ; } ;


int Marine:: Attack ( void ) 
{
	return damage ;
}


void Marine:: BeAttacked ( int attack )
{
	hp -= attack ;
	if ( hp <= 0 ) 
		isDead = true ;
}


void Marine:: Move ( int x, int y )
{
	posX = x ;
	posY = y ;
}


void Marine:: ShowStatus ( void )
{
	cout << "====== Marine ======" << endl ;
	cout << "postion: ( " << posX << " , " << posY << " )" << endl ;
	cout << "HP: " << hp << endl << endl ;
	cout << "total number of marines: " << totalMarines << endl ;
}


void CreateMarine ( void )
{
	Marine marine3 ( 5, 5, 5 ) ;
	Marine:: ShowMarineNum ( ) ;
}


int main ( void )
{
	Marine marine1 ( 2, 3, 10 ) ;
	Marine:: ShowMarineNum ( ) ;
	
	Marine marine2 ( 3, 5, 10 ) ;
	Marine:: ShowMarineNum ( ) ;
	
	CreateMarine ( ) ;
	
	cout << endl ;
	cout << "marine2 is attacked by marine1" << endl ;
	marine2.BeAttacked ( marine1.Attack ( ) ) ;
	
	marine1.ShowStatus ( ) ;
	marine2.ShowStatus ( ) ;
	
	return 0 ;
}

