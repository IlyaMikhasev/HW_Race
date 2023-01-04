#pragma once
#include <iostream>
#include <string>
class Motorcycle
	{
	public:
		Motorcycle();
		int Get_Speed()const;
		void Acceleration_speed(const char road_section);
		double Get_odometr()const;
	private:
		void Distance_traveled();
		int _speed;
		int _acceliration;
		int _cornering_speed;
		double _odometr;
	};

