/*
        cout << (insertion operator)
        cin >> (extraction operator)
*/

#include <iostream>
#include <string>
int main()
{
    std::string name;
    int age;

    std::cout << "Enter Age : " ;
    std::cin >> age;
    std::cout << "Enter Name : " ;
    std::getline(std::cin >> std::ws, name);



    std::cout << "Welcome sir! - " << name << '\n';
    std::cout << "You are " << age << '\n';

    return 0;
}