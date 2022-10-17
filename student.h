#include <iostream>

class student{
public:
    student();
    student(const student&);
    student& operator=(const student&);
    student(const student&&);
    student&& operator=(const student&&);
};