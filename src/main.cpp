#include <iostream>
#include <iomanip>
#include <cmath>
#include "circle_area.hpp"
#include "triangle_area.hpp"

using namespace std;

int main()
{
	//	Pairs of X and Y
	pair<float, float> a;
	pair<float, float> b;
	pair<float, float> c;

	char choose;
	float radius;
	float area;
	//	Menu
	while (true) {
		cout << "triangle - t, circle - c\n> ";
		cin >> choose;
		if (choose == 't') {
			cout << "Enter pairs of (x,y) coordinates\nfirst pair > ";
			cin >> a.first >> a.second;
			cout << "\nsecond pair > ";
			cin >> b.first >> b.second;
			cout << "\nthird pair > ";
			cin >> c.first >> c.second;
			area = triangleArea(a,b,c);
			break;
		}
		if (choose == 'c') {
			cout << "Enter radius of circle\n";
			cin >> radius;
			area = circleArea(radius);
			break;
		}
		system("cls");
	}
	//	Output
	if (choose == 'c') {
		cout << "Circle area = ";
	}
	else {
		cout << "Triangle area = ";
	}
	cout << fixed << setprecision(2) << area << endl;
	system("pause");
}