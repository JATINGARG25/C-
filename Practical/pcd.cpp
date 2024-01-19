#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Employee
{
public:
    char name[30];
    int salary;
};
class Manager : public Employee
{
public:
    char dept[30];

    void getData()
    {
        cout << "\nEnter the following information about manager:\nName :";
        gets(name);
        cout << "\nDepartment :";
        gets(dept);
        cout << "\nSalary :";
        cin >> salary;
    }
    void show()
    {
        cout << "\n Manager Name :" << name << "\nDepartment :" << dept << "\nSalary :" << salary;
    }
};
class Executive : public Manager
{
public:
    Executive()
    {
        cout << "\nExecutive";
        getData();
        show();
    }
};
int main()
{
    Executive e;
    getch();
}
