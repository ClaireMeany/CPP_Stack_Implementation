/*
Programmer: Claire Meany
Assignment 1
IT 279
Description:
  Header file for Stack using a linked list
*/

#include "NodeData.h"

struct Node{
  NodeData data;
  struct Node* next;
};

class Stack{
  private:
    Node *head, *tail;
    int size;
  public:
    //default constructor
    Stack();
    //copy constructor
    Stack(const Stack& stk);
    //destructor
    ~Stack();
    //push node to top of stack
    void push(NodeData pushData);
    //pop top of stack
    NodeData pop();
    //peek at top of stack
    NodeData peek();
    //check if stack is empty
    bool isEmpty();

};
