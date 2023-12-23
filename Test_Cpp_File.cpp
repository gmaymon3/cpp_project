#include <iostream>
#include <list>

int main() 
{
    // Create a vector of integers
    std::list<int> numbers = {1, 2, 3, 4, 5,6,300,23};

    // Use a range-based for loop to iterate over the elements
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
