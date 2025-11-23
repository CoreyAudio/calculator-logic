#include "calculator.h"
#include <chrono>

int main()
{
	// Timer Start
	//auto start = std::chrono::high_resolution_clock::now();

	calculator c;
	c.ObtainNumbers();
	double f = c.Math();
	if(f != -1)
		std::cout << "\nYour answer is: " << f << '\n';

	// Stop timer
	//auto stop = std::chrono::high_resolution_clock::now();
	// Calculate duration
	//auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	//std::cout << "\nTime taken: " << duration.count() << " microseconds" << std::endl;

	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\nPress Enter to exit...";
	std::cin.get();
	return 0;
}