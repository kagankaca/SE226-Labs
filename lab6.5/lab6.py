def common_elements(list1, list2):
    return list(set(list1) & set(list2))

def palindrome_strings(str_list):
    return [s for s in str_list if s == s[::-1]]

def prime_numbers(num_list):
    primes = []
    is_prime = [True] * (max(num_list) + 1)
    for i in range(2, int(max(num_list) ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i**2, max(num_list) + 1, i):
                is_prime[j] = False
    for num in num_list:
        if num >= 2 and is_prime[num]:
            primes.append(num)
    return primes

def anagrams(word, word_list):
    sorted_word = sorted(word.lower().replace(" ", ""))
    return [w for w in word_list if sorted(w.lower().replace(" ", "")) == sorted_word and w.lower() != word.lower()]
