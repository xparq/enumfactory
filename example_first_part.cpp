#include "example enum.h"

#include <iostream>
	using namespace std;

int main(int, char**) {
	cout << MyEnum::First << endl;
	cout << GetMyEnumName(MyEnum::First) << endl;

	void f();
	f();
}
