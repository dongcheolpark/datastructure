#pragma once
#include "../Class.hpp"

class Class1 : public Class {
public:
	Class1() : Class() {}
	virtual void run(); 
};

class Class2 : public Class {
public:
	Class2() : Class() {}
	virtual void run(); 
};