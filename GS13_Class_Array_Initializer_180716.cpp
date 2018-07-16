#include <iostream>
#include <cstring>

using namespace std ;


class Student 
{
	int age ;
	int studentId ;
	char name [ 10 ] ;
	
	public:
		Student ( const char *fName, int fAge, int fStudentId ): age ( fAge ), studentId ( fStudentId ) 
		{
			strcpy ( name, fName ) ;
		}
		
		void GetInfo ( void ) 
		{
			cout << "Name: " << name << endl ;
			cout << "Age: " << age << endl ;
			cout << "Student ID: " << studentId << endl << endl ;
		}
} ;


int main ( void )
{
	Student* stu [ 3 ] ;
	char name [ 10 ] ;
	int age, id ;
	
	for ( unsigned int index = 0; index < 3; index++ ) 
	{
		cin >> name >> age >> id ;
		stu [ index ] = new Student ( name, age, id ) ;
	}
	
	for ( unsigned int index = 0; index < 3; index++ )
		stu [ index ] -> GetInfo ( ) ;
	
	for ( unsigned int index = 0; index < 3; index++ ) 
		delete stu [ index ] ;

	return 0 ;
}

