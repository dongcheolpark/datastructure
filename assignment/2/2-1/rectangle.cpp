#include "rectangle.h"

int Rectangle::area() {
	return width*height;
}

int Rectangle::perimeter() {
	return width*2+height*2;	
}