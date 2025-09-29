// Complete Guide to C++ Programming Foundations
// Challenge 04_11
// Vector Manipulation, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>

std::vector<int> SelectKeyPoints(std::vector<int> distances, int checkpointIndex){
    std::vector<int> result;

    // Write your code here
    result.push_back(distances[0]);
    /*
    OR
    result.push_back(*distances.begin());
    */
    result .push_back(distances[checkpointIndex]);
    result.push_back(distances[distances.size() - 1]);
    /*
    OR 
    result.push_back(distances.back());
    */
    
    return result;
}

int main(){
    std::vector<int> distances = {10, 20, 30, 40, 50};
    int checkpointIndex = 2;

    std::vector<int> learnerResult = SelectKeyPoints(distances, checkpointIndex);
    std::cout << "Your code returned: { ";
    auto vectPtr = learnerResult.begin();
    while (vectPtr != learnerResult.end()){
        std::cout << *vectPtr << " ";
        vectPtr = next(vectPtr, 1);
    }
    std::cout << "}" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
