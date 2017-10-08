#include <iostream>
#include <string>

int printer(int& c, std::string airport, double lat, std::string lat_dir, double lon, std::string lon_dir) {
	int* pointer_c = &c;
	if (*pointer_c == 0) {
		std::cout <<"Starting Location: " << lat << lat_dir << " " << lon << lon_dir << " " << "(" << airport << ")" << std::endl;

		*pointer_c = *pointer_c + 1;
	}

	else if (*pointer_c == 1) {
		std::cout << "Closest Location: " << lat << lat_dir << " " << lon << lon_dir << " " << "(" << airport << ")" << std::endl;

		*pointer_c = *pointer_c + 1;
	}

	else {
		std::cout << "Farthest Location: " << lat << lat_dir << " " << lon << lon_dir << " " << "(" << airport << ")" << std::endl;
	}
	return 0; 
}