#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

    Employe::Employee(int empId, int firstName, int lastName, int phone,
    float salary, string job, string email, int departId) 
    : empId(empId), firstName(firstName), lastName(lastName), phone(phone) , 
    salary(salary), job(job), email(email), departId(departId)
    {}


    int getEmpId()
    {
        return empId;
    }

    void setEmpId(int empId)
    {
        empId = empId;
    }

    string getFirstName()
    {
        return firstName;
    }

    void setFirstName(string firstName)
    {
        firstName = firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    void setLastName(string lastName)
    {
        lastName = lastName;
    }

    int getPhone()
    {
        return phone;
    }

    void setPhone(int phone)
    {
        phone = phone;
    }

    float getSalary()
    {
        return salary;
    }

    void setSalary(float salary)
    {
        salary = salary;
    }

    string getJob()
    {
        return job;
    }

    void setJob(string job)
    {
        job = job;
    }

    string getEmail()
    {
        return email;
    }

    void setEmail(string email)
    {
        email = email;
    }

    int getDepartId()
    {
        return departId;
    }

    void setDepartId(int departId)
    {
        departId = departId;
    }
