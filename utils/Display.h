#ifndef DISPLAY_H
#define DISPLAY_H

#include "../classes/Student.h"
#include "../classes/Company.h"
#include "../classes/Job.h"
#include "../classes/College.h"
using namespace std;

void display_line(int choice)
{
    switch (choice)
    {
    case 1:
        cout<<"\t\t\t=================================================================="<<endl;
        break;
    case 2:
        cout << "-------------------------------------------------------------------------------------------------------" << endl;
        break;
    default:
        cout << "===========================================" << endl;
    }
}

void display_students(vector<Student> &Students)
{
    cout << "\t\t\t\t\t  || LIST OF STUDENTS ||\n"
         << endl;
    cout.width(3);
    cout << "\t\t\t\t| Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Roll Number"
         << "\t|";
    cout << endl;
    cout<<"\t\t\t\t-------------------------------------------------"<<endl;

    int index = 1;
    for (auto student : Students)
    {   cout<<"\t\t\t\t";
        cout.width(3);
        cout << "|   "<<index++ << " \t    |";
        cout.width(15);
        cout << student.name << "\t|";
        cout.width(10);
        cout << student.roll_number << "\t|";
        cout << endl;
    }
    cout << "\n"
         << endl;
    display_line(1);
     cout<<"\n\n";
}

void display_companies(vector<Company> &Companies)
{
    cout << "\t\t\t\t\t  || LIST OF COMPANIES ||\n"
         << endl;
    cout.width(3);
    cout << "\t\t\t\t| Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Location"
         << "\t|";
    cout << endl;
    cout << "\t\t\t\t-------------------------------------------------" << endl;

    int index = 1;
    for (auto company : Companies)
    {   cout<<"\t\t\t\t";
        cout.width(3);
        cout << "|   "<<index++ << " \t    |";
        cout.width(15);
        cout << company.get_name() << "\t|";
        cout.width(10);
        cout << company.get_location() << "\t|";
        cout << endl;
    }
    cout << "\n"
         << endl;
    display_line(1);
    cout<<"\n\n";
}

void display_college_list(vector<College> &Colleges)
{
    cout << "\t\t\t\t\t  || LIST OF COLLEGE ||\n"
         << endl;
     cout.width(3);
    cout << "\t\t\t\t| Serial No."
         << "|";
    cout.width(12);
    cout << "Name"
         << "   \t|";
    cout.width(10);
    cout << "Location"
         << "\t|";
    cout << endl;
     cout << "\t\t\t\t-------------------------------------------------" << endl;

    int index = 1;
    for (auto college : Colleges)
    {   
        cout<<"\t\t\t\t";
        cout.width(3);
        cout << "|   "<<index++ << " \t    |";
        cout.width(15);
        cout << college.get_name() << "\t|";
        cout.width(10);
        cout << college.get_location() << "\t|";
        cout << endl;
    }
    cout << endl;
    display_line(1);
     cout<<"\n\n";
}

void display_role_text(int student, int company, int college)
{
    if (student)
    {
        cout << "\t\t\t\t\t\t   Student" << endl;
        cout<<"\n\t\t\t==================================================================\n";
        cout << endl;
    }

    if (company)
    {
        cout << "\t\t\t\t\t\t   COMPANY" << endl;
        cout<<"\n\t\t\t==================================================================\n";
        cout << endl;
    }

    if (college)
    {
        cout << "\t\t\t\t\t\t   COLLEGE" << endl;
        cout<<"\n\t\t\t==================================================================\n";
        cout << endl;
    }
}

void display_project_name()
{
    cout<<"\n\n\n\n";
    cout << "\t\t\t||==============================================================================================||"<<endl;
    cout<<"\t\t\t\t\t\t\t Placement Management System"<<endl;
    cout << "\t\t\t||==============================================================================================||"<<endl;
}

void display_thank_you(){
     cout<<"\n\n\t\t\t************************************************************************"<<endl;
     cout<<"\t\t\t\t\t\t\tThank You"<<endl;
    cout<<"\t\t\t************************************************************************\n\n";
                                                                   
}

#endif
