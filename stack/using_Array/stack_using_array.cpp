#include <iostream>
#include"array.h"
int main() {
    Array arr;
   int operation;
	int data;
	while(1){
	cout << "Select Operation To Perform on array" << endl;
	cout << "1.push" << endl;
	cout << "2.top" << endl;
	cout << "3.pop" << endl;
	cout << "4. Exit" << endl;
	cin >> operation;
	switch(operation){
		case 1 : 
		cout << "enter element to be inserted"<< endl;
		cin >> data;
		arr.insert(data);
		arr.print();
		cout << endl;
		break;
		case 2: 
		arr.searchElement();
		
		cout << endl;
		break;
		case 3:
		arr.deleteElement();
		arr.print();
		cout << endl;
		break;
		case 4:
		return 0;
	}
	}
}
