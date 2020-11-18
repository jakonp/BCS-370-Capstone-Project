//
//  class.cpp
//  BCS 370 Capstone Project
//
//  Created by Nick Jakobczyk on 11/17/20.
//

#include <iostream>
#include <string>

using namespace std;

class Assignment
{
private:
    string course;
    string description;
    int month;
    int day;
public:
    void addAssignment()
    {
        cout << "\nEnter Course: ";
        cin >> this->course;
        cout << "\nEnter Description: ";
        cin >> this->description;
        cout << "\nEnter month due: ";
        cin >> this->month;
        cout << "\nEnter day due: ";
        cin >> this->day;
    }
    void updateAssignment()
    {
        int choice;
        cout << "What would you like to change?";
        cout << "\n1. Course\n2. Description\n3. Month Due\n4. Day Due\n5. Exit" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                cout << "What is the new course?: ";
                string newCourse;
                cin >> newCourse;
                this->course = newCourse;
                break;
            }
            case 2:
            {
                cout << "What is the new description?: ";
                string newDescription;
                cin >> newDescription;
                this->description = newDescription;
                break;
            }
            case 3:
            {
                cout << "What is the new month due?: ";
                int newMonth;
                cin >> newMonth;
                this->month = newMonth;
                break;
            }
            case 4:
            {
                cout << "What is the new day due?: ";
                int newDay;
                cin >> newDay;
                this->day = newDay;
                break;
            }
            case 5:
            {
                break;
            }
            
        }
    }
    
    void displayAssignment()
    {
        cout << "Course: " << this->course << endl;
        cout << "Description: " << this->description << endl;
        cout << "Due: " << this->month << "/" << this->day << endl;
    }
    
};
