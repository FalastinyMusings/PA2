//
// Created by Mohammad Hammad on 2019-03-02.
//

#ifndef CODE_PRODUCTIONWORKER_H
#define CODE_PRODUCTIONWORKER_H
#include "Employee.h"
#include <vector>

class ProductionWorker : public Employee {
protected:
    int empShift;
    double hourlyPayRate;
public:
    ProductionWorker();
    ProductionWorker(string name, int num, string date, int shift, double payRate);
    void setShift(int shift);
    void setPayRate(double payRate);
    int getShift() const;
    double getPayRate() const;
    void Print() const;
};

void assignment();
void printAllWorkers();
void workerSetup();

#endif //CODE_PRODUCTIONWORKER_H
