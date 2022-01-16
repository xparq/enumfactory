#ifndef _enumfactory_h_
#define _enumfactory_h_

#include <string.h>

//
// Single-point-of-entry dispatcher
//
#define DEFINE_ENUM(ENUM_NAME) \
 \
	DEFINE_THE_ENUM_TYPE(ENUM_NAME) \
	DEFINE_ACCESSORS(ENUM_NAME) \

//
// Stuff to build
//
#define DEFINE_THE_ENUM_TYPE(ENUM_NAME) \
  enum ENUM_NAME { \
    ENUM_NAME(__ENUM_VALUE) \
  }; \

#define DEFINE_ACCESSORS(ENUM_NAME) \
  inline const char *Get##ENUM_NAME##Name(ENUM_NAME value) \
  { \
    switch(value) \
    { \
      ENUM_NAME(__ENUM_CASE) \
      default: return ""; /* handle input error */ \
    } \
  } \
  inline ENUM_NAME Get##ENUM_NAME##Value(const char *str) \
  { \
    ENUM_NAME(__ENUM_STRCMP) \
    return (ENUM_NAME)0; /* handle input error */ \
  } \


//
// Internal helpers
//

// expansion macro for enum value definition
#define __ENUM_VALUE(name,assign) name assign,

// expansion macro for enum to string conversion
#define __ENUM_CASE(name,assign) case name: return #name;

// expansion macro for string to enum conversion
#define __ENUM_STRCMP(name,assign) if (!strcmp(str,#name)) return name;


#endif //_enumfactory_h_
