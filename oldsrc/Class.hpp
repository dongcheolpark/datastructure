#pragma once

class Class {
public:
	virtual void run() {return;}
};

class ClassFactory {
public:
	static Class* get(int); 
};