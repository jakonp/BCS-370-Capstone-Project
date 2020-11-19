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




struct date
{
    int d,m,y;
    
};


class Assignment
{
private:
    string course;
    string description;
    int month;
    int day;
    int year;
    int daysUntil;
    bool complete;
public:
    Assignment()
    {
        course = "Unassigned";
        description = "Unassigned";
        month = 0;
        day = 0;
        year = 0;
        daysUntil = 0;
        complete = false;
    }
    Assignment(string c, string d, int m, int D, int y, int dD, bool comp)
    {
        this->course = c;
        this->description = d;
        this->month = m;
        this->day = D;
        this->year = y;
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
        cout << "\nEnter the year due: ";
        cin >> this->year;
    }
    void updateAssignment()
    {
        int choice;
        cout << "What would you like to change?";
        cout << "\n1. Course\n2. Description\n3. Month Due\n4. Day Due\n5. Year Due\n6. Update Completion\n7. Exit" << endl;
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
                cout << "What is the new year due?: ";
                int newYear;
                cin >> newYear;
                this->year = newYear;
                break;
            }
            case 6:
            {
                cout << "Has this assignment been completed?: \n1. YES\n2. NO\n";
                int choice;
                cin >> choice;
                if(choice == 1)
                {
                    this->complete = true;
                }
                else
                {
                    this->complete = false;
                }
                break;
            }
            case 7:
            {
                break;
            }
            
        }
    }
    
    void displayAssignment()
    {
        cout << "Course: " << this->course << endl;
        cout << "Description: " << this->description << endl;
        cout << "Due: " << this->month << "/" << this->day << "/" << this->year << endl;
        cout << "Completion: ";
        if(complete == true)
        {
            cout<< "Complete" << endl;
        }
        else
        {
            cout << "In Progress" << endl;
        }
        cout << "Days until due: " << this->daysUntil << endl;
    }
    
    void setDaysUntilDue(int d)
    {
        this->daysUntil = d;
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
    
    
    bool getCompletion()
    {
        return complete;
    }
    
    int getYear()
    {
        return year;
    }
    
};
