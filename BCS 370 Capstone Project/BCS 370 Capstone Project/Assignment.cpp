//
//  class.cpp
//  BCS 370 Capstone Project
//
//  Created by Nick Jakobczyk on 11/17/20.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Assignment
{
private:
    string course;
    string description;
    int month;
    int day;
    int daysUntil = this->getDaysUntilDue();
    bool complete;
public:
    Assignment()
    {
        course = "Unassigned";
        description = "Unassigned";
        month = 0;
        day = 0;
        daysUntil = 0;
        complete = false;
    }
    Assignment(string c, string d, int m, int D, int dD, bool comp)
    {
        this->course = c;
        this->description = d;
        this->month = m;
        this->day = D;
        this->daysUntil = dD;
        this->complete = comp;
    }
       
    
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
        cout << "Completion: ";
        if(complete == true)
        {
            cout<< "Complete" << endl;
        }
        else
        {
            cout << "In Progress" << endl;
        }
    }
    
    string getCourse()
    {
        return course;
    }
    
    string getDescription()
    {
        return description;
    }
    
    int getMonth()
    {
        return month;
    }
    
    int getDay()
    {
        return day;
    }
    
    int getDaysUntilDue()
    {
        int daysUntilDue = 0;
        //create code to find the value
        return daysUntilDue;
    }
    
    
};
