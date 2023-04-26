#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> intersection(std::vector<int> list1, std::vector<int> list2) {
    std::vector<int> result;
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());
    std::set_intersection(list1.begin(), list1.end(),
                          list2.begin(), list2.end(),
                          std::back_inserter(result));
    return result;
}

int main() {
    std::vector<int> list1 = {1, 2, 3, 4, 5};
    std::vector<int> list2 = {3, 4, 5, 6, 7};
    std::vector<int> result = intersection(list1, list2);

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
