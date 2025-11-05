#ifndef FILE_H
#define FILE_H
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
#include "../classes/Student.h"
#include "../classes/Company.h"
#include "../classes/College.h"
#include "../classes/Job.h"
#include "../classes/Internship.h"
#include "../classes/Program.h"

void tokenize_student(string s,vector<Student> &data){

    vector <string> row;
      
    stringstream check1(s);
      
    string intermediate;
      vector <Program*> dummy;
      dummy.push_back(new Program("MLSA","Paid", 25, 6));
      dummy.push_back(new Program("GSoC","Paid", 20, 6));
      dummy.push_back(new Program("HacktoberFest","Unpaid", 150, 1));
      dummy.push_back(new Program("GWOC","Unpaid", 150, 1));
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }


    Student* student = new Student(row[0],row[1],stoi(row[2]),row[3],row[4],stoi(row[5]),stod(row[6]),stoi(row[7]),dummy[rand() % dummy.size()]);
    data.push_back(*student);
}

void tokenize_job(string s,vector<Job> &data){
    vector <string> row;
      
    stringstream check1(s);
    string intermediate;
      
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    Job* job = new Job(stoi(row[0]),row[1],row[2],stoi(row[3]),row[4]);
    data.push_back(*job);
}

void tokenize_internship(string s,vector<Internship> &data){
    vector <string> row;
      
    stringstream check1(s);
    string intermediate;
      
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    Internship* internship = new Internship(stoi(row[0]),row[1],row[2],row[3],stoi(row[4]));
    data.push_back(*internship);
}

void tokenize_company(string s,vector<Company> &data){
    
    vector <string> row;
      
    stringstream check1(s);
      
    string intermediate;
      
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }

    //Read the file of jobs
    vector <Job> jobs;
    fstream fin2;
    fin2.open("../data/Job.txt");
    while(!fin2.eof()){
        fin2>>intermediate;
        tokenize_job(intermediate,jobs);
    }
    fin2.close();

    vector <Internship> internships;
    fin2.open("../data/Internship.txt");
    while(!fin2.eof()){
        fin2>>intermediate;
        tokenize_internship(intermediate,internships);
    }
    fin2.close();

    Company* company = new Company(row[0],row[1],row[2],jobs,internships);
    data.push_back(*company);
}

void tokenize_college(string s,vector<College> &data){
    
    vector <string> row;
      
    stringstream check1(s);
      
    string intermediate;
      
    while(getline(check1, intermediate, ',')){
        row.push_back(intermediate);
    }
    College* college = new College(row[0],row[1],stoi(row[2]));
    data.push_back(*college);
}

void read_file(vector<Student> &students,vector<Company> &companies,vector<College> &colleges){

    ifstream fin;
    string line;
    fin.open("../data/Student.txt");
    while(!fin.eof()){
        fin>>line;
        tokenize_student(line,students);
    }
    fin.close();

    fin.open("../data/Company.txt");
    while(!fin.eof()){
        fin>>line;
        tokenize_company(line,companies);
    }
    fin.close();

    fin.open("../data/College.txt");
    while(getline(fin, line)){
        if (!line.empty()) {
            tokenize_college(line,colleges);
        }
    }
    fin.close();

    if (colleges.empty()) {
        College* default_college = new College("IIIT", "Nagpur", 650);
        colleges.push_back(*default_college);
    }
}

#endif