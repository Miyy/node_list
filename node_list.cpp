#include <cstddef>
#include <iostream>

using namespace std;

class node
{
	public:
		int* content; //  content of the node
		node* next_node; //  pointer to the next node
		node() //  constructor
		{
			content = new int; //  dynamic memory allocation for int
			//next_node = new node; //  same for node class
		}
};

class node_list
{
	public:
		node* head; //  the starting point of the list, points to the very first node of the list
		node* tail; //  unnecessary pointer that always equals nullptr
		node* current_node; //  pointer to the current node
		
		node_list() //  constructor
		{
			head = new node();
			tail = new node();
			current_node = new node();
			
			(*head).next_node = NULL; //  setting the next node pointer to nullptr
			(*tail).next_node = NULL; //  optional
		}
		
		/**head.next_node = nullptr; //  setting the next node pointer to nullptr
		*tail.next_node = nullptr; //  optional*/
		
		void add(int content) //  add a node function
		{
			//node* new_node = &node(); //  creating a new node
			node* new_node = new node;
			*(*new_node).content = content; //  setting the given value
			(*new_node).next_node = tail; //  optional
			(*current_node).next_node = new_node; //  setting the previous node attribute
			if(head == NULL)
				head = new_node; //  setting the head pointer
			current_node = new_node; //  changing to the next node
		}
};

int main()
{
	node_list mylist;
	int myvar;
	
	cin >> myvar;
	mylist.add(myvar);
	cout << *((*mylist.head).content);
	
	return 0;
}
