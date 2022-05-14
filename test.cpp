#include <bits/stdc++.h>
#include <windows.h>
#include "sorters.hpp"

using namespace std;

int main()
{
    vector<int> test = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    sorter::merge_sorter(test, distance(test.begin(), test.begin()), distance(test.begin(), test.end()));
    for (int l2 : test)
    {
        cout << l2 << "||";
    }
    cout << endl;
    system("pause");
}