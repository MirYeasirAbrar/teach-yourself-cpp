#include <iostream>

int main()
{
    // const keyword - creat constant value
    // can't be modified
    // read only

    const double pi = 3.1419; 
    double radius = 10;
    double circumference = 2*pi*radius;

    std::cout << circumference << " cm" ;

}