#include"Queue_SinglyLL.h"
int main() {
    SinglyLinkedList < int > list;
    int operation;
    int data;
    while (1) {
        cout << "Select Operation To Perform on Stack" << endl;
        cout << "1.enqueue" << endl;
        cout << "2.Top" << endl;
        cout << "3.dequeue" << endl;
        cout << "4. Exit" << endl;
        cin >> operation;
        switch (operation) {
        case 1:
            cout << "enter element to be push" << endl;
            cin >> data;
            list.insertionAtEnd(data);
            list.print();
            cout << endl;
            break;
        case 2:
            list.searchElement();
            list.print();
            cout << endl;
            break;
        case 3:
            list.deleteElement();
            list.print();
            cout << endl;
            break;
        case 4:
            return 0;
        }
    }
}
