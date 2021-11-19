#include <cstdio>
#include <cstddef>

/*
* Me messing around with enum classes and switch statements. 
* Also POD (plain old data) and Union classes
* PODs are simple containers for hetergeneous datasets, Unions stores all members in the same place.
* Davis 2021
*/

enum class Rapper {
	Kendrick,
	JayRock,
	ScHoolboyQ,
	AbSoul,
	JayZ,
	JayElectronica,
	TwoChainz,
	TravisScott
};

struct Song {
	char name[256]; // name of song
	char artist[128]; // performer of song
	int length; // length in seconds
	int grammys; // number of grammys it won
};

struct menace {
	char string[12];
	int integer;
	double floating_boi;
};

union umenace {
	char string[12];
	int integer;
	double floatboi;
};

int main() {
	Rapper rapper = Rapper::ScHoolboyQ  ;

	switch (rapper) {
	case Rapper::Kendrick: {
			printf("Dang, you're the goat!");
		} break;
	case Rapper::ScHoolboyQ:{
		printf("You are so good I love Man of the Year\n");
			}
	}
	Song Headlines;
	Headlines.length = 324;
	printf("Headlines length: %d\n", Headlines.length);
	Headlines.grammys = 99;
	printf("Headlines grammys: %d\n", Headlines.grammys);
	printf("Headlines length: %d\n", Headlines.length);


	/*
	* Try to show difference between union and POD, union will corrupt when written as different type but POD doesn't. n
	*/
	menace m;
	m.integer = 42;
	printf("The answer is %d\n", m.integer);
	m.floating_boi = 69;
	printf("The answer is now %f\n", m.floating_boi);
	printf("The answer is still %d\n", m.integer);
	
	umenace u; 
	u.integer = 42;
	printf("Menace answer: %d\n", u.integer);
	u.floatboi = 69;
	printf("The new menace answer: %f\n", u.floatboi);
	printf("This should be a dumpster fire: %d\n", u.integer);
}