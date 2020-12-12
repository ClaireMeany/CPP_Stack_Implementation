/*
Programmer: Claire Meany
Assignment 1
IT 279
Description:
  Header file for NodeData which contains three pieces of data for a node
*/
#include <iostream>
#include <string>

#ifndef NodeData_H
#define NodeData_H
using namespace std;

class NodeData{

  private:
    char operation;
    int total;
    int userInput;

  public:
    NodeData();
    NodeData(char oper, int ttl, int input);
    void setOperation(char oper);
    char getOperation();
    void setTotal(int ttl);
    int getTotal();
    void setUserInput(int input);
    int getUserInput();

};

#endif
