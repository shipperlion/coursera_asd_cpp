#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long MaxPairwiseProduct(int* numbers, const int size) {
    long long max_product = 0;
    int n = size;
    long long first = 0;
    int t1 = 0;
    long long second = 0;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] > first)
        {
            first = numbers[i];
            t1 = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == t1)
            continue;
        else
        {
            if (numbers[i] > second)
                second = numbers[i];
        }
    }

    max_product = first * second;

    return max_product;
}

int main() {
    int n;
    cin >> n;
    int* numbers = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    cout << MaxPairwiseProduct(numbers, n) << "\n";
    return 0;
}