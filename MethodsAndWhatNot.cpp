/*
* First time messing with methods and encapsulation. Should be a good time.
* Encapsulation is the process of putting data and functions that manipulate the data together. 
*/

#include <cstdio>

struct ClockoftheLongNever { /* create a clock that can have years added, but will not hold a year before 2020
							 *  add a function that returns the year stored in the clock
							 */ 
	void add_year(){
		year++;
	}
	bool set_year(int new_year){
		if (new_year < 2020) return false;
		year = new_year;
		return true;
	}
	int get_year(){
		return year;
	}
private:
	int year;
};

int main() {
	ClockoftheLongNever clock;
	if (!clock.set_year(2018)) { // this will fail since 2018 < 2020
		clock.set_year(2021);	 // this works because 2021>2020
	}
	printf("year: %d\n", clock.get_year());
	clock.add_year();
	printf("year: %d\n", clock.get_year());
	// it works! finis laboras
}