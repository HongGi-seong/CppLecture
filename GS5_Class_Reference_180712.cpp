#include <iostream>
using namespace std ;

class Date 
{
	private:
		unsigned int day ;
		unsigned int month ;
		unsigned int year ;
		
	public:
		void SetDate ( unsigned int addYear, unsigned int addMonth, unsigned int addDay ) ;
		void AddYear ( unsigned int addYear ) ;
		void AddMonth ( unsigned int addMonth ) ;
		void AddDay ( unsigned int addDay ) ;
		void ShowDate ( void ) ;
		
	Date ( unsigned int setYear, unsigned int setMonth, unsigned int setDay ) 
	{
		year = setYear ;
		month = setMonth ;
		day = setDay ;
	}
	
	
	Date ( ) 
	{
		year = 2018 ;
		month = 7 ;
		day = 12 ;
	}
} ;


void Date:: SetDate ( unsigned int addYear, unsigned int addMonth, unsigned int addDay ) 
{
	year = addYear ;
	month = addMonth ;
	day = addDay ;
}


void Date:: AddYear ( unsigned int addYear ) 
{
	year += addYear ;
}


void Date:: AddMonth ( unsigned int addMonth ) 
{
	AddYear ( ( month + addMonth - 1 ) / 12 ) ;
	month = month + addMonth % 12 ;
	month = ( month == 12 ? 12 : month % 12 ) ; 
}


void Date:: AddDay ( unsigned int addDay ) 
{
	unsigned int monthDay [ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
	unsigned int monthIndex = month - 1 ;
	
	if ( ( day + addDay ) <= monthDay [ monthIndex ]  ) {
		day += addDay ;
		return ;
	}
	else {
		day += addDay ;
	
		while ( true ) {
			if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
				monthDay [ 1 ] = 29 ;
			else 
				monthDay [ 1 ] = 28 ;
					
			if ( day < monthDay [ monthIndex ] ) 
				break ;
				
			day -= monthDay [ monthIndex ] ;
			AddMonth ( 1 ) ;
			monthIndex = ( monthIndex + 1 ) % 12 ;
		}
	}
}


void Date::ShowDate ( void ) 
{
	cout << "Current date is " << year << " / " << month << " / " << day << endl ;
}



int main ( void ) 
{
	// Date date ( 2017, 7, 12 ) ;
	// Date date = Date ( 2017, 7, 12 ) ;
	// date.SetDate ( 2017,7,12 ) ;
	Date date ;
	Date date2 ( 2018, 7, 25 ) ;
	date.ShowDate ( ) ;
	
	// date.AddYear ( 10 ) ;
	// date.AddMonth ( 6 ) ;
	date2.ShowDate ( ) ;
	return 0 ;
}