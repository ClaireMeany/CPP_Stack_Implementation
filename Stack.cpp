/*
Programmer: Claire Meany
Assignment 1
IT 279
Description:
  Implementation of Stack.h using a linked list
*/
 #include "Stack.h"
  //default constructor
  Stack::Stack(){
    size=0;
    head=NULL;
    tail=NULL;

  }
  //copy constructor
  Stack::Stack(const Stack& stk){
    if(this->isEmpty()){
      head=NULL;

    }
    else{
      size=stk.size;

      struct Node* headStk=stk.head;
      Node* temp=new Node();
      temp=headStk;
      head=temp;
      struct Node* tail=temp;
      while(headStk->next!=NULL){
        headStk=headStk->next;
        temp=new Node();
        temp=headStk;
        tail->next=temp;
        tail=temp;
      }
    }
  }
  //destructor
  Stack::~Stack(){
    while(!this->isEmpty()){
      this->pop();
    }
  }
  //push node to top of stack
  void Stack:: push(NodeData pushData){
    struct Node* newNode;
    newNode= new Node();
    newNode->data=pushData;
    if(size==0){
      head=newNode;
      tail=newNode;
      size++;
    }
    else{
      newNode->next=tail;
      tail=newNode;
      size++;
    }
  }
  //pop top of stack
  NodeData Stack:: pop(){
    struct Node* temp;
    NodeData dataReturn = tail->data;

    temp=tail;
    tail=tail->next;
    temp->next=NULL;
    delete temp;

    size--;

    return dataReturn;
  }
  //peek at top of stack
  NodeData Stack:: peek(){
    if(!this->isEmpty()){
      return tail->data;
    }
    else
      return head->data;
  }
  //check if stack is empty
  bool Stack:: isEmpty(){
    if(size==0)
      return true;
    else
      return false;

  }
