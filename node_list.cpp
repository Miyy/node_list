#include <cstddef>
#include <iostream>

using namespace std;

class node
{
	public:
		int* content; //  content of the node
		node* next_node; //  pointer to the next node
		
		node() //  constructor
			content = new int; //  dynamic memory allocation for int
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
		
		void add(int content) //  add a node function
		{
			node* new_node = new node; //  creating a new node
			
			*((*new_node).content) = content; //  setting the given value
			(*new_node).next_node = tail; //  optional
			
			(*current_node).next_node = new_node; //  setting the previous node attribute
			
			if((*head).next_node == NULL)
				(*head).next_node = new_node; //  setting the head pointer
			current_node = new_node; //  changing to the next node
		}
		
		node get(int index) //  get a node function
		{	
			node* needed_node = new node; //  allocating an auxiliar node
			needed_node = (*head).next_node; //  setting the starting point
			
			for(int i = 0; i < index; i++) //  going through all the nodes until one is that we need
				needed_node = (*needed_node).next_node;
				
			return *(needed_node); //  return the asked node
		}
};

int main()
{
	
	
	return 0;
}
