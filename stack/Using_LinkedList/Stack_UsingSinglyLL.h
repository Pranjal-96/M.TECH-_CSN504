#include<iostream>
using namespace std;
template < typename T >
    class Node {
        public: T data;
        Node * next;
        Node() {
            data = 0;
            next = NULL;
        }

        Node(T data) {
            this -> data = data;
            this -> next = NULL;
        }
    };
template < typename T >

    class SinglyLinkedList {
        Node < T > * head;
        public:
            void insertionAtEnd(T data) {
                Node < T > * newnode = new Node < T > (data);
                if (head == NULL) {
                    head = newnode;
                    return;
                }
                Node < T > * temp = head;
                while (temp -> next != NULL) {
                    temp = temp -> next;
                }
                temp -> next = newnode;
            }
        void searchElement(T data) {
            Node < T > * temp = head;
            while (temp -> data != data && temp -> next != NULL)
                temp = temp -> next;
            if (temp -> data == data)
                cout << "element present" << endl;
            else
                cout << "element not present" << endl;

        }
        void deleteElement(int data) {
            Node < T > * temp = head;
            Node < T > * previous = NULL;
            while (temp -> data != data && temp -> next != NULL) {
                previous = temp;
                temp = temp -> next;
            }
            if (previous == NULL)
                head = head -> next;
            else if (temp -> data == data)
                previous -> next = temp -> next;
            else
                cout << "element not present" << endl;
        }
        void print() {
            Node < T > * temp = head;
            while (temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
        }
    };
