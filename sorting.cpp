#include <iostream>
#include <vector>
#include <algorithm> // Required for the sort function

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {9, 5, 3, 8, 6};

    // Display the original vector
    std::cout << "Original array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Display the sorted vector
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}