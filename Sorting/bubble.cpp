#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> data = {-2, 45, 0, 11, -9};

    // find array's length
    int size = data.size();

    // loop to access each array element
    for (int step = 0; step < size; ++step)
    {

        // loop to compare array elements
        for (int i = 0; i < size - step; ++i)
        {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (data[i] > data[i + 1])
            {

                // swapping elements if elements
                // are not in the intended order
                int temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }

    cout << "Sorted Array in Ascending Order:\n";

    for (auto x : data)
    {
        cout << x << " ";
    }

    return 0;
}