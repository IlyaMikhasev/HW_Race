#include <iostream>
#include "Car.h"
#include "Motorcycle.h"
double Race(Car& car, Motorcycle& moto, std::string& track) {
	char section;
	for (size_t i = 0; i < track.size(); i++){
		section = track[i];
		car.Acceleration_speed(section);
		moto.Acceleration_speed(section);
	}
	if (car.Get_odometr() > moto.Get_odometr()) {
		std::cout << "Car is winner!" << std::endl;
		return car.Get_odometr();
	}
	else if (car.Get_odometr() == moto.Get_odometr()) {
			std::cout << "DRAW" << std::endl;
			return car.Get_odometr();
	}
	else {
		std::cout << "Motorcycle is winner!" << std::endl;
		return moto.Get_odometr();
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	std::string track1 = ("======+===-+-===++===++-===+=");
	std::string track2 = ("==========-+====-===++-========");
	Car car;
	Motorcycle moto;
	std::cout << "\tRace against time\n";
	std::cout << "Distance traveled = " << Race(car, moto, track1) << std::endl;
	std::cout << "\n===========================================================\n";
	std::cout << "\tRace against time ¹2\n";
	std::cout << "Distance traveled = " << Race(car, moto, track2) << std::endl;



	return 0;
}