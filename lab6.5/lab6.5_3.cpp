#include <iostream>
#include <vector>

std::vector<int> sieve_of_eratosthenes(std::vector<int> list) {
    std::vector<bool> is_prime(list.size(), true);

    for (int i = 2; i * i <= list.back(); ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= list.back(); j += i) {
                is_prime[j] = false;
            }
        }
    }

    std::vector<int> result;
    for (int i : list) {
        if (is_prime[i]) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    std::vector<int> list = {1, 
