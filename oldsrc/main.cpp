#include <iostream>
#include "Class.hpp"

int main() {
    auto _Class = ClassFactory::get(1);
    _Class->run();
    return 0;
}
