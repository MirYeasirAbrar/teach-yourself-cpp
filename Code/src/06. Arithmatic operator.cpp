/*
order --- parenthesis >> multiplecation & division >> add and sub
*/

#include <iostream>
int main()
{
    int student = 6-5+4*9;

    student = student + 1;
    student++;
    student+=1;

    student = student - 1;
    student --;
    student -= 1;

    student = student * 2;
    student *= 2;

    student = student / 2;
    student /= 2;

    int reminder = student % 3;



    std::cout << student << '\n';
    std::cout << reminder << '\n';

    return 0;
}