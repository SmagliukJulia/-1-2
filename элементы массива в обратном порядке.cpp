#include <iostream>
#include <algorithm>

int main()
{
    int* Arr;
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;
    Arr = new int[N];
    for (int i = 0; i < N; ++i)
        std::cin >> Arr[i];
    std::reverse_copy(Arr, Arr + N, std::ostream_iterator<int>(std::cout, " "));
    delete[] Arr;
    return 0;
}