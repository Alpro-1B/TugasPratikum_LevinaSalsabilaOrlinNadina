#include <iostream>
using namespace std;

int main

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void print_odd_even_primes(int limit) {
    std::vector<int> odd_numbers;
    std::vector<int> even_numbers;
    std::vector<int> prime_numbers;

    for (int num = 1; num <= limit; num++) {
        if (num % 2 == 0) {
            even_numbers.push_back(num);
        } else {
            odd_numbers.push_back(num);
        }

        if (is_prime(num)) {
            prime_numbers.push_back(num);
        }
    }

    std::cout << "Bilangan Ganjil: ";
    for (int odd : odd_numbers) {
        std::cout << odd << " ";
    }
    std::cout << std::endl;

    std::cout << "Bilangan Genap: ";
    for (int even : even_numbers) {
        std::cout << even << " ";
    }
    std::cout << std::endl;

    std::cout << "Bilangan Prima: ";
    for (int prime : prime_numbers) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    int odd_sum = 0;
    int even_sum = 0;
    int prime_sum = 0;

    for (int odd : odd_numbers) {
        odd_sum += odd;
    }
    for (int even : even_numbers) {
        even_sum += even;
    }
    for (int prime : prime_numbers) {
        prime_sum += prime;
    }

    std::cout << "Jumlah Bilangan Ganjil: " << odd_numbers.size() << std::endl;
    std::cout << "Jumlah Bilangan Genap: " << even_numbers.size() << std::endl;
    std::cout << "Jumlah Bilangan Prima: " << prime_numbers.size() << std::endl;

    std::cout << "Jumlah Faktor Bilangan Ganjil: " << odd_sum << std::endl;
    std::cout << "Jumlah Faktor Bilangan Genap: " << even_sum << std::endl;
    std::cout << "Jumlah Faktor Bilangan Prima: " << prime_sum << std::endl;
}

int main() {
    int limit;
    std::cout << "Masukkan batas bilangan: ";
    std::cin >> limit;

    print_odd_even_primes(limit);

    return 0;
}
