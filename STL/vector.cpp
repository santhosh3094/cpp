#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {10, 20, 30};

    // Add elements to the end
    numbers.push_back(40);
    numbers.push_back(50);

    // Access elements just like a normal array
    std::cout << "First element: " << numbers[0] << std::endl; // 10
    std::cout << "Size of vector: " << numbers.size() << std::endl; // 5
    
    return 0;
}
