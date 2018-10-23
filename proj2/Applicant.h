
/*
    Jeffrey Berglund
    CPTR 242
    Applicant.h
    5/28/18
*/



#ifndef APPLICANT_H_INCLUDE
#define APPLICANT_H_INCLUDE

// all my includes
#include <iostream>
#include <string>

using namespace std;

// da magical place
class Applicant {
    private:
        // variables
        int age;
        string name;
        string year;
        bool marriage;
        bool children;
        string phone;
        string email;
        bool priority;
    public:
        // constructor
        Applicant(int ag, string na, string ye, bool ma, bool ch, string ph, string em);
        // mutators
        void setAge(int a);
        void setName(string n);
        void setYear(string y);
        void setMarr(bool m);
        void setChild(bool c);
        void setPhone(string p);
        void setEmail(string e);
        void setPrior(bool p);
        // accessors
        int getAge();
        string getName();
        string getYear();
        bool getMarr();
        bool getChild();
        string getPhone();
        string getEmail();
        bool getPrior();
    };



#endif // APPLICANT_H

