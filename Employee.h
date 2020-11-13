#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Employee
{
        public:
            Employee();
            void insert(string query);
            void display();

            vector<Employee *> Employeevector;

        private:
            int empId;
            string firstName;
            string lastName;
            int phone;
            float salary;
            string job;
            string email;
            int departId;
};
#endif
