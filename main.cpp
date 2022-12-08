/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E9.5
Creates rectangle class
*/

#include <iostream>

class Rectangle {
public:
	Rectangle(double w,double h);
	double get_perimeter() const;
	double get_area() const;
	void resize(double factor);
private:
	double width;
	double height;
};

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
}

double Rectangle::get_perimeter() const {
	return (width * 2) + (height * 2);
}

double Rectangle::get_area() const {
	return height * width;
}

void Rectangle::resize(double factor) {
	height *= factor;
	width *= factor;
}

int main() {
	Rectangle r1 = {3.7, 13.3};
	std::cout << r1.get_area() << std::endl;
	
	return 0;

}
