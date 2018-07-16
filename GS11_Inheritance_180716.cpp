#include <iostream>
#include <string.h>

using namespace std ;


class Human 
{
	int age ;
	char name [ 10 ] ;
	char hobby [ 20 ] ;
	
	public:
		Human ( int fAge, const char* fName, const char* fHobby ) 
		{
			age = fAge ;
			strcpy ( name, fName ) ; 
			strcpy ( hobby, fHobby ) ;
		}
	
		void Getup ( void ) 
		{
			cout << "get up" << endl ;
		}
		
		void Sleep ( void )
		{
			cout << "sleep" << endl ;
		}
		
		void Eat ( void )
		{
			cout << "eat" << endl ;
		}
		
		void Study ( void )
		{
			cout << "study" << endl ;
		}
	
		void ShowInfo ( void )
		{
			cout << "name: " << name << endl ;
			cout << "age: " << age << endl ;
			cout << "hobby: " << hobby << endl ;
		}
} ;


class Student: public Human 
{
	char school [ 30 ] ;
	
	public:
		Student ( int fAge, const char* fName, const char* fHobby, const char* fSchool ) : Human ( fAge, fName, fHobby ) 
		{
			strcpy ( school, fSchool ) ;
		}
		
		void SchoolInfo ( void ) 
		{
			ShowInfo ( ) ;
			cout << "school name: " << school << endl ;
		}
} ;


int main ( void ) 
{
	Student stu ( 18, "HongGS", "WeighTrainning", "Gyeyang" ) ;
	
	stu.SchoolInfo ( ) ;
	stu.Getup ( ) ;
	stu.Sleep ( ) ;
	stu.Eat ( ) ;
	stu.Study ( ) ;
	stu.Sleep ( ) ;
	
	return 0 ;
}