#include "Car.h"

Car::Car() :_speed(0), _acceliration(15), _cornering_speed(90), _odometr(0) {}

int Car::Get_Speed() const{
	return _speed;
}

void Car::Acceleration_speed(const char road_section){
	if (road_section == '+' || road_section == '-')
		_speed = _cornering_speed;
	else
		_speed += _acceliration;
	Distance_traveled();
}

double Car::Get_odometr() const{
	return _odometr;
}

void Car::Distance_traveled(){
	_odometr += _speed / 1000.0;
}
