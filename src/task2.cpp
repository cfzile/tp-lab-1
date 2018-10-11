#include <task2.h>

bool checkPrime (unsigned long long value) {

    if (value == 1)
        return false;

    for (unsigned long long i = 2; i * i <= value; i++)
        if (value % i == 0)
            return false;

    return true;

}

vector<unsigned> primes;

void findPrimes (unsigned max){

    bool was[INF + 1];

    unsigned i = 2;

    while (primes.size() < max){

        if (!was[i]){

            for (unsigned j = i * i; j <= INF; j += i)
                was[j] = true;

            primes.push_back(i);

        }

        i++;

    }

}

unsigned long long nPrime (unsigned n) {

    if (primes.size() < n)
        findPrimes (n);

    return primes[n - 1];

}

unsigned long long nextPrime (unsigned long long value) {

    do {
        value++;
    } while (!checkPrime(value));

    return value;

}