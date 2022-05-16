#include <bits/stdc++.h>
#include <windows.h>
#include "sorters.hpp"

using namespace std;

int main()
{
    vector<int> test = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    sorter::bubble_sorter(test);
    cout << endl;
    system("pause");
}