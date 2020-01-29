/*
 * Jack Cole
 * HW 1
 * AERO 552
 *
 * navigation.cpp
 * 	description
 */

#include <stdio.h>
#include <math.h>

#define R 3440

void fly(double latA, double longA, double latB, double longB) {

	double a = sin((latB - latA)/2)^2 + cos(latA)*cos(latB)*sin((longB - longA)/2)^2;

	double d = 2*R*atan2(sqrt(a), sqrt(1 - a));

	double theta = atan2(sin(longB - longA)*cos(latB), cos(latA)*sin(latB) - sin(latA)*cos(latB)*cos(longA - longB));

	printf("Fly heading %.2f degrees for %.2f nautical miles.\n", theta, d);
}
