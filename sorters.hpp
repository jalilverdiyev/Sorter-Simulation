
namespace sorter
{
#include <bits/stdc++.h>
    using namespace std;
    namespace
    {
        int partitions(vector<int> &unsorted, int start, int end)
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
        void merge(vector<int> &arr, int left, int mid, int right)
        {
            int len1 = mid - left + 1;
            int len2 = right - mid;

            vector<int> leftarr, rightarr;

            for (int i = 0; i < len1; i++)
            {
                leftarr.push_back(arr[left + i]);
            }
            for (int j = 0; j < len2; j++)
            {
                rightarr.push_back(arr[mid + 1 + j]);
            }

            int i = 0, j = 0, k = left;
            while (i < len1 && j < len2)
            {
                if (leftarr[i] <= rightarr[j])
                {
                    arr[k] = leftarr[i];
                    i++;
                }
                else
                {
                    arr[k] = rightarr[j];
                    j++;
                }
                k++;
            }
            while (i < len1)
            {
                arr[k] = leftarr[i];
                i++;
                k++;
            }
            while (j < len2)
            {
                arr[k] = rightarr[j];
                j++;
                k++;
            }
        }
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
    }
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

    void quick_sorter(vector<int> &unsorted, int start, int end)
    {
        if (start < end)
        {
            int pi = partitions(unsorted, start, end);

            quick_sorter(unsorted, start, pi - 1);
            quick_sorter(unsorted, pi + 1, end);
        }
    }

    void merge_sorter(vector<int> &unsorted, int begin, int end)
    {
        if (begin < end)
        {
            int mid = begin + (end - begin) / 2;
            merge_sorter(unsorted, begin, mid);
            merge_sorter(unsorted, mid + 1, end);
            merge(unsorted, begin, mid, end);
        }
    }
    void bogo(vector<int> &unsorted) // Use it for small arrays otherwise you will have to wait more
    {
        while (!isSorted(unsorted))
        {
            shuffler(unsorted, unsorted.size());
        }
    }
}
