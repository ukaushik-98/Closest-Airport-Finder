#include <iostream>
#include <string>
#include "math1.hpp"
#include "printer.hpp"

int main() {
	int c = 0;

	double lat1;
	std::string lat1_dir;
	double lon1;
	std::string lon1_dir;
	std::string airport;

	double closest_lat = 0;
	std::string closest_lat_dir;
	double closest_lon = 0;
	std::string closest_lon_dir;
	std::string closest_airport;

	double farthest_lat = 0;
	std::string farthest_lat_dir;
	double farthest_lon = 0;
	std::string farthest_lon_dir;
	std::string farthest_airport;

	std::cin >> lon1 >> lon1_dir >> lat1 >> lat1_dir;
	std::cin.ignore(1);
	std::getline(std::cin, airport);

	int n;
	std::cin >> n;

	double temp_lat = 0;
	std::string temp_lat_dir;
	double temp_lon = 0;
	std::string temp_lon_dir;
	std::string temp_airport;

	double d_original;
	d_original = 0;
	double d_comp;
	d_comp = 10000;

	for (int i = 0; i < n; i++) {
		std::cin >> temp_lon >> temp_lon_dir >> temp_lat >> temp_lat_dir;
		std::cin.ignore(1);
		std::getline(std::cin, temp_airport);

		int indicator;
		indicator = 0;

		math1(d_original, d_comp, indicator, lat1, temp_lat, lon1, temp_lon);

		if (indicator == 2) {
			closest_lat = temp_lat;
			closest_lat_dir = temp_lat_dir;
			closest_lon = temp_lon;
			closest_lon_dir = temp_lon_dir;
			closest_airport = temp_airport;
		}

		else if (indicator == 1) {
			farthest_lat = temp_lat;
			farthest_lat_dir = temp_lat_dir;
			farthest_lon = temp_lon;
			farthest_lon_dir = temp_lon_dir;
			farthest_airport = temp_airport;
		}

	}

	printer(c, airport, lat1, lat1_dir, lon1, lon1_dir);
	printer(c, closest_airport, closest_lat, closest_lat_dir, closest_lon, closest_lon_dir);
	printer(c, farthest_airport, farthest_lat, farthest_lat_dir, farthest_lon, farthest_lon_dir);


	system("pause");
	return 0;
}