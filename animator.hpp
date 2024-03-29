#include <bits/stdc++.h>
#include <cmath>
namespace animator
{
    using namespace std;
    void animate(vector<int> arr)
    {
        string top_left_corner(arr.size(), '*');
        string top(arr.size(), '*');
        string top_right_corner(arr.size(), '*');
        string mid_left(arr.size(), '*');
        string mid_right(arr.size(), '*');
        string bottom_left_corner(arr.size(), '*');
        string bottom(arr.size(), '*');
        string bottom_right_corner(arr.size(), '*');

        for (int i = 0; i < arr.size(); i++)
        {
            cout << top_left_corner[i];
            if (int(log10(arr[i]) + 1) > 1)
            {
                for (int j = 0; j < (int(log10(arr[i])) + int(log10(arr[i]) + 1)); j++)
                {
                    cout << top[i];
                }
            }
            else
            {
                cout << top[i] << top[i];
            }
            cout << top_right_corner[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << mid_left[i] << arr[i];
            if (int(log10(arr[i]) + 1) > 1)
            {
                for (int j = 0; j < (int(log10(arr[i]))); j++)
                {
                    cout << " ";
                }
            }
            else
            {
                cout << " ";
            }
            cout << mid_right[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << bottom_left_corner[i];
            if (int(log10(arr[i]) + 1) > 1)
            {
                for (int j = 0; j < (int(log10(arr[i])) + int(log10(arr[i]) + 1)); j++)
                {
                    cout << bottom[i];
                }
            }
            else
            {
                cout << bottom[i] << bottom[i];
            }
            cout << bottom_right_corner[i] << " ";
        }
        cout << endl;
    }
}