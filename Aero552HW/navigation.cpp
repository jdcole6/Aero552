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

	if (latA < -90 || latA > 90) {
		printf("Latitude 1 is outside of bounds.");
	}
	if (latB < -90 || latB > 90) {
		printf("Latitude 2 is outside of bounds.");
	}
	if (longA <= -180 || longA > 180) {
		printf("Longitude 1 is outside of bounds.");
	}
	if (longB <= -180 || longB > 180) {
		printf("Longitude 2 is outside of bounds.");
	}

	latA = latA*(M_PI/180);
	latB = latB*(M_PI/180);
	longA = longA*(M_PI/180);
	longB = longB*(M_PI/180);

	double a = pow(sin((latB - latA)/2),2) + cos(latA)*cos(latB)*pow(sin((longB - longA)/2),2);

	double d = 2*R*atan2(sqrt(a), sqrt(1 - a));

	double theta = atan2(sin(longB - longA)*cos(latB), cos(latA)*sin(latB) - sin(latA)*cos(latB)*cos(longA - longB));

	printf("Fly heading %.2f degrees for %.2f nautical miles.\n", theta, d);
}
