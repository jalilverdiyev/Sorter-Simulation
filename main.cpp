#include <bits/stdc++.h>
#include <windows.h>
#include "sorters.hpp"

using namespace std;

int main();

void about()
{
    char choice;
    cout << "This program is created by Jalil Verdiyev, student of Khazar University.\nProgram has 5 sorting algorithms like:\n1.Bubble sort\n2.Selection sort\n3.Quick sort\n4.Merge sort\n5.Bogo sort(just for fun)" << endl;
    cout << "To return back enter 'r' or to leave enter 'l': ";
    cin >> choice;
    switch (tolower(choice))
    {
    case 'r':
        main();
        break;
    case 'l':
        break;
    default:
        cout << "Err wrong input" << endl;
        about();
        break;
    }
}
void sort()
{
    vector<int> unsorted;
    int entered, choice;
    char again;
    cout << "Enter the array of unsorted integers(enter 0 to stop entering)" << endl;
    cin >> entered;
    while (entered != 0)
    {
        unsorted.push_back(entered);
        cin >> entered;
    }
algorithm_choose:
{
    int start = 0, end = unsorted.size() - 1;
    vector<int> tobe_sorted = unsorted;
    cout << "Choose your sorter algorithm:\n1.Bubble sort\n2.Selection sort\n3.Quick sort\n4.Merge sort\n5.Bogo sort(only if you entered small size array)\n:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        sorter::bubble_sorter(tobe_sorted);
        break;
    case 2:
        sorter::selection_sorter(tobe_sorted);
        break;
    case 3:
        sorter::quick_sorter(tobe_sorted, start, end);
        break;
    case 4:
        sorter::merge_sorter(tobe_sorted, start, end);
        break;
    case 5:
        sorter::bogo_sorter(tobe_sorted);
        for(int i=0;i<unsorted.size();i++)
        {
            cout<<unsorted[i]<<endl;
        }
        break;
    default:
        cout << "Wrong input choose correct" << endl;
        Sleep(300);
        system("cls");
        goto algorithm_choose;
        break;
    }
}
    cout << "Do you want another session?(y\\n): ";
    cin >> again;
    switch (tolower(again))
    {
    case 'y':
        Sleep(300);
        system("cls");
        goto algorithm_choose;
        break;
    case 'n':
        char choicee;
        cout << "To return back enter 'r' or to leave enter 'l': ";
        cin >> choicee;
        switch (tolower(choicee))
        {        case 'r':
            main();
            break;
        case 'l':
            break;
        default:
            cout << "Err wrong input" << endl;
            break;
        }
        break;
    default:
        break;
    }
}

int main()
{
    int f_choice;
    system("cls");
    cout << "<<<<<<<<<<<<<<<<<<Welcome To Sorter Program>>>>>>>>>>>>>>>>>>" << endl;
    cout << "Main menu:\n1->About\n2->Sort" << endl;
    cin >> f_choice;
    switch (f_choice)
    {
    case 1:
        Sleep(500);
        system("cls");
        about();
        break;
    case 2:
        Sleep(500);
        system("cls");
        sort();
        break;
    default:
        cout << "Wrong input!!" << endl;
        main();
        break;
    }
}