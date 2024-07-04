#pragma once
#include <iostream>
#include "Class1.h"

class Outside : public Danylo::Class1 {
public:
	void show()const {
		std::cout << "OutsideClass\n\n";
	}
};