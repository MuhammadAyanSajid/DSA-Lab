#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main()
{
    // int arr[5] = {12, 5, 7, 6, 2};
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // int n = 7;
    // int arr[n] = {4, 2, 7, 2, 4, 9, 1};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0 || arr[i] != arr[i - 1])
    //     {
    //         cout << arr[i] << endl;
    //     }
    // }

    // int n = 8;
    // int ages[n] = {18, 25, 15, 30, 22, 40, 10, 28};
    // for (int i = 0; i < n; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (ages[j] < ages[minIndex])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     int temp = ages[i];
    //     ages[i] = ages[minIndex];
    //     ages[minIndex] = temp;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ages[i] << " ";
    // }

    // int n = 7;
    // int salaries[n] = {35000, 50000, 25000, 40000, 60000, 30000, 45000};
    // for (int i = 0; i < n; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (salaries[j] < salaries[minIndex])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     int temp = salaries[i];
    //     salaries[i] = salaries[minIndex];
    //     salaries[minIndex] = temp;
    // }
    // cout << salaries[n-2];

    // int n = 7;
    // int arr[n] = {12, 4, 7, 9, 2, 15, 10};
    // for (int i = 1; i < n; i++)
    // {
    //     int key = arr[i], j = i - 1;
    //     while (j >= 0 && arr[j] > key)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = key;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // Student students[] = {
    //     {"Ali", 85},
    //     {"Sara", 92},
    //     {"Omar", 75},
    //     {"Hassan", 90}
    // };
    // int nStudents = 4;

    // for (int i = 0; i < nStudents - 1; i++) {
    //     for (int j = 0; j < nStudents - i - 1; j++) {
    //         if (students[j].marks < students[j + 1].marks) {
    //             Student tmp = students[j];
    //             students[j] = students[j + 1];
    //             students[j + 1] = tmp;
    //         }
    //     }
    // }

    // for (int i = 0; i < nStudents; i++) {
    //     cout << students[i].name << " " << students[i].marks << "\n";
    // }

    string s = "ali goes to school and sara goes to market";
    string word;
    string wordsArr[50];
    int count = 0;
    
    for (int i = 0; i <= (int)s.length(); ++i) {
        if (i == (int)s.length() || s[i] == ' ') {
            if (word.length() > 0) {
                wordsArr[count++] = word;
                word.clear();
            }
        } else {
            word += s[i];
        }
    }

    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (wordsArr[j] > wordsArr[j + 1]) {
                string tmp = wordsArr[j];
                wordsArr[j] = wordsArr[j + 1];
                wordsArr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < count; ++i) {
        if (i) cout << ' ';
        cout << wordsArr[i];
    }
    cout << "\n";
}