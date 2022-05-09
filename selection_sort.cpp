#include <bits/stdc++.h>

using namespace std;

vector<int> selection_sort(vector<int> unsorted, int calculations)
{
    for (int i = 0; i < (unsorted.size() - 1); i++)
    {
        int min = i;
        for (int j = i + 1; j < unsorted.size(); j++)
        {
            if (unsorted[j] < unsorted[min])
            {
                min = j;
            }
        }
        swap(unsorted[min], unsorted[i]);
    }
    return unsorted;
}
