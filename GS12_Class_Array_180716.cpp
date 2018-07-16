#include <iostream>
#include <cstring>

using namespace std ;


class Student 
{
	int age ;
	int studentID ;
	char name [ 10 ] ;
	
	public: 
		Student ( void ) { cout << "Call constructor!!" << endl ; }
		
		~Student ( void ) 
		{ 
			cout << "Call Destructor!!" << endl ;
		}
		
		void ConfigInfo ( const char* fName, int fAge, int fStudentID ) 
		{
			age = fAge ;
			studentID = fStudentID ;
			strcpy ( name, fName ) ;
		}
		
		void GetInfo ( void ) 
		{
			cout << "Name: " << name << endl ;
			cout << "Age: " << age << endl ;
			cout << "StudentID: " << studentID << endl ;
			cout << endl ;
		}
} ;


int main ( void ) 
{
	Student stu [ 5 ] ;
	int age, id ;
	char name [ 10 ] ;
	
	for ( int index = 0; index < 5; index++ ) {
		cin >> name >> age >> id ;
		stu [ index ].ConfigInfo ( name, age, id ) ;
	}
	
	for ( int index = 0; index < 5; index++ ) 
		stu [ index ].GetInfo ( ) ;
	
	return 0 ;
}