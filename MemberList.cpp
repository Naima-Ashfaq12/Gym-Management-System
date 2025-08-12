#include"MemberList.h"
#include<iostream>
using namespace std;
MemberList::MemberList() : head(NULL) {}

MemberList::~MemberList() {
    MemberNode* current = head;
    while (current) {
        MemberNode* next = current->next;
        delete current->member;
        delete current;
        current = next;
    }
}

void MemberList::addMember(GymManager* member) {
    MemberNode* newNode = new MemberNode(member);
    if (!head) {
        head = newNode;
    } else {
        MemberNode* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void MemberList::displayMembers() {
    MemberNode* current = head;
    while (current) {
        current->member->displayData();
        cout << endl;
        current = current->next;
    }
}
void MemberList::searchMember(char* name) {
    MemberNode* current = head;
    while (current) {
        if (strcmp(name, current->member->getName()) == 0) {
            cout << "Member found:" << endl;
            current->member->displayData();
            return;
        }
        current = current->next;
    }
    cout << "Member not found." << endl;
}

void MemberList::deleteMember(char* name) {
    MemberNode* current = head;
    MemberNode* prev = NULL;

    while (current) {
        if (strcmp(name, current->member->getName()) == 0) {
            if (prev) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            delete current->member;
            delete current;
            cout << "Member deleted successfully!" << endl;
            return;
        }
        prev = current;
        current = current->next;
    }

    cout << "Member not found." << endl;
}

