namespace sorter
{
#include <bits/stdc++.h>
    using namespace std;

    vector<int> bubble_sorter(vector<int> unsorted)
    {
        for (int i = 0; i < unsorted.size() - 1; i++)
        {
            int pos = i;
            for (int j = i + 1; j < unsorted.size(); j++)
            {
                if (unsorted[pos] > unsorted[j])
                {
                    swap(unsorted[pos], unsorted[j]);
                }
            }
        }
        return unsorted;
    }

    vector<int> selection_sorter(vector<int> unsorted)
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

}
