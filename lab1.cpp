#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {4, 7, 4, 2, 9, 4}, x, j = 0;
    // cout << "Enter the element ";
    // cin >> x;
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         j++;
    //     }
    // }
    // cout << "The element " << x << " occurs " << j << " times.";

    // char arr[] = {'a','e','i','o','u'}, x;
    // cout << "Enter the character: ";
    // cin >> x;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         cout << "The character " << x << " is found at index " << i;
    //         ;
    //     }
    // }

    // string arr[] = {"Ali", "Sara", "Omar", "Ayesha"}, x;
    // cout << "Enter the name: ";
    // cin >> x;
    // for (int i = 0; i < 4; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         cout << "The name " << x << " is found at index " << i;
    //     }
    // }

    // int arr[] = {4, 7, 4, 2, 9, 4}, x;
    // int indices[10];
    // int count = 0; 

    // cout << "Enter the element: ";
    // cin >> x;

   
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         indices[count] = i;
    //         count++;
    //     }
    // }

    // cout << "Indices where " << x << " is found: ";
    // if (count > 0)
    // {
    //     for (int i = 0; i < count; i++)
    //     {
    //         cout << indices[i];
    //         if (i < count - 1)
    //             cout << ", ";
    //     }
    // }
    // else
    // {
    //     cout << "Element not found";
    // }

    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Element " << x << " found at (" << i << ", " << j << ")\n";
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "Element not found\n";
    }
}