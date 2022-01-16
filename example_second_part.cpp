#include "example enum.h"
#include "example enum 2.h"

#include <iostream>
	using namespace std;

void f() {
	cout << GetMyEnumValue("SomeOther") << endl;
	cout << GetMyEnumName(MyEnum::OneMore) << endl;

	cout << GetEnum2Value("one") << endl;
	cout << GetEnum2Name(Enum2::two) << endl;
}
