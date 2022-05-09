#include <bits/stdc++.h>

using namespace std;

vector<int> bubble_sort(vector<int> v, int calculations)
{
    int iterations = 0;

    while (iterations < calculations)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
            }
        }
        iterations++;
    }
    return v;
}

int main()
{

    int calc;
    vector<int> test = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    cout << "Calculations: ";
    cin >> calc;
    vector<int> last = bubble_sort(test, calc);

    for (int t : test)
    {
        cout << t << "||";
    }
    cout << endl;

    for (int l : last)
    {
        cout << l << "||";
    }

    cout << endl;
}