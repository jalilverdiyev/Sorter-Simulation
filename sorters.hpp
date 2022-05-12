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

    namespace
    {
        int partition(vector<int> &unsorted, int start, int end)
        {
            int pivot = unsorted[end];

            int i = (start - 1);

            for (int j = start; j <= end - 1; j++)
            {
                if (unsorted[j] < pivot)
                {
                    i++;
                    swap(unsorted[i], unsorted[j]);
                }
            }
            swap(unsorted[i + 1], unsorted[end]);
            return (i + 1);
        }
    }

    void quick_sort(vector<int> &unsorted, int start, int end)
    {
        if (start < end)
        {
            int pi = partition(unsorted, start, end);

            quick_sort(unsorted, start, pi - 1);
            quick_sort(unsorted, pi + 1, end);
        }
    }
}
