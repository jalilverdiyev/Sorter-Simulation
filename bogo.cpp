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

void bogo(vector<int> &unsorted)
{
    while (!isSorted(unsorted))
    {
        shuffler(unsorted, unsorted.size());
    }
}

int main()
{
    vector<int> test = {3, 2, 5, 1, 0, 4};
    bogo(test);
    for (int l2 : test)
    {
        cout << l2 << "||";
    }
    cout << endl;
    system("pause");
}