
#include <iostream>
#include <list>
#include <vector>
#include <set>

int n = 23;

void removeFromList(std::list<int> l)   // #68
{
    std::list<int>::iterator it;

    for (it = l.begin(); it != l.end(); )
    {
        if (*it < n)
        {
            it = l.erase(it);
        }
        else
        {
            ++it;
        }
    }

    for (it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << " ";
    }
}


void removeFromVec(std::vector<int> vec)    // #69
{
    std::vector<int>::iterator it;

    for (it = vec.begin(); it != vec.end(); )
    {
        if (*it < n)
        {
            it = vec.erase(it);
        }
        else
        {
            ++it;
        }
    }

    for (it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
}


void removeFromSet(std::set<int> s)    // #70
{
    std::set<int>::iterator it;

    for (it = s.begin(); it != s.end(); )
    {
        if (*it < n)
        {
            it = s.erase(it);
        }
        else
        {
            ++it;
        }
    }

    for (it = s.begin(); it != s.end(); ++it)
    {
        std::cout << *it << " ";
    }
}


int main()
{
    //List
    std::cout << "List elements\n";
    std::list<int> l{ 11,-5, 2, 3, 23,34,45,56,67,78, 23, 89, 3,-8, 94, 101, 23, 3 };
    removeFromList(l);
    std::cout << std::endl;

    //Vector
    std::cout << "Vector elements\n"; 
    std::vector<int> vec{ 3,-21, 567, -1, 23, 98, 105, -21, 73, 104, 23 };
    removeFromVec(vec);
    std::cout << std::endl;

    //Set
    std::cout << "Set elements\n";
    std::set<int> s{ 53,41, -21, 512, -10, 23, 98, 0, 105, 712, 194, 15, 7, 45 };
    removeFromSet(s);
    std::cout << std::endl;

    return 0;
}
