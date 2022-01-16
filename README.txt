Based on: https://stackoverflow.com/a/202511/1479945 (by @Suma)

This one compiles on a piece of wood (unlike e.g. the finicky magic_enum.hpp),
it's just plain C. And requires basically nothing (unlike e.g. Debdatta Basu's
stringizer, that can't even do more than that). Nice.
(Examples test-compiled cleanly with c++11, c++17.)


Changes to the original:

- Added the missing string.h.
- Renamed getname to be consistent with its pair.
- Eliminated the use of DEFINE_ENUM in the cpps.
- Eliminated DECLARE_ENUM altogether.
- Reversed the arg order of DEFINE_ENUM to be more natural
  when calling the X macro sg. like <my enumtype>_DEF.
  - But I don't like it better this way after all. :)
- Added include guards.
- Also applied pmttavara's great suggestion: https://stackoverflow.com/questions/147267/easy-way-to-use-variables-of-enum-types-as-string-in-c/202511#comment83003525_202511
  - So, no more "which arg order" dilemma! :)
- Refactored to be more self-describing.

TODO:

- Test/add enum class support.
- Test/add enum-in-a-class support.
  -> Can't do either implicitly. Would require shifting to C++;
     either -> enumfactory.hpp, or enumfactory++.h
