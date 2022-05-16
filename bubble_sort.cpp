#include <bits/stdc++.h>

using namespace std;

vector<int> bubble_sort(vector<int> unsorted, int i)
{
    int pos = i;
    for (int j = i + 1; j < unsorted.size(); j++)
    {
        if (unsorted[pos] > unsorted[j])
        {
            swap(unsorted[pos], unsorted[j]);
        }
    }
    return unsorted;
}
