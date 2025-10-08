#include <iostream> 
using namespace std;

class ArrayList {
private:
    int* data;
    int size;
    int capacity;

public:
    ArrayList(int cap = 5) {
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }
    
    ~ArrayList() {
        delete[] data;
    }
    
    void add(int value) {
        if (size == capacity) {
            cout << "List is full\n";
            resize();
        }
        data[size++] = value;
    }
    
    void insert(int index, int value) {
        if (index < 0 || index > size) {
            cout << "Invalid index\n";
            return;
        }
        if (size == capacity) resize();

        for (int i = size; i > index; i--)
            data[i] = data[i - 1];
        data[index] = value;
        size++;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index\n";
            return;
        }
        for (int i = index; i < size - 1; i++)
            data[i] = data[i + 1];
        size--;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index\n";
            return -1;
        }
        return data[index];
    }

    void print() {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
    
    void resize() {
        int newCap = capacity * 2;
        int* newData = new int[newCap];
        for (int i = 0; i < size; i++)
            newData[i] = data[i];
        delete[] data;
        data = newData;
        capacity = newCap;
    }
    
    int getSize() {
        return size;
    }
    
    int countEven() {
        int even = 0;
        for (int i = 0; i < size; i++) {
            if (data[i] % 2 == 0) {
                even++;
            }
        }
        return even;
    }
    
    int countOdd() {
        int odd = 0;
        for (int i = 0; i < size; i++) {
            if (data[i] % 2 != 0) {
                odd++;
            }
        }
        return odd;
    }
};

int main() {
    ArrayList list;
    int choice, value;
    
    
    cout << "No of elemnts: ";
    cin >> choice;
    
    cout << "Enter " << choice << " integers:" << endl;
    for (int i = 0; i < choice; i++) {
        cin >> value;
        list.add(value);
    }
    
    cout << "\nYour numbers: ";
    list.print();
    
    int evenCount = list.countEven();
    int oddCount = list.countOdd();
    
    cout << "\nResults:" << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    
    return 0;
}