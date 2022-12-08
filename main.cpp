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
	int get_perimeter() const;
	int get_area() const;
	void resize(double factor);
private:
	double width;
	double height;
};

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
}

int Rectangle::get_perimeter() const {
	return (width * 2) + (height * 2);
}

int Rectangle::get_area() const {
	return height * width;
}

void Rectangle::resize(double factor) {
	height *= factor;
	width *= factor;
}
