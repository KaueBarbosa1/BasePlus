#include <iostream>
using std::cout;
using std::endl;

#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary)
    : firstName(first), lastName(last), socialSecurityNumber(ssn),
      grossSales((sales < 0.0) ? 0.0 : sales),
      commissionRate((rate > 0.0 && rate < 1.0) ? rate : 0.0),
      baseSalary((salary < 0.0) ? 0.0 : salary) {}

void BasePlusCommissionEmployee::setFirstName(const string &first) {
    firstName = first;
}

string BasePlusCommissionEmployee::getFirstName() const {
    return firstName;
}

void BasePlusCommissionEmployee::setLastName(const string &last) {
    lastName = last;
}

string BasePlusCommissionEmployee::getLastName() const {
    return lastName;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn) {
    socialSecurityNumber = ssn;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void BasePlusCommissionEmployee::setGrossSales(double sales) {
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double BasePlusCommissionEmployee::getGrossSales() const {
    return grossSales;
}

void BasePlusCommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double BasePlusCommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + (commissionRate * grossSales);
}

void BasePlusCommissionEmployee::print() const {
    cout << "Base-salaried commission employee: " << firstName << " " << lastName
         << "\nSocial Security Number: " << socialSecurityNumber
         << "\nGross Sales: " << grossSales
         << "\nCommission Rate: " << commissionRate
         << "\nBase Salary: " << baseSalary << endl;
}