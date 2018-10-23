
/*
    Jeffrey Berglund
    CPTR 242
    Test.h
    5/31/18
*/
class Applicant;
#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

// all my includes
#include <iostream>
#include <string>
#include "Applicant.h"
#include "queue"
// testing function! It will see if items add to the correct queue, and are deleted properly.
bool testing(queue<Applicant>& prioQ, queue<Applicant>& NormQ){
    // empty the queue first
    while(!prioQ.empty()){
        prioQ.pop();
    }
    while(!NormQ.empty()){
        NormQ.pop();
    }
    // these be my applicants!
    Applicant app1(18, "Student 1", "Freshman", false, false, "1800-student", "student.study@school.edu");
    Applicant app2(26, "Student 2", "Senior", true, true, "1800-oldpeople", "plzgradASAP@school.edu");
    // adding first item, they should go into the normal queue
    if(app1.getPrior())
        prioQ.push(app1);
    else
        NormQ.push(app1);
    // testing! Applicant 1 should be non priority, were they added correctly?
    if(NormQ.empty())
        return false;
    // adding the second item, they should go into the priority queue
    if(app2.getPrior())
        prioQ.push(app2);
    else
        NormQ.push(app2);
    // testing! Applicant 2 should now be added, it should be priority, was it added correctly?
    if(prioQ.empty())
        return false;
    // the queues have their items. This is good.
    // now going to test if we can clear the lists correctly
    while(!prioQ.empty()){
        prioQ.pop();
    }
    while(!NormQ.empty()){
        NormQ.pop();
    }
    // testing if they deleted correctly
    if(!prioQ.empty())
        return false;
    if(!NormQ.empty())
        return false;
    // all done
    return true;
}

#endif // TEST_H_INCLUDED


/*
    Jeffrey Berglund

    5/23/18
*/
/*
void assignPriority(list){
    reset currentPos
    for(int i = 0; i < list.size; i++){
        if(year == "Senior" || age >= 22 || married || children)
            priority++;
        if(married)
            prority++;
        if(children)
            priority++;
        if(age >= 25)
            priority++;
    }
}*/
/*
One or more of these must be true. Further, priority is given to those individuals that fit into the following:
*Applicants who are married and/or have children and/or are 25 years of age or older
*//*
bool testOrder(list){
    reset currentPos
    for(int i = 0; i < list.size; i++){
        if(list(currentPos).priority < list(currentPos++).priority)
            return false;
        else
            currentPos++;
    }
}

bool testAdd(list, item){
    reset currentPos
    if(item.priority == 1;)
}
*/

