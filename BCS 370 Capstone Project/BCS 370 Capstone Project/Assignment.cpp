//
//  class.cpp
//  BCS 370 Capstone Project
//
//  Created by Nick Jakobczyk on 11/17/20.
//

//The date is entered in four different spots. under addAssignment and updateAssignment

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
    Assignment(string c, string d, int D, int m, int y, int dD, bool comp)
    {
        this->course = c;
        this->description = d;
        this->month = m;
        this->day = D;
        this->year = y;
        this->daysUntil = dD;
        this->complete = comp;
    }
       
    /* nick i commented out the old void addAssignment() and below it i added the one i worked on
    void addAssignment()
    {
        
        //This is where the date is entered
        
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
    */
    
    //Kiernan
    void addAssignment()
{
        //This is where the date is entered
        cout << "\nEnter Course: ";
        cin >> this->course;
        cout << "\nEnter Description: ";
        cin >> this->description;
        
        LOOP1: 
        cout << "\nEnter month due: ";
        cin >> this->month;
        // this is the aspect that checks the entered month to see if it is 1-12
        if(month > 12){
            cout << "\nPlease enter a valid month 1-12";
            // if the entered month is greater then 12 it sends you back to LOOP1
            // so you can re-enter the month
            goto LOOP1;
        }
        LOOP2:
        cout << "\nEnter day due: ";
        cin >> this->day;
        // this is where each month is checked for how many days are in that month
        // to check to see if the entered date is a valid date
        // this checks every month with 31 days in it to see if the entered date is greater then 31
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31 )
        {
            cout << "\nPlease enter a valid date 1-31";
            goto LOOP2;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        {
            cout << "\nPlease enter a valid date 1-30";
            goto LOOP2;
        }
        else if(month == 2 && day > 29)
        {
            cout << "\nPlease enter a valid date 1-29";
            goto LOOP2;
        }
        cout << "\nEnter the year due: ";
        cin >> this->year;
    }
    //Kiernan
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
                //Month entered here
                cout << "What is the new month due?: ";
                int newMonth;
                cin >> newMonth;
                this->month = newMonth;
                break;
            }
            case 4:
            {
                //Day is entered here
                cout << "What is the new day due?: ";
                int newDay;
                cin >> newDay;
                this->day = newDay;
                break;
            }
            case 5:
            {
                //year is entered here
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
    //Nick
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
    
    int getDaysUntilDue()
    {
        return daysUntil;
    }
    
};
