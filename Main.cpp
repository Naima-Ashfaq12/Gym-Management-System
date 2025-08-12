#include"StandardMember.h"
#include "GymManager.h"
#include"MemberList.h"
#include<iostream>
using namespace std;
int main() {
	system("color 5f");
    MemberList m;
    int choice;
    do {
        cout << " -----------------------------------" << endl;
        cout << "    Gym Management System Menu" << endl;
        cout << " -----------------------------------" <<endl;
        cout << "  1. Add Member" << endl;
        cout << "  2. Display Members" << endl;
        cout << "  3. Search Member" <<endl;
        cout << "  4. Delete Member" << endl;
        cout << "  5. Exit" << endl;
        cout << " -----------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << " -----------------------------------" << endl <<endl << endl;
        cin.ignore();
        switch (choice) {
            case 1: {
            	system("color 6f");
                StandardMember* newMember = new StandardMember();
                newMember->readData();
                m.addMember(newMember);
                cout << "Member added successfully!" << endl;
                break;
            }
            case 2:
            		system("color 3f");
                m.displayMembers();
                break;
            case 3: {
            		system("color 2f");
                char name[50];
                cout << "Enter name of member to search: ";
               cin.getline(name, 50);
                m.searchMember(name);
                break;
            }
            case 4: {
            		system("color 8f");
                char name[50];
               cout << "Enter name of member to delete: ";
                cin.getline(name, 50);
                m.deleteMember(name);
                break;
            }
            case 5:
            		system("color 4f");
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}


