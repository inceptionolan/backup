/*
 * list.h
 *
 *  Created on: 29-Sep-2019
 *      Author: Rohit
 */

#ifndef LIST_H_
#define LIST_H_

#include"node.h"
class list
{
private:
	node *head;
	int cnt;
public:
	list();
	bool is_list_empty(void);
	void add_node_at_last_position(node *per);
	void display_list(void);
	~list(void);
	friend class node;
	friend class employee;

};


#endif /* LIST_H_ */
