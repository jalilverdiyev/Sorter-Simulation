#include <iostream>
#include <vector>
using namespace std;
//!!!!ToDo:Calculations sayini hesablayacaq linear funksiya tap!!!!!
int main()
{
    int temp, count, entered, calculations, iter = 0, i = 0;
    vector<int> arr;
    cout << "Enter number of calculations you want: ";
    cin >> calculations;
    cout << "How many numbers in list? ";
    cin >> count;
    cout << "Give unsorted numbers" << endl;
    for (int j = 0; j < count; j++)
    {
        cin >> entered;
        arr.push_back(entered);
    }
    while (iter < calculations)
    {
        if (i == arr.size())
        {
            i = 0;
        }
        if (arr[i] > arr[i + 1])
        {
            cout << "|||" << i << "|||" << endl;
            vector<int>::reference a1 = arr[i];
            vector<int>::reference a2 = arr[i + 1];
            swap(a1, a2);
        }
        i++;
        iter++;
    }
    for (int number : arr)
    {
        cout << number << endl;
    }
    system("pause");
    return 0;
}
