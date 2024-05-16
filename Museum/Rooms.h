#pragma once
#include <iostream>
#include <vector>
#include <string>

class Rooms
{
public:
	Rooms(double lenght, double weight, double height, double wallArea, double numberOfWindows, double numberOfDoors);

private:
	double lenght, weight, height, wallArea, numberOfWindows, numberOfDoors;
};

