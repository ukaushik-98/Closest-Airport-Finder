#include <iostream>
#include <string>
#include <cmath>

int math(double d_original, int& indicator, double lat1, double temp_lat, double lon1, double temp_lon) {
	double dlat;
	double dlon;
	double a;
	double c;
	double d;
	double radius; 
	radius = 3959.9;

	dlat = lat1 - temp_lat;
	dlon = lon1 - temp_lon;

	double temp_1;
	double temp_2;

	temp_1 = sin(dlat / 2);
	temp_2 = sin(dlon / 2);

	a = pow(temp_1, 2) + cos(lat1) * cos(temp_lat) * pow(temp_2, 2);
	c = 2 * atan2(sqrt(a), sqrt(1 - a));
	d = radius * c;


	return 0;
}