#include <iostream>
#include <cmath>

int main() {
	double x, y1, y2;

	std::cout << "Введіть значення x: ";
	std::cin >> x;


	std::cout << "Ви ввели: " << x << std::endl;

	
	if (fabs(x + 1) == 0) {
		std::cout << "Помилка: Ділення на нуль у atan." << std::endl;
		return 1; 
	}

	
	y1 = (x <= -3.5) ? (tan(2 * x) - tan(x / 2)) :
		(x > 1) ? (pow(x, -5) - 1) :
		(8.1 * pow(x, 3) + atan(1 / fabs(x + 1)));

	
	if (x <= -3.5) {
		y2 = tan(2 * x) - tan(x / 2);
	}
	else if (x > 1) {
		y2 = pow(x, -5) - 1;
	}
	else {
		y2 = 8.1 * pow(x, 3) + atan(1 / fabs(x + 1));
	}

	
	std::cout << "Результат за допомогою скороченої форми: y1 = " << y1 << std::endl;
	std::cout << "Результат за допомогою повної форми: y2 = " << y2 << std::endl;

	std::cout << "Натисніть Enter для виходу." << std::endl;
	std::cin.ignore(); 
	std::cin.get(); 
	return 0;
}