#ifndef __MYLIST_H__
#define __MYLIST_H__

struct node_t {
  int count;
  char str[256];
  struct node_t* prev;
  struct node_t* next;
};

/* Create a node (of struct node_t type) that contains a COPY of the
   string given as the argument. Insert the node into the doubly
   linked list at the right location. (All nodes in the linked list
   are sorted in increasing order.) IMPORTANT: In case one inserts a
   string already contained in the list, this function should
   just increment the count variable in the existing node of the list. */
extern void insert(char* str);

/* Print the strings one by one by going through the linked list in
   reverse order (from tail to head). */
extern void rev_list();

#endif /*__MYLIST_H__*/

