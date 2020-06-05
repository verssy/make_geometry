#include <iostream>

float triangleArea(std::pair<float, float> a, std::pair<float, float> b, std::pair<float, float> c)
{
	system("cls");
	float area;
	area = 0.5 * abs((b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second));
	return area;
}