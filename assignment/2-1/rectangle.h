#pragma once

class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle() : width(0),height(0) {}
	Rectangle(int width,int height) {
		this->width = width > 0 ? width : 0;
		this->height = height > 0 ? height : 0;
	}
	int area();
	int perimeter();
};