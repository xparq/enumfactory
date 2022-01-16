#line 1 "somenum.cpp"
#line 1 "D:\\szabi\\prj-workarea\\flexfs\\current\\study\\lang\\enumfactory\\somenum.h"
#line 1 "D:\\szabi\\prj-workarea\\flexfs\\current\\study\\lang\\enumfactory\\enumFactory.h"
































#line 2 "D:\\szabi\\prj-workarea\\flexfs\\current\\study\\lang\\enumfactory\\somenum.h"






enum SomeEnum { FirstValue , SecondValue , SomeOtherValue =50, OneMoreValue =100, }; const char *GetString(SomeEnum dummy); SomeEnum GetSomeEnumValue(const char *string);
#line 2 "somenum.cpp"
const char *GetString(SomeEnum value) { 
switch(value) { 
	case FirstValue: return "FirstValue";
	case SecondValue: return "SecondValue";
	case SomeOtherValue: return "SomeOtherValue";
	case OneMoreValue: return "OneMoreValue";
	default: return ""; 
}
}

SomeEnum GetSomeEnumValue(const char *str) {
	if (!strcmp(str,"FirstValue")) return FirstValue;
	if (!strcmp(str,"SecondValue")) return SecondValue;
	if (!strcmp(str,"SomeOtherValue")) return SomeOtherValue;
	if (!strcmp(str,"OneMoreValue")) return OneMoreValue;
	return (SomeEnum)0; 
}
