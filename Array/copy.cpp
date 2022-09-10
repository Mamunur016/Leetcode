#include <iostream>
#include <vector>
#include <algorithm>

void print(auto const &vector)
{
    for (auto i: vector) {
        std::cout << i << ' ';
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> x = { 1, 2, 3 };
    std::vector<int> y = { 4, 5 };

    // 1. Copy constructor + vector::insert

    std::vector<int> v(x);
    v.insert(v.end(), y.begin(), y.end());
    print(v);

    v.clear();  // clear the vector

    // 2. only vector::insert

  ///  v.insert(v.begin(), x.begin(), x.end());
    v.insert(v.end(), y.begin(), y.end());
    print(v);

    return 0;
}
