#include<bits/stdc++.h>
using namespace std;
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_palindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

std::vector<int> generate_palindromic_primes(int n) {
    std::vector<int> palindromic_primes;
    int num = 2;  // Start checking from the first prime number

    while (palindromic_primes.size() < n) {
        if (num == 2 || (num % 2 != 0 && is_prime(num) && is_palindrome(num))) {
            palindromic_primes.push_back(num);
        }
        num += 2; // Check only odd numbers
    }

    return palindromic_primes;
}

void count_digits(const std::vector<int>& primes) {
    int even_digits = 0;
    int odd_digits = 0;

    for (int prime : primes) {
        int num_digits = log10(prime) + 1;

        if (num_digits % 2 == 0) {
            even_digits += num_digits;
        } else {
            odd_digits += num_digits;
        }
    }

    std::cout << even_digits << std::endl;
    std::cout << odd_digits << std::endl;
}

int main() {

    int n;
      // You can replace this with the desired number of palindromic primes
    cin >> n;
    std::vector<int> result = generate_palindromic_primes(n);
    count_digits(result);

    return 0;
}
