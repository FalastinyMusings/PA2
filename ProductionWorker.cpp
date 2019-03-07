//
// Created by Mohammad Hammad on 2019-03-02.
//

#include "ProductionWorker.h"

vector <ProductionWorker> workers; // Vector to hold all Production Workers

void ProductionWorker::setShift(int shift) // Setter for Production Worker shift. 1 - day, 2 - night
{
    empShift = shift;
}

void ProductionWorker::setPayRate(double payRate) // Setter for Production Worker pay rate
{
    hourlyPayRate = payRate;
}

int ProductionWorker::getShift() const // Getter for Production Worker shift
{
    return empShift;
}

double ProductionWorker::getPayRate() const // Getter for Production Worker pay rate
{
    return hourlyPayRate;
}

ProductionWorker::ProductionWorker() // Production Worker default constructor
{
    empNum = -1;
    empName = "noName";
    hireDate = "empty";
    empShift = 0;
    hourlyPayRate = 0;
}

ProductionWorker::ProductionWorker(string name, int num, string date, int shift, double payRate)  // Production worker constructor
{
    empNum = num;
    empName = name;
    hireDate = date;
    empShift = shift;
    hourlyPayRate = payRate;
}

void ProductionWorker::Print() const // Print function for the ProductionWorker class
{
    cout << endl;
    cout << "Name: " << getName() << endl;
    cout << "Employee Number: " << getNum() << endl;
    cout << "Date Hired: " << getDate() << endl;
    cout << "Shift: " << getShift() << endl;
    cout << "Hourly Pay Rate: " << getPayRate();
    cout << endl << endl;
}

void printAllWorkers() // Function to print all members of the workers vector
{
    for (unsigned int i = 0; i < workers.size(); i++)
    {
        workers.at(i).Print();
    }
}

void assignment() // Function to display usage of setters and getters
{
    cout << "Creating ProductionWorker class object named 'Jim' and printing default values. " << endl;
    ProductionWorker Jim;
    Jim.Print();
    cout << "Setting Jim's name to Jimothy and using getter to display new name." << endl;
    Jim.setName("Jimothy");
    cout << "Jim's name is now " << Jim.getName() << "." << endl;
    cout << "Setting Jimothy's hire date to November 1st, 1992 and using getter to display date." << endl;
    Jim.setDate("11/1/1992");
    cout << "Jimothy was hired on " << Jim.getDate() << "." << endl;
    cout << "Assigning Jimothy the employee number 12, shift of 2, and pay rate of 15." << endl;
    Jim.setNum(12);
    Jim.setShift(2);
    Jim.setPayRate(15);
    Jim.Print();
    cout << "I hope you enjoyed meeting Jimothy, and thank you in advance for the A+!" << endl << endl;
}

void workerSetup() // Function to add a worker to the workers vector
{
    int num = -1, empShift = -1;
    double hourlyPayRate;
    string name, date;

    cout << "Please enter the name of the employee: ";
    cin >> name;
    cout << endl << "Please enter the Employee Number: ";
    cin >> num;
    cout << endl << "Please enter the date hired: ";
    cin >> date;
    cout << endl << "Please input the shift to be worked (Day: 1, Night:2): ";
    cin >> empShift;
    cout << endl << "Please input the Hourly Pay Rate: ";
    cin >> hourlyPayRate;
    ProductionWorker temp(name, num, date, empShift, hourlyPayRate);    // Declares a temp worker to be added to vector
    workers.push_back(temp);                                           // Adds temp worker to end of vector
    workers.back().Print();                                            // Prints last item in vector, which should be newest worker
}