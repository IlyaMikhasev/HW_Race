#include "Motorcycle.h"

Motorcycle::Motorcycle():_speed(0),_acceliration(25),_cornering_speed(60), _odometr(0){}

int Motorcycle::Get_Speed() const{
	return _speed;
}

void Motorcycle::Acceleration_speed(const char road_section){
	if (road_section == '+' || road_section == '-')
		_speed = _cornering_speed;
	else
		_speed += _acceliration;
	Distance_traveled();
}

double Motorcycle::Get_odometr() const{
	return _odometr;
}

void Motorcycle::Distance_traveled(){
	_odometr += _speed / 1000.0;
}
