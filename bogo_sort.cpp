#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int> arr)
{
    int n = arr.size();
    while (--n > 1)
        if (arr[n] < arr[n - 1])
            return false;
    return true;
}

void shuffler(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}

void bogo_sorter(vector<int> &unsorted)
{
    while (!isSorted(unsorted))
    {
        shuffler(unsorted, unsorted.size());
    }
}
