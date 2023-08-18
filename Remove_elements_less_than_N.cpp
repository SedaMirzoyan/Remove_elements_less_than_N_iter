
#include <iostream>
#include <list>
#include <vector>
#include <set>


unsigned int n = 23;


bool lessThanN(unsigned int num)
{
    return num < n;
}

void removeFromList(std::list<int> l)
{
    std::list<int>::iterator it;
	
	l.remove_if(lessThanN); //case #1//  -5, 23, 34, 45, 56, 67, 78, 23, 89, -8, 94, 101, 23
    
	remove_if(l.begin(), l.end(), lessThanN); //case #2// 23, 34, 45, 56, 67, 78, 23, 89, 94, 101, 23 , 89, 3, -8, 94, 101, 23, 3


    for ( it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}


int main()
{
    std::list<int> l{ 11,-5, 2, 3, 23,34,45,56,67,78, 23, 89, 3,-8, 94, 101, 23, 3 };
    removeFromList(l);


    return 0;
}
