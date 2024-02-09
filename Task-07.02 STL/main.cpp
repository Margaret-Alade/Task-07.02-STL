//
//  main.cpp
//  Task-07.02 STL
//
//  Created by Маргарет  on 09.02.2024.
//

#include <iostream>
#include <set>
int main(int argc, const char * argv[]) {
    std::cout << "[IN_SIZE]: ";
    int size, num;
    std::cin >> size;
    std::set<int, std::greater <int>> set_n;
    std::cout << "[IN_ELEMENTS]: ";
    for (int i = 0; i < size; i++) {
        std::cin >> num;
        set_n.insert(num);
    }
    std::cout << "[OUT]:\n";
    for (const auto& elem : set_n) {
        std::cout << elem << "\n";
    }
    
    
    return 0;
}
