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
        //	Node<T>* tops=NULL;
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
        void searchElement() {
            Node < T > * temp = head;
            while (temp -> next != NULL) {
                temp = temp -> next;
            }
            cout << temp -> data << endl;

        }
        void deleteElement() {
           
            if (head -> next == NULL) {
                cout << "Stack empty";
                head = NULL;
                exit(0);
            }
            head=head->next;
        }
        void print() {
            Node < T > * temp = head;
            while (temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
        }
    };
