#include"Queue_array.h"
int main() {
    Array list;
   int operation;
	int data;
	while(1){
	cout << "Select Operation To Perform on linked list" << endl;
	cout << "1.push" << endl;
	cout << "2.top" << endl;
	cout << "3.pop" << endl;
	cout << "4. Exit" << endl;
	cin >> operation;
	switch(operation){
		case 1 : 
		cout << "enter element to be inserted"<< endl;
		cin >> data;
		list.insert(data);
		list.print();
		cout << endl;
		break;
		case 2: 
		list.searchElement();
		
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
