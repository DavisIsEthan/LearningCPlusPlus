#include <cstdio>
#include <cstddef>	

/*
* Definitely me just goofin off with arrays and the like 
* 
* Davis 2021
*/

// Let's make a for loop for no reason

int main() {
	long max = -1000;
	int arr[] = { 0, 1, 2, 3, 72, 9, 12, 9999 };
	for (size_t i = 0; i < 5; i++) {    // I used size_t for i because that is guaranteeed to hold the size of the array 
		if (arr[i] > max) max = arr[i];
	}
	printf("The max value is %d\n", max);

// Let's do it again a different way, instead of using an iterator, we will directly code the iteration over the array values

	int maxmax = -1000;
	int arrtwo[] = { 0, 1, 45426, 42546356, 45636537536, 43653653 };
	for (int value : arrtwo) {
		if (value > maxmax) maxmax = value;
	}
	printf("The maxmax value is %d\n", maxmax);

	short arrtree[] = { 2, 4, 6, 8, 10, 16 };
	size_t numEl = sizeof(arrtree) / sizeof(short);
	printf("Size of array is %d\n", numEl); // Handy trick for determining size of array, happens at compile time
											// so no runtime penalty for doing this

	/*
	* Let's do some stuff with character arrays yeah?
	*/
	char stringboi[] = "Everytime I'm in the street, I hear YAWK YAWK YAWK YAWK";
	printf("%s", stringboi);

	/*
	* Now we bangin with enum classes because that's some real stuff that happens 
	* in C++ I guess idk I just follow the book lol
	*/

	enum class Rapper { 
	    Chainz,
		Drizzy,
		Kendrick,
		JayElectronica,
		JayZ,
		Mac
	};
	Rapper goat = Rapper::Kendrick;

}