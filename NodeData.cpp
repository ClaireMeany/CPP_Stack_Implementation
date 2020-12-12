/*
Programmer: Claire Meany
Assignment 1
IT 279
Description:
  Implementation file for NodeData which contains three pieces of data for a node
*/

  #include "NodeData.h"

  //default constuctor
  NodeData::NodeData(){}

  //parameterized constructor
  NodeData::NodeData(char oper, int ttl, int input){
    operation=oper;
    total=ttl;
    userInput=input;
  }

  void NodeData:: setOperation(char oper){
    operation=oper;
  }

  char NodeData:: getOperation(){
    return operation;
  }

  void NodeData:: setTotal(int ttl){
    total=ttl;
  }

  int NodeData:: getTotal(){
    return total;
  }

  void NodeData:: setUserInput(int input){
    userInput=input;
  }

  int NodeData:: getUserInput(){
    return userInput;
  }
