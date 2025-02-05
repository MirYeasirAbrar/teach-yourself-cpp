    // namespace - prevents name conflicts
    // namespace uses for similar names in larger project
    // ' :: ' --- scope resulation operator

#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}
int main()
{
    /* using namespace first;

    //int x = 0;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x ; */ 

    /* using namespace std;

    int x = 0;

    cout << x << '\n';
    cout << first::x << '\n';
    cout << second::x ; */

    using std::cout; // safer

    int x = 0;

    cout << x << '\n';
    cout << first::x << '\n';
    cout << second::x ;

    return 0;
}