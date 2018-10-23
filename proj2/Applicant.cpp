
/*
    Jeffrey Berglund
    CPTR 242
    Applicant.cpp
    5/28/18
*/

// all my includes
#include <iostream>
#include <string>
#include "Applicant.h"

using namespace std;

    // this is da magic happens
    // a constructor
    Applicant::Applicant(int ag, string na, string ye, bool ma, bool ch, string ph, string em){
        // setting all the things
        this->age = ag;
        this->name = na;
        this->year = ye;
        this->marriage = ma;
        this->children = ch;
        this->phone = ph;
        this->email = em;
        // 25+, are married, and have children
        if((age >= 25) || marriage || children)
            this->priority = true;
        else
            this->priority = false;
    }
    // accessor and mutator functions
    void Applicant::setAge(int a){
        age = a;
    }
    void Applicant::setName(string n){
        name = n;
    }
    void Applicant::setYear(string y){
        year = y;
    }
    void Applicant::setMarr(bool m){
        marriage = m;
    }
    void Applicant::setChild(bool c){
        children = c;
    }
    void Applicant::setPhone(string p){
        phone = p;
    }
    void Applicant::setEmail(string e){
        email = e;
    }
    void Applicant::setPrior(bool p){
        priority = p;
    }
    int Applicant::getAge(){
        return age;
    }
    string Applicant::getName(){
        return name;
    }
    string Applicant::getYear(){
        return year;
    }
    bool Applicant::getMarr(){
        return marriage;
    }
    bool Applicant::getChild(){
        return children;
    }
    string Applicant::getPhone(){
        return phone;
    }
    string Applicant::getEmail(){
        return email;
    }
    bool Applicant::getPrior(){
        return priority;
    }

