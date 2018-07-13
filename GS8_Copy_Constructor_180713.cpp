#include <iostream>
#include <string.h> 
using namespace std ;

class PhotonCannon 
{
	private:
		int hp, shield ;
		int posX, posY ;
		int damage ;
		char *name ;
		
	public:
		PhotonCannon ( int x, int y ) ;
		PhotonCannon ( int x, int y, const char* cannonName ) ; 
		PhotonCannon ( const PhotonCannon& pc ) ;
		~PhotonCannon ( ) ;
		
		void ShowStatus ( void ) ;
} ;


PhotonCannon:: PhotonCannon ( int x, int y )
{
	cout << "create constructor " << endl ;
	hp = shield = 100 ;
	posX = x ;
	posY = y ;
	damage = 20 ;
	name = NULL ;
}


PhotonCannon:: PhotonCannon ( int x, int y, const char* cannonName ) 
{
	cout << "create constructor " << endl ;
	hp = shield = 100 ;
	posX = x ;
	posY = y ;
	damage = 20 ;
	
	name = new char [ strlen ( cannonName ) + 1 ] ;
	strcpy ( name, cannonName ) ;
}


PhotonCannon:: PhotonCannon ( const PhotonCannon& pc ) 
{
	cout << "create copy constructor " << endl ;
	hp = pc.hp ;
	shield = pc.shield ;
	posX = pc.posX ;
	posY = pc.posY ;
	damage = pc.damage ;
	
	name = new char [ strlen ( pc.name ) + 1 ] ;
	strcpy ( name, pc.name ) ;
}

PhotonCannon:: ~PhotonCannon ( void )
{
	cout << "run destructor" << endl;
	if ( name ) 
		delete [ ] name ;
}


void PhotonCannon:: ShowStatus ( void ) 
{
	cout << name << endl ;
	cout << "postion ( " << posX << " , " << posY << " ) " << endl ;
	cout << "HP: " << hp << endl << endl ;	
}


int main ( void ) 
{
	PhotonCannon pc1 ( 3, 3, "Cannon" ) ;
	PhotonCannon pc2 ( pc1 ) ;
	PhotonCannon pc3 = pc2 ; 
	
	pc1.ShowStatus ( ) ;
	pc2.ShowStatus ( ) ;
	pc3.ShowStatus ( ) ; 
	
	return 0 ;
} 


