#include <bits/stdc++.h>
#include <windows.h>
#include "sorters.hpp"

using namespace std;

int main()
{
    vector<int> test = {400, 5500, 380, 5};
    int start_index = 0, end_index = (test.size() - 1);
    sorter::quick_sorter(test, start_index, end_index);
    cout << endl;
    system("pause");
}
