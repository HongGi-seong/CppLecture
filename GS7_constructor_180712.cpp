#include <iostream>
#include <string.h>
using namespace std ;


class Marine 
{
	private:
		int hp ;
		int pos_x, pos_y ;
		int damage ;
		bool isDead ;
		char* name ;
	
	public:
		Marine ( void ) ;
		Marine ( int x, int y ) ;
		Marine ( int x, int y, const char* marineName ) ;
		~Marine ( void ) ;
		
		int Damage ( void ) ;
		void BeDamaged ( int damage ) ;
		void NewPosition ( int x, int y ) ;
		void Status ( void ) ;
} ;


Marine:: Marine ( void )
{
	hp = 50 ;
	pos_x = pos_y = 0 ;
	damage = 5 ;
	isDead = false ;
	name = NULL ;
}


Marine:: Marine ( int x, int y ) 
{
	hp = 50 ;
	pos_x = x ;
	pos_y = y ;
	damage = 5 ;
	isDead = false ;
	name = NULL ;
}


Marine:: Marine ( int x, int y, const char* marineName ) 
{
	name = new char [ strlen ( marineName ) + 1 ] ;
	strcpy ( name, marineName ) ; 
	
	hp = 50 ;
	pos_x = x ;
	pos_y = y ;
	damage = 5 ;
	isDead = false ;	
}


Marine:: ~Marine ( void ) 
{
	cout << name << " ~marine" << endl ;
	
	if ( name != NULL ) 
		delete [ ] name ;
}


int Marine:: Damage ( void ) 
{
	return damage ;
}


void Marine:: BeDamaged ( int factorDamage )
{
	hp -= factorDamage ;
	if ( hp <= 0 ) 
		isDead = true ;
}	


void Marine:: NewPosition ( int x, int y ) 
{
	pos_x = x ;
	pos_y = y ;
}


void Marine:: Status ( void ) 
{
	cout << " ====== Marine " << name << " Status ===== " << endl ;
	cout << "Position: ( " << pos_x << ", " << pos_y << " )" << endl ;
	cout << "HP: " << hp << endl << endl ;
}


int main ( void ) 
{
	Marine* marines [ 100 ] ;
	
	marines [ 0 ] = new Marine ( 2, 3, "marine1" ) ;
	marines [ 1 ] = new Marine ( 3, 5, "marine2" ) ;
	
	marines [ 0 ] -> Status ( ) ;
	marines [ 1 ] -> Status ( ) ;
	
	cout << endl << "attack!!!" << endl << endl ;
	marines [ 1 ] -> BeDamaged ( marines [ 0 ] -> Damage ( ) ) ;
	
	marines [ 0 ] -> Status ( ) ;
	marines [ 1 ] -> Status ( ) ;
	
	delete marines [ 0 ] ;
	delete marines [ 1 ] ;
	
	return 0 ;	
}



