#include <iostream>
#include "queue.cpp"

using namespace std;

int main() {

	queue<int> q;
	char choice;
	int value;

	do {
		cout << "e - enqueue\nd - dequeue\ni - isEmpty\nE - empty\nQ - Quit\n\n";
		cin >> choice;
		switch (choice) {
		case 'e':
			cout << "Enter a value: ";
			cin >> value;
			q.enqueue(value);
			break;
		case 'd':
			cout << q.dequeue() << endl;
			break;
		case 'i':
			if (q.isEmpty())
				cout << "Empty\n";
			else
				cout << "Still items in queue\n";
			break;
		case 'E':
			q.empty();
			break;
		case 'Q':
			continue;
		default:
			cout << "Enter a valid command\n";
		}
	} while (choice != 'Q');

	return 0;
}