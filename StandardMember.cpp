#include "StandardMember.h"
#include<iostream>
using namespace std;
StandardMember::StandardMember() : GymManager() {}
StandardMember::StandardMember(char* n, int a, float w, float h,float t,int e,int d,char* p,char *m) :
    GymManager(n, a, w, h,t,e,d,p,m) {
}

