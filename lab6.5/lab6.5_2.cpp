#include <iostream>
#include <vector>
#include <algorithm>

bool is_palindrome(const std::string& str) {
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_palindromes(std::vector<std::string> list) {
    std::vector<std::string> result;
    std::copy_if(list.begin(), list.end(), std::back_inserter(result), is_palindrome);
    return result;
}

int main() {
    std::vector<std::string> list = {"abc", "abb", "abba", "racecar", "level"};
    std::vector<std::string> result = filter_palindromes(list);

    for (const std::string& s : result) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}
