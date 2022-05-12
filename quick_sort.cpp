#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

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

void quick_sort(vector<int> &unsorted, int start, int end)
{
    if (start < end)
    {
        int pi = partition(unsorted, start, end);

        quick_sort(unsorted, start, pi - 1);
        quick_sort(unsorted, pi + 1, end);
    }
}

int main()
{
    vector<int> test = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};

    quick_sort(test, distance(test.begin(), test.begin()), distance(test.begin(), test.end()));

    for (int a : test)
    {
        cout << a << endl;
    }

    system("pause");
}
