//Singly Linked List Methods(All the methods are not in this code but some common methods are).
//This is singly Linked list is designed to work with only INTEGER values means a Node can store only INTEGER data in this list.
//If you Enter any Character and Floating point digit then you will see a run time error.
//Errors and Bugs are Possible.
//If found any(Error/Bugs) then let me know and try to debug.
//The Below code is executed successfully on Microsoft Visual Studio 2017 with Nodes having INTEGER VALUES.
//There are better and efficient ways of doing below code but it depends on how better and efficient you think! 
//If you find any better and efficient way than this then surely, you must go for that efficient and better way.
//Happy Coding!!!
//Enjoy the code!!!

#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	//constructor
	Node(int d, Node *n = NULL) {
		data = d;
		next = n;
	}
};
class SLinkedList {
private:
	Node *head;
	Node *tail;
public:
	//Constructor
	SLinkedList() {
		head = tail = NULL;
	}
	bool isEmpty();
	void addToHead(int i);
	void addToTail(int i);
	void displayList();
	void deleteFromHead();
	void deleteFromTail();
	bool isInList(int key);
	void deleteSingleValueFromList(int key);
	bool isSorted();
	void sortList();
	int countDuplicate(int key);
	bool exchange(int a, int b);
	void middleLinkedList();
	void removeDuplicate();
	void reverseList();
	void sortedInsert(int value);
	//Destructor.
	~SLinkedList();
};

//Function to check whether linked list is empty or not.
bool SLinkedList::isEmpty() {
	if (head == NULL)
		return true;
	else
		return false;
}

//Function to add a Node at head (works with only INTEGER data)
void SLinkedList::addToHead(int i) {
	if (head == NULL)
		head = tail = new Node(i);
	else {
		Node *temp = new Node(i);
		temp->next = head;
		head = temp;
	}
}

//Function to add a Node at tail (works with only INTEGER data)
void SLinkedList::addToTail(int i) {
	if (head == NULL)
		head = tail = new Node(i);
	else {
		Node *temp = new Node(i);
		tail->next = temp;
		tail = temp;
	}
}

//Function to display the complete Linked List
void SLinkedList::displayList() {
	if (head == NULL)
		cout << "Invalid: List is Empty" << endl;
	else {
		Node *temp = head;
		cout << "List is: ";
		while (temp != NULL) {
			cout << temp->data << "  ";
			temp = temp->next;
		}
		cout << endl;
	}
	
}

//Function to delete a Node from head
void SLinkedList::deleteFromHead() {
	if (head == NULL) {
		cout << "Invalid: Empty List. Can't delete" << endl;
	}
	else if (head == tail)
		head = tail = NULL;
	else {
		Node *temp = head;
		head = head->next;
		delete temp;
	}
}

//Function to delete a Node from tail
void SLinkedList::deleteFromTail() {
	if (head == NULL) {
		cout << "Invalid: Empty List. Can't delete" << endl;
	}
	else if (head == tail)
		head = tail = NULL;
	else {
		Node *temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		tail->next = NULL;
	}
}

//Function to find whether given value/node is in list or not
bool SLinkedList::isInList(int key) {
	if (head == NULL)
		cout << "Invalid: Empty List. Can't find" << endl;
	else {
		Node *temp = head;
		while (temp != NULL) {
			if (temp->data == key) {
				return true;;
			}
			temp = temp->next;
		}
		return false;
	}
}

//Destructor 
SLinkedList::~SLinkedList() {
	if (isEmpty())
		cout << "Invalid: Empty List. Can't Destroy" << endl;
	else {
		cout << "Destructor is called !!!!" << endl;
		Node *temp = head;
		while (temp != NULL) {
			head = head->next;
			delete temp;
			temp = head;
		}
		head = NULL;
	}
}

//Function to delete a value from list. It will delete only single occurance of that value.
void SLinkedList::deleteSingleValueFromList(int key) {
	if (isEmpty())
		cout << "Invalid : Empty List . Can't Delete!!" << endl;
	else if (head->data == key)
		deleteFromHead();
	else if (tail->data == key)
		deleteFromTail();
	else {
		Node *temp;
		Node *temp1;
		temp = head;
		temp1 = head->next;
		while (temp1->data!=key) {
			temp1 = temp1->next;
			temp = temp->next;
		}
		temp->next = temp1->next;
		delete temp1;
	}
}

//Function to check whether a list is sorted in Ascending Order or Not
bool SLinkedList::isSorted() {
	Node *i, *j;
	int flag = 0;
	for (i = head; i->next != NULL; i = i->next) {
		for (j = i->next; j != NULL; j = j->next) {
			if (i->data > j->data) {
				flag++;
			}
		}
	}
	if (flag == 0)
		return true;
	else
		return false;
}

//Function to sort a list
//Here we are applying Bubble Sort
//It will sort in Ascending Order
void SLinkedList::sortList() {
	Node *i, *j;
	int temp;
	for (i = head; i->next != NULL; i = i->next) {
		for (j = i->next; j != NULL; j = j->next) {
			if (i->data > j->data) {
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
		}
	}
}

//Function to count duplicate nodes of given value
int SLinkedList::countDuplicate(int key) {
	int count = 0;
	if (isEmpty())
		cout << "Invalid!! Empty List. Can't count duplicate!" << endl;
	else if (head == tail)
		cout << "There is only one Node! Can't count duplicate!" << endl;
	else {
		Node *temp;
		temp = head;
		while (temp != NULL) {
			if (temp->data == key)
				count++;
			temp = temp->next;
		}
		if (count == 0)
			cout << key << " not found in list!!!" << endl;
		else if (count == 1)
			cout << "There is no duplicate of Node having value: " << key << endl;
		else
			cout << "There are " << count-1 << " duplicate of Node having value: " << key << endl;
	}
	return count;
}

//Function to swap two nodes in Linked List
bool SLinkedList::exchange(int a, int b) {
	if (head == tail) {
		cout << "Invalid!! Only one Node. Can't Exchange!" << endl;
		return false;
	}
		else {
		Node *temp = head;
		Node *temp1 = head;
		while (temp->data != a) {
			temp = temp->next;
		}
		while (temp1->data != b) {
			temp1 = temp1->next;
		}
		int temporary;
		temporary = temp->data;
		temp->data = temp1->data;
		temp1->data = temporary;
		cout << "Nodes Exchanged!!" << endl;
	}
	return true;
}

//Function that finds middle of a Linked List
//It gives exact middle if the total number of nodes are odd. If total no. of nodes are even then it doesn't give exact middle.
void SLinkedList::middleLinkedList() {
	if (isEmpty())
		cout << "Invalid!! Empty List. Can't find Middle!!" << endl;
	else if (head == tail)
		cout << "Invalid!! Only one Node. Can't find Middle!!" << endl;
	else {
		int count = 0;
		Node *temp = head;
		while (temp != NULL) {
			count++;
			temp = temp->next;
		}
		if (count == 2)
			cout << "Invalid!! Only Two Nodes. Can't find Middle!!" << endl;
		else {
			int middle = count / 2;
			middle = middle + 1;
			temp = head;
			while (middle > 1) {
				temp = temp->next;
				middle--;
			}
			cout << "Middle is: " << temp->data << endl;
		}
	}
}

//Function to reverse a Linked List
// e.g; if list is:      12   5   7   1   0   6
//then after reversing:  6    0   1   7   5   12
void SLinkedList::reverseList() {
	if (isEmpty())
		cout << "Invalid!! Empty List. Can't Reverse!!" << endl;
	else if (head == tail)
		cout << "Invalid!! Only one Node. Can't Reverese!!" << endl;
	else {
		Node *current;
		Node *prev;
		Node *next; //don't confuse it with with the next pointer of Node class.
		current = head;
		prev = NULL;
		next = NULL;
		while (current != NULL) {
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;
		cout << "List is Reversed !!" << endl;
	}
}

//Function that removes duplicates from a Linked List
//e.g; if list is:                23   24   23   45   39   45   78   45   90
//then after removing duplicates: 23   24   45   39   78   90
//so you saw that it removes duplicates
void SLinkedList::removeDuplicate() {
	if (isEmpty()) {
		cout << "Invalid: Empty List. Can't Remove Duplicate!!" << endl;
		return;
	}
	else if (head == tail) {
		cout << "Invalid: Only one Node. Can't Remove Duplicate!!" << endl;
		return;
	}
	else {
		bool check = false;
		Node *ptr1, *ptr2, *dup;
		ptr1 = head;
		while (ptr1 != NULL && ptr1->next != NULL) {
			ptr2 = ptr1;
			//compare the elements one by one
			while (ptr2->next != NULL) {
				//if duplicate then delete that duplicate value
				if (ptr1->data == ptr2->next->data) {
					check = true;
					dup = ptr2->next;
					ptr2->next = ptr2->next->next;
					delete dup;
				}
				else
					ptr2 = ptr2->next;
			}
			ptr1 = ptr1->next;
		}
		if (check == true)
			cout << "Duplicate Nodes Deleted!!" << endl;
		else
			cout << "Can't find any Duplicate Node !!" << endl;
	}
}

//Function to Insert a Node in Sorted Linked List(Ascending Order).
//e.g; if the list is:    4   7   9   10 
//and if you wanna insert 8 then it inserts at:
//                        4   7   8   9   10
void SLinkedList::sortedInsert(int val) {
	if (isEmpty()) {
		head = tail = new Node(val);
		cout << "Value inserted!!" << endl;
		return;
	}
	else if (head == tail) {
		if (val > head->data)
			addToTail(val);
		else
			addToHead(val);
		cout << "Value inserted" << endl;
		return;
	}
	else {
		if (val < head->data)
			addToHead(val);
		else if (val > tail->data)
			addToTail(val);
		else {
			Node *temp, *temp1;
			temp = head;
			temp1 = head->next;
			while (temp1 != NULL && temp->next!=NULL) {
				if (val > temp->data && val < temp1->data) {
					Node *ptr = new Node(val);
					temp->next = ptr;
					ptr->next = temp1;
				}
				temp = temp->next;
				temp1 = temp1->next;
			}
		}

	}
	cout << "Value inserted" << endl;
}



//The purpose of this function is to display below data on console.
void display() {
	cout << "\n\t";
	cout << "The data you want to store in Linked List must be in INTEGER form!" << "\n\n";
	cout << "\t\tSelect Your Option:" << endl;
	cout << "\t\t===================\n" << endl;
	cout << "1. Check List is Empty Or Not" << endl;
	cout << "2. Add a Node at Head" << endl;
	cout << "3. Add a Node at Tail" << endl;
	cout << "4. Display List" << endl;
	cout << "5. Delete a Node From Head" << endl;
	cout << "6. Delete a Node From Tail" << endl;
	cout << "7. To Check Given value is in List or Not" << endl;
	cout << "8. Destroy the Complete List" << endl;
	cout << "9. Delete a value from list(single occurance of given value)" << endl;
	cout << "10.Whether a Linked List is sorted(Ascending Order) or not" << endl;
	cout << "11.Sort a Linked List(Ascending Order)" << endl;
	cout << "12.Count the node having duplicate values" << endl;
	cout << "13.Exchange two nodes in List" << endl;
	cout << "14.Find Middle of Linked List" << endl;
	cout << "15.Reverse Linked List" << endl;
	cout << "16.Remove Duplicates from a Linked List" << endl;
	cout << "17.Add a node in Sorted Manner in a Sorted Linked List" << endl;
	
}

//main function
int main() {
	//object of singly Linked list class.
	SLinkedList s;
	bool exit = true;
	int option;
	int num;
	
	do {
		system("CLS");
		display();
		cout << "\n";
		cin >> option;
		if (option >= 1 && option <= 17) {
			switch (option) {
			case 1: {
				if (s.isEmpty())
					cout << "List is Empty" << "\n";
				else
					cout << "List is not Empty" << "\n";
				break;
			}
			case 2: {
				cout << "Enter value to be inserted:";
				cin >> num;
				s.addToHead(num);
				cout << "Node Inserted!!" << endl;
				s.displayList();
				break;
			}
			case 3: {
				cout << "Enter value to be inserted:";
				cin >> num;
				s.addToTail(num);
				cout << "Node Inserted!!" << endl;
				s.displayList();
				break;
			}
			case 4: {
				s.displayList();
				break;			}
			case 5: {
				if (s.isEmpty()) {
					s.deleteFromHead();
				}
				else {
					s.deleteFromHead();
					cout << "Head Node deleted!" << endl;
				}
				break;
			}
			case 6: {
				if (s.isEmpty()) {
					s.deleteFromTail();
				}
				else {
					s.deleteFromTail();
					cout << "Tail Node deleted!" << endl;
				}
				break;
			}
			case 7: {
				cout << "Enter the value to find:";
				cin >> num;
				if (s.isInList(num) == true) {
					cout << "Value Founded" << endl;
				}
				else {
					cout << "Value not founded" << endl;
				}
				break;
			}
			case 8: {
				if (s.isEmpty()) {
					s.~SLinkedList();
				}
				else
				{
					s.~SLinkedList();
					cout << "Complete list Destroyed!!" << endl;
				}
				break;
			}
			case 9: {
				cout << "Enter the value to be deleted:";
				cin >> num;
				if (s.isInList(num) == true) {
					s.deleteSingleValueFromList(num);
					cout << "Value Deleted!" << endl;
				}
				else {
					cout << "Invalid: Value is not in List!" << endl;
				}
				break;
			}
			case 10: {
				if (s.isEmpty())
					cout << "Invalid: Empty List . Can't Sort!!" << endl;
				else {
					if (s.isSorted() == true)
						cout << "List is Sorted" << endl;
					else
						cout << "List is not Sorted" << endl;
				}
				break;
			}
			case 11: {
				if (s.isEmpty())
					cout << "Invalid! Empty List. Can't Sort" << endl;
				else {
					s.sortList();
					cout << "List is Sorted!!" << endl;
					s.displayList();
				}
				break;
			}
			case 12: {
				int key;
				cout << "Enter value whose duplicate you wanna find???";
				cin >> key;
				s.countDuplicate(key);
			    break;
			}
			case 13: {
				if (s.isEmpty())
				cout << "Invalid!! Empty List. Can't Exchange!" << endl;
				else {
					int a, b;
					cout << "Enter first Node:";
					cin >> a;
					cout << "Enter second Node:";
					cin >> b;
					s.exchange(a, b);
				}
				break;
			}
			case 14: {
				s.middleLinkedList();
				break;
			}
			case 15: {
				s.reverseList();
				break;
			}
			case 16: {
				s.removeDuplicate();
				break;
			}
			case 17: {
				if (!s.isEmpty()) {
					s.sortList();
					int val;
					cout << "Enter value to insert:";
					cin >> val;
					s.sortedInsert(val);
				}
				break;
			}
			default: {
				break;
			}

			}
		}
		else {
			cout << "Invalid Option Selected!!!" << endl;
             }
			char choice;
		here:
			cout << "Do you want to continue?  (y / n):";
			cin >> choice;
			if (choice != 'n' && choice != 'N' && choice != 'y' && choice !='Y' ) {
				cout << "Invalid choice!" << endl;
				cout << "Please Select 'y' for yes and 'n' for no" << endl;
				goto here;
			}
			else if (choice == 'n' || choice == 'N')
				exit = false;
		} while (exit);
	

	system("pause");
	return 0;
}
