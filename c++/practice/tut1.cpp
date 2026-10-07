#include <iostream>
#include <vector>

int main() {
    // A 2D vector with 3 rows and 4 columns
    std::vector<std::vector<int>> jaggedMatrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
for (size_t i = 0; i < jaggedMatrix.size(); ++i) {
    // Dynamically gets the size of the CURRENT row 'i'
    size_t current_row_cols = jaggedMatrix[i].size(); 
    
    std::cout << "Row " << i << " has " << current_row_cols << " elements: ";
    
    for (size_t j = 0; j < jaggedMatrix[i].size(); ++j) {
        std::cout << jaggedMatrix[i][j] << " ";
    }
    std::cout << "\n";
}


    return 0;
}
