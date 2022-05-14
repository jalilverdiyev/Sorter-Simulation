#include <bits/stdc++.h>

using namespace std;

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

void merge_sort(vector<int> &unsorted, int begin, int end)
{
    if (begin < end)
    {
        int mid = begin + (end - begin) / 2;
        merge_sort(unsorted, begin, mid);
        merge_sort(unsorted, mid + 1, end);
        merge(unsorted, begin, mid, end);
    }
}