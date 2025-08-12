#ifndef GYMMANAGER_H
#define GYMMANAGER_H
#include <iostream>
#include <cstring>
using namespace std;
class GymManager {
protected:
    char name[50];
    int age;
    float weight;
    float height;
    float time;
    int endtime;
    int days;
    char ampm[10];
    char ampm1[10];
public:
    GymManager();
    GymManager( char* n, int a, float w, float h,float t,int e,int d,char* p,char*m);
    virtual void readData();
    virtual void displayData();
    char* getName() ;
    
};
#endif 

