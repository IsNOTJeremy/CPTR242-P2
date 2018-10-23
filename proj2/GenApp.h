/*
    Jeffrey Berglund
    CPTR 242
    GenApp.h
    5/28/18
*/

class Applicant;


#ifndef GENAPP_H_INCLUDED
#define GENAPP_H_INCLUDED

// all my includes
#include <iostream>
#include <string>
#include "queue"

// my function for creating all the stuff!
void genApp(queue<Applicant>& prioQ, queue<Applicant>& NormQ){
    // we be making stuff now!
    bool generating = true;
    // okay, NOW we be making stuff
    while(generating){
        // all the variables, loaded with temp values.
        string name = "-1";
        int age = -1;
        string year = "-1";
        string gMarr = "-1";
        bool marr;
        string gChild = "-1";
        bool child;
        string phone = "-1";
        string email = "-1";
        // key for entering stuff!
        bool entered = false;
        // enter the stuff!
        while(!entered){
            // what is your name?
            cout << "Please enter name" << endl;
            cin.clear();
            getline(cin, name);
            cin.ignore(250, '\n');
            bool trst = true;
            // wait, do we trust this?
            while(trst){
                // are you sure?
                cout << "You entered: " << name << endl << "Is this correct?\n1: Yes\n2: No" << endl;
                string tst = "-1";
                cin.clear();
                getline(cin, tst);
                cin.ignore(250, '\n');
                // yes
                if(tst == "1"){
                    entered = true;
                    trst = false;
                }
                // no...
                else if(tst == "2"){
                    // how dare you! re-enter that name!
                    trst = false;
                }
                else{
                    // why did you lie to me?
                    cout << "Invalid" << endl;
                }
            }
        }
        // reset the key!
        entered = false;
        while(!entered){
            // how old are you?
            cout << "Please enter age" << endl;
            cin.clear();
            cin >> age;
            cin.ignore(250, '\n');
            bool trst = true;
            // WHY SHOULD I TRUST YOU
            while(trst){
                cout << "You entered: " << age << endl << "Is this correct?\n1: Yes\n2: No" << endl;
                string tst = "-1";
                cin.clear();
                getline(cin, tst);
                cin.ignore(250, '\n');
                if(tst == "1"){
                    entered = true;
                    trst = false;
                }
                else if(tst == "2")
                    trst = false;
                else
                    cout << "Invalid" << endl;
            }
        }
        entered = false;
        while(!entered){
            // how long ya been here kid?
            cout << "What year are you?\n0: Freshman\n1: Sophomore\n2: Junior\n3: Senior+" << endl;
            cin.clear();
            getline(cin, year);
            cin.ignore(250, '\n');
            if(year != "0" && year != "1" && year != "2" && year != "3")
                cout << "Invalid" << endl;
            else{
                bool trst = true;
                while(trst){
                    cout << "You selected option: " << year << endl << "Is this correct?\n1: Yes\n2: No" << endl;
                    string tst = "-1";
                    cin.clear();
                    getline(cin, tst);
                    cin.ignore(250, '\n');
                    if(tst == "1"){
                        entered = true;
                        trst = false;
                        if(year == "0")
                            year = "Freshman";
                        if(year == "1")
                            year = "Sophomore";
                        if(year == "2")
                            year = "Junior";
                        if(year == "3")
                            year = "Senior";
                    }
                    else if(tst == "2")
                        trst = false;
                    else
                        cout << "Invalid" << endl;
                }
            }
        }
        entered = false;
        while(!entered){
            cout << "Married?\n1: Yes\n2: No" << endl;
            cin.clear();
            getline(cin, gMarr);
            cin.ignore(250, '\n');
            if(gMarr != "1" && gMarr != "2")
                cout << "Invalid" << endl;
            else{
                bool trst = true;
                while(trst){
                    cout << "You entered: " << gMarr << endl << "Is this correct?\n1: Yes\n2: No" << endl;
                    string tst = "-1";
                    cin.clear();
                    getline(cin, tst);
                    cin.ignore(250, '\n');
                    if(tst == "1"){
                        entered = true;
                        trst = false;
                        if(gMarr == "Yes")
                            marr = true;
                        else
                            marr = false;
                    }
                    else if(tst == "2")
                        trst = false;
                    else
                        cout << "Invalid" << endl;
                }
            }
        }
        entered = false;
        while(!entered){
            cout << "Children?\n1: Yes\n2: No:" << endl;
            cin.clear();
            getline(cin, gChild);
            cin.ignore(250, '\n');
            if(gChild != "1" && gChild != "2")
                cout << "Invalid" << endl;
            else{
                bool trst = true;
                while(trst){
                    cout << "You entered: " << gChild << endl << "Is this correct?\n1: Yes\n2: No" << endl;
                    string tst = "-1";
                    cin.clear();
                    getline(cin, tst);
                    cin.ignore(250, '\n');
                    if(tst == "1"){
                        entered = true;
                        trst = false;
                        if(gChild == "Yes")
                            child = true;
                        else
                            child = false;
                    }
                    else if(tst == "2")
                        trst = false;
                    else
                        cout << "Invalid" << endl;
                }
            }
        }
        entered = false;
        while(!entered){
            cout << "Please enter phone number" << endl;
            cin.clear();
            getline(cin, phone);
            cin.ignore(250, '\n');
            bool trst = true;
            while(trst){
                cout << "You entered: " << phone << endl << "Is this correct?\n1: Yes\n2: No" << endl;
                string tst = "-1";
                cin.clear();
                getline(cin, tst);
                cin.ignore(250, '\n');
                if(tst == "1"){
                    entered = true;
                    trst = false;
                }
                else if(tst == "2")
                    trst = false;
                else
                    cout << "Invalid" << endl;
            }
        }
        entered = false;
        while(!entered){
            cout << "Please enter email address" << endl;
            cin.clear();
            getline(cin, email);
            cin.ignore(250, '\n');
            bool trst = true;
            while(trst){
                cout << "You entered: " << email << endl << "Is this correct?\n1: Yes\n2: No" << endl;
                string tst = "-1";
                cin.clear();
                getline(cin, tst);
                cin.ignore(250, '\n');
                if(tst == "1"){
                    entered = true;
                    trst = false;
                }
                else if(tst == "2")
                    trst = false;
                else
                    cout << "Invalid" << endl;
            }
        }
        bool YAFWL = true;
        while(YAFWL){
            string trmp = "-1";
            cout << endl << "Are these inputs correct?" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Year: " << year << endl;
            cout << "Married: " << marr << endl;
            cout << "Children: " << child << endl;
            cout << "Phone: " << phone << endl;
            cout << "Email: " << email << endl;
            cout << endl << "1: Yes\n2: No" << endl;
            cin.clear();
            getline(cin, trmp);
            cin.ignore(250, '\n');
            if(trmp == "1"){
                YAFWL = false;
                generating = false;
                Applicant app(age, name, year, marr, child, phone, email);
                if(app.getPrior())
                    prioQ.push(app);
                else
                    NormQ.push(app);
            }
            else if(trmp == "2")
                YAFWL = false;
            else
                cout << "Invalid" << endl;
        }
    }
}


#endif // GENAPP_H_INCLUDED
