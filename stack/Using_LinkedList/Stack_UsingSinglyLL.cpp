#include<iostream>
#include"Stack_UsingSinglyLL.h"
int main() {
    SinglyLinkedList < int > list;
    int operation;
    int data;
    while (1) {
        cout << "Select Operation To Perform on linked list" << endl;
        cout << "1.Insert" << endl;
        cout << "2.Search" << endl;
        cout << "3.Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> operation;
        switch (operation) {
        case 1:
            cout << "enter element to be inserted" << endl;
            cin >> data;
            list.insertionAtEnd(data);
            list.print();
            cout << endl;
            break;
        case 2:
            cout << "enter element to be searched" << endl;
            cin >> data;
            list.searchElement(data);
            list.print();
            cout << endl;
            break;
        case 3:
            cout << "enter element to be deleted" << endl;
            cin >> data;
            list.deleteElement(data);
            list.print();
            cout << endl;
            break;
        case 4:
            return 0;
        }
    }
}
