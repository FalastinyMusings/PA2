//
// Created by Mohammad Hammad on 2019-03-02.
//

#include "Employee.h"
#include <vector>

vector<Employee> employees; // Vector to hold all standard employees

void Employee::setName(string name)  // Setter for Employee name
{
    empName = name;
}

void Employee::setDate(string date) // Setter for hire date
{
    hireDate = date;
}

void Employee::setNum(int num)  // Setter for employee number
{
    empNum = num;
}

string Employee::getName() const  // Getter for employee name
{
    return empName;
}

string Employee::getDate() const  // Getter for employee hire date
{
    return hireDate;
}

int Employee::getNum() const  // Getter for employee number
{
    return empNum;
}

Employee::Employee()  // Default constructor for employee
{
    empName = "NoName";
    hireDate = "N/A";
    empNum = -1;
}

Employee::Employee(string name, int num, string date)  // Constructor for employee
{
    empNum = num;
    empName = name;
    hireDate = date;
}

void Employee::Print() const  // Print function for an Employee class object
{
    cout << endl;
    cout << "Name: " << getName() << endl;
    cout << "Employee Number: " << getNum() << endl;
    cout << "Date Hired: " << getDate() << endl;
    cout << endl;
}

void printAllEmps()  // Function to print all members of the employee vector
{
    for (unsigned int i = 0; i < employees.size(); i++)
    {
        employees.at(i).Print();
    }
}

void empSetup()  // Setup function to add an employee to vector
{
    int num = -1;
    string name, date;
    cout << "Please enter the name of the employee: ";
    cin >> name;
    cout << endl << "Please enter the Employee Number: ";
    cin >> num;
    cout << endl << "Please enter the date hired: ";
    cin >> date;
    Employee temp(name, num, date);
    employees.push_back(temp);
    employees.back().Print();
}