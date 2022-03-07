#include "Class.hpp"
#include "Classes/Classes.hpp"

Class* ClassFactory::get(int index) {
	switch (index)
	{
	case 1:
	 	return new Class1();
		break;
	
	default:
		return new Class();
		break;
	}
}