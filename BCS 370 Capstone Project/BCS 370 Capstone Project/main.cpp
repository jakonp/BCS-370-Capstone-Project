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
#include <fstream>

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
void clearScreen()
{
    for(int i = 0; i <=50; i++)
    {
        cout << "\n";
    }
}

void writeVectorToSaveFile(vector<Assignment> v)
{
    ofstream saveFile;
    saveFile.open("savefile.dat");
    for(int i = 0; i < v.size(); i++)
    {
        Assignment temp = v[i];
        saveFile << temp.getCourse() << "\n" << temp.getDescription() << "\n" << temp.getDay()<< "\n" << temp.getMonth() << "\n";
    }
    saveFile.close();
}

void readSaveFiletoVector(vector<Assignment> v)
{
    //write code that reads the save file into a vector and run it first this in main
}





vector<Assignment> myVector;

void mainMenu()
{
    int choice;
    cout << "-=-=-HOMEWORK MANAGER-=-=-" << endl;
    cout << "1. Add Assignment" << endl;
    cout << "2. Edit Assignment" << endl;
    cout << "3. View All Assignments" << endl;
    cout << "4. Remove Assignment" << endl;
    cout << "5. Search Assignment" << endl;
    cout << "6. Save to file" << endl;
    cout << "7. QUIT" << endl;
    cin >> choice;
    
    switch(choice)
    {
        case 1:
        {
            Assignment temp;
            temp.addAssignment();
            myVector.push_back(temp);
            clearScreen();
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
            clearScreen();
            mainMenu();
            break;
        }
        case 3:
        {
            clearScreen();
            displayVector(myVector);
            int press;
            int go = 1;
            cout << "Type any character and hit enter...";
            cin >> press;
            if(go == 1)
            {
            mainMenu();
            }
            break;
        }
        case 4:
        {
            clearScreen();
            displayVector(myVector);
            cout << "Select Assignment to remove: ";
            int assignmentNum;
            cin >> assignmentNum;
            myVector.erase(myVector.begin()-1);
            mainMenu();
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            
            writeVectorToSaveFile(myVector);
            mainMenu();
            break;
        }
    }
    
    
}



int main() {
    ofstream myFile;
    myFile.open("savefile.dat");
    //Currently Test Code
    mainMenu();
 
    
    
}
