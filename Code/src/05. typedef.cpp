/*

typedef - reserved keyword used to creat an additional name (alias) for another data type
new identifier for an existing type
helps with readibility and reduces types

*/

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int n_t;

using text_t = std::string;
using n_t = int;
int main()
{
   // pairlist_t pairlist;

    text_t firstName = "Abrar";
    n_t age = 21;


    std::cout << firstName << '\n';
    std::cout << "My age is " << age << '\n';


    return 0;
}