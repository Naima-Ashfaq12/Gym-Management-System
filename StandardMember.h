#ifndef STANDARD_MEMBER_H
#define STANDARD_MEMBER_H
#include "GymManager.h"
#include<iostream>
using namespace std;
class StandardMember : public GymManager {
public:
    StandardMember();
    StandardMember(char* n, int a, float w, float h,float t,int e,int d,char* p,char *m);
};
#endif

