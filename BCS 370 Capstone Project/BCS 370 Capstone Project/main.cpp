/*
 BCS 370 Fall 2020
 Capstone Project
 Nicholas Jakobczyk
 Kiernan Kolano
 Charles Corbett
 */

#include <iostream>
#include <string>
#include <vector>

#include "Assignment.cpp"



using namespace std;
//Extra Funtions
void displayVector(vector<Assignment> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        Assignment temp = v[i];
        temp.displayAssignment();
        cout << endl;
    }
}


int main() {
    
    //Currently Test Code
    vector<Assignment> myVector;
    
    Assignment Ass1("math", "Study", 3, 24, 2);
    myVector.push_back(Ass1);
    
    Assignment Ass2("english", "read", 4, 2, 14);
    myVector.push_back(Ass2);
    
    displayVector(myVector);
    
    
}
