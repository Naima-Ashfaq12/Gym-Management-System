#ifndef MEMBERLIST_H
#define MEMBERLIST_H
#include<iostream>
#include"GymManager.h"
using namespace std;
class MemberNode {
public:
    GymManager* member;
    MemberNode* next;
    MemberNode(GymManager* m) : member(m), next(NULL) {}
};

class MemberList : public GymManager {
protected:
    MemberNode* head;
public:
    MemberList();
    ~MemberList();
    void addMember(GymManager* member);
    void displayMembers();
    void searchMember(char* name);
    void deleteMember(char* name);
};

#endif

