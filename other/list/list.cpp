#include <iostream>
using namespace std;
#include"list.h"
#include"node.h"

list::list(void) {
	this->head = NULL;
	this->cnt = 0;
}

bool list::is_list_empty(void) {
	return (this->head == NULL);
}

void list::add_node_at_last_position(node *n)
{
	node *newnode = new node;

	if (is_list_empty())
	{

		this->head=n;

	} else
	{
		node *trav=head;
		while(trav->next!=NULL)
			trav=trav->next;
		trav->next=newnode;
		newnode->next=NULL;
	}
}
void list::display_list(void)
{

 this->head->data.display_record();

}
list::~list(void)
{
	if (!is_list_empty())
	{
		node *trav = this->head;
		delete trav->next;
		trav = trav->next;
	} else
		head = NULL;
}
