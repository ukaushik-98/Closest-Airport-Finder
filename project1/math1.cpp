#include <iostream>
#include <string>
#include <cmath>


int math1(double& d_original, double& d_comp, int& indicator, double lat1, double temp_lat, double lon1, double temp_lon) {
	double dlat;
	double dlon;
	double a;
	double c;
	double d;
	double radius;
	radius = 3959.9;

	int* ind = &indicator;
	double* d_o = &d_original;
	double* d_c = &d_comp;

	dlat = temp_lat - lat1;
	dlon = temp_lon - lon1;

	a = pow(sin(dlat / 2.0), 2.0) + cos(lat1) * cos(temp_lat) * pow(sin(dlon / 2.0), 2.0);
	c = 2 * atan2(sqrt(a), sqrt(1 - a));
	d = radius * c;

	std::cout << d << std::endl;
	std::cout << *d_o << std::endl;

	if (d > *d_o) {
		*ind = 2;
		*d_o = d;
	}

	else if (d <= *d_o) {
		if (d < *d_c) {
			*d_c = d;
			indicator = 1;
		}
	}

	return 0;
}