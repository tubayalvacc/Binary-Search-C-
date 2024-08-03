#include <iostream> // Include the iostream library to use input/output streams

int main() {
    int arraySize, i, searchValue, firstIndex, lastIndex, middleIndex, array[100];

    // Prompt the user to enter the size of the array
    std::cout << "\nEnter the array size: ";
    std::cin >> arraySize; // Read the size of the array from user input

    // Prompt the user to enter the elements of the array
    std::cout << "\nEnter the array elements: ";
    for(i = 0; i < arraySize; i++) {
        std::cin >> array[i]; // Read each element into the array
    }

    // Prompt the user to enter the value they want to search for
    std::cout << "\nEnter a value to search: ";
    std::cin >> searchValue; // Read the search value from user input

    firstIndex = 0; // Initialize the first index of the array
    lastIndex = arraySize - 1; // Initialize the last index of the array
    middleIndex = (firstIndex + lastIndex) / 2; // Calculate the middle index

    // Perform binary search
    while (firstIndex <= lastIndex) {
        // Check if the middle element is less than the search value
        if(array[middleIndex] < searchValue) {
            firstIndex = middleIndex + 1; // Update the first index to narrow the search
        }
            // Check if the middle element is equal to the search value
        else if (array[middleIndex] == searchValue) {
            std::cout << "\nKey element is found at location " << middleIndex + 1 << "\n"; // Print the location
            break; // Exit the loop as the value is found
        }
            // Check if the middle element is greater than the search value
        else {
            lastIndex = middleIndex - 1; // Update the last index to narrow the search
        }
        middleIndex = (firstIndex + lastIndex) / 2; // Recalculate the middle index
    }

    // If the first index exceeds the last index, the search value is not found
    if(firstIndex > lastIndex) {
        std::cout << "\nKey element is not found!"; // Print that the value is not found
    }

    std::cin.get(); // Wait for a key press before exiting
    return 0; // Return 0 to indicate successful execution
}

/*Explanation of Variable Names:
arraySize: Holds the size of the array.
searchValue: The value to search for in the array.
firstIndex: The starting index for the binary search.
lastIndex: The ending index for the binary search.
middleIndex: The middle index used in the binary search.
array: The array that holds the elements. */
