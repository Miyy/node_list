using namespace std;

class node
{
	public:
		int* content;
		node* next_element;
		node()
		{
			content = new int;
			next_element = new node;
		}
};

class node_list
{
	public:
		node* head;
		node* tail;
		node* current_element;
		
		node_list()
		{
			head = &node();
			tail = &node();
			current_element = &node();
		}
		
		*head.next_element = nullptr;
		*tail.next_element = nullptr;
		
		void add(int content)
		{
			node* new_element = new node;
			*new_element.content = content;
			new_element.next_element = nullptr;
			if(head == nullptr)
				head = new_element;
			else
			{
				*current_element.next_element = new_element;
				current_element = new_element;
			}
		}
};
