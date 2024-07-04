#pragma once
#include <iostream>
#include "Class1.h"

namespace Danylo {
	class Class3 : public Class1 {
	public:
		void show()const {
			using std::cout;
			cout << "Namespace Danylo: derived class3\n\n";
		}
	};
}