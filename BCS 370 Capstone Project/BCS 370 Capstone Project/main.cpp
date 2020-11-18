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
        cout << "Assignment #" << i+1 << endl;
        Assignment temp = v[i];
        temp.displayAssignment();
        cout << endl;
    }
}

vector<Assignment> myVector;

void mainMenu()
{
    int choice;
    cout << "-=-=-HOMEWORK MANAGER-=-=-" << endl;
    cout << "1. Add Assignmet" << endl;
    cout << "2. Edit Assignment" << endl;
    cout << "3. View All Assignments" << endl;
    cout << "4. Remove Assignment" << endl;
    cout << "5. Search Assignment" << endl;
    cout << "6. QUIT" << endl;
    cin >> choice;
    
    switch(choice)
    {
        case 1:
        {
            Assignment temp;
            temp.addAssignment();
            myVector.push_back(temp);
            mainMenu();
            break;
        }
        case 2:
        {
            displayVector(myVector);
            cout << "Select Assignment to edit: ";
            int assignmentNum;
            cin >> assignmentNum;
            Assignment temp = myVector[assignmentNum-1];
            temp.updateAssignment();
            myVector[assignmentNum-1] = temp;
            mainMenu();
            break;
        }
        case 3:
        {
            displayVector(myVector);
            mainMenu();
            break;
        }
        case 4:
        {
            displayVector(myVector);
            cout << "Select Assignment to remove: ";
            int assignmentNum;
            cin >> assignmentNum;
            myVector.erase(myVector.begin()-1);
            mainMenu();
            break;
        }
    }
    
    
}



int main() {
    
    //Currently Test Code
    mainMenu();
 
    
    
}
