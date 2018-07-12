#include <iostream>

#define MONTH 12
#define FEB 28
#define LONGDAY 31
#define SHORTDAY 30
using namespace std ;


// This class is used for date calculations
class MyDate
{
	private:
		int day = 0 ;
		int month = 0 ;
		int year = 0 ;

	public:
		// This function is used for date settings
		// There is no return value 
		// The parameters indicate the year, month, and day values
		void SetDate ( int factorYear, int factorMonth, int factorDay )
		{
			year = factorYear ;
			month = factorMonth ;
			day = factorDay ;
		}
		
		
		// This function is used when adding a year value
		// There is no return value
		// The parameter is the year value to be added
		void AddYear ( int factorYear ) 
		{ 
			year += factorYear ;	
		}

		
		// This function is used when adding a month value
		// There is no return value
		// The parameter is the year value to be added
		void AddMonth ( int factorMonth ) 
		{
			month += factorMonth ;
			
			// If the month value you want to add is more than 12, add a year value
			while ( month > MONTH ) {
				month -= MONTH ;
				AddYear ( 1 ) ;
			}
		}
		
		
		// This function is used when adding a day value
		// There is no return value
		// The parameter is the day value to be added
		void AddDay ( int factorDay ) 
		{
			day += factorDay ;
				
			// If the value of the day to be added exceeds 28
			// It is determined whether the value of that month is added according to that month
      		while ( day > 28 ) {
					
				// February
				if ( month == 2 ) {
					day -= FEB ;
					AddMonth ( 1 ) ;
				}

				// Not added to month value
				else if ( day == 29 ) 
					break ;

				// Month with a date of 31 days
				else if ( ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) && ( day > 31 ) ) {
					day -= LONGDAY ;
					AddMonth ( 1 ) ;
				}
					
				// Month with a date of 30 days
				else if ( month == 4 || month == 6 || month == 9 || month == 11 ) {
					day -= SHORTDAY ;
					AddMonth ( 1 ) ;
				}
					
				else 
					break ;
			}	
		}


		// This function is used to show the current date
		// There is no return value
		// There is no parameter
		void ShowDate ( void ) 
		{
			// The exceeded date is calculated first
			AddMonth ( 0 ) ;
			AddDay ( 0 ) ;
			cout << endl << "Current Date is: " << year << " / " << month << " / " << day << endl ;
		}
} ;


int main ( void ) 
{
	MyDate configDate ;
	int setYear, setMonth, setDay ;
	
	cout << "year?" << endl ;
	cin >> setYear ;

	cout << "month?" << endl ;
	cin >> setMonth ;

	cout << "day?" << endl ;
	cin >> setDay ;

	configDate.SetDate ( setYear, setMonth, setDay ) ;

	configDate.ShowDate ( ) ;

	while ( 1 ) {
		cout << "What would you like to add? ( year = y, month = m, day = d )" << endl ;
		char inputChange ;
		int addTime ;
		cin >> inputChange ;

		while ( 1 ) {
			if ( inputChange == 'y' || inputChange == 'm' || inputChange == 'd' )
				break ;
			cout << "choose between y,m and d keys" << endl ;
			cin >> inputChange ;
		}

		
		switch ( inputChange ) {
			case 'y':
				cout << "enter year to add" << endl ;
				cin >> addTime ;
				configDate.AddYear ( addTime ) ;
	   			break ;

			case 'm':
				cout << "enter month to add" << endl ;
				cin >> addTime ;
				configDate.AddMonth ( addTime ) ;
				break ;

			case 'd':
				cout << "enter day to add" << endl ;
				cin >> addTime ;
				configDate.AddDay ( addTime ) ;
				break;	

		}
		configDate.ShowDate ( ) ;
		cout << endl ;
	}

	return 0 ;
}
