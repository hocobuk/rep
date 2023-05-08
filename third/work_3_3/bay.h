#include <iostream>
#include <vector>
#include <string>
#include "water.h"

using namespace std;

class Bay : public WaterArea
{
private:
	vector<WaterArea> parent_water_areas;

public:
	Bay();
	Bay(string in_name, string in_location, double in_area, double in_size);
	Bay(string in_name, string in_location, double in_area, double in_size, WaterArea parent_object);
	Bay(string in_name, string in_location, double in_area, double in_size, vector<WaterArea> parent_objects);

	vector<WaterArea> get_parents();

	void add_parent(WaterArea parent_object);
	void add_parents(std::vector<WaterArea> parent_objects);
};