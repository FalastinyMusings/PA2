//
// Created by Mohammad Hammad on 2019-03-02.
//

#ifndef CODE_EMPLOYEE_H
#define CODE_EMPLOYEE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
protected:
    string empName, hireDate;
    int empNum;
public:
    void setName(string name);
    void setDate(string date);
    void setNum(int num);
    string getName() const;
    string getDate() const;
    int getNum() const;
    void Print() const;
    Employee();
    Employee(string name, int num, string date);
};

void printAllEmps();
void empSetup();

#endif //CODE_EMPLOYEE_H
