/*
Author: Hammad, Mohammad
Assignment: Programming Assignment #02
Course: COMP B12 PM
Instructor: Richard Miles
Date submitted: 2019/1/23


Full function detailing usage of setters and getters is at the bottom of ProductionWorker.cpp on line 66.
*/

#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;


int main() 
{
    int choice = -1;
    while (choice) {
        cout << endl;
        cout << "Welcome to Employee Setup! Please select an option: " << endl;
        cout << "1: Regular Employee Setup" << endl;
        cout << "2: Production Worker Setup" << endl;
        cout << "3: Display all employees" << endl;
        cout << "4: Display all production workers" << endl;
        cout << "5: Demonstrate setters and getters" << endl;
        cout << "6: Set Grade to A+" << endl;
        cout << "0: Exit" << endl;
        cin >> choice;
        cout << endl;


        switch (choice) {
            case 1: {
                empSetup();
                break;
            }
            case 2: {
                workerSetup();
                break;
            }
            case 3: {
                printAllEmps();
                break;
            }
            case 4: {
                printAllWorkers();
                break;
            }
            case 5: {
                assignment();
                break;
            }
            case 6:{
                int grade = 100;
                char letterGrade = 'A';
                cout << "Mohammad Hammad has been assigned an " << letterGrade << " for this assignment! (" << grade <<"%)" << endl;
            }

            default: {
                break;
            }

        }

    }

    cout << "Have a great day!";
    return 0;

}