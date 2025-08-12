#include "GymManager.h"
#include<iostream>
using namespace std;
GymManager::GymManager() {
    strcpy(name, "");
    age = 0;
    weight = 0.0;
    height = 0.0;
    time=0.0;
    endtime=0.0;
    days=0;
    strcpy(ampm,"");
    strcpy(ampm1,"");
}
GymManager::GymManager( char* n, int a, float w, float h,float t,int e,int d,char* p,char* m) {
    strcpy(name, n);
    age = a;
    weight = w;
    height = h;
    time =t;
    endtime =e;
    days=d;
    strcpy(ampm,p);
    strcpy(ampm1,m);
}
void GymManager::readData() {
    cout << "Enter member name: ";
    cin.getline(name, 50);
    cout << "Enter member age: ";
    cin >> age;
    cout << "Enter member weight in Kg: ";
    cin >> weight;
    cout << "Enter member height ft. inch: ";
    cin >> height;
    cout<<"Enter time that he starts workout am/pm:";
    cin>>time;
    cin.getline(ampm,10);
    cout<<"Enter time that he end workout am/pm:";
    cin>>endtime;
    cin.getline(ampm1,10);
    cout<<"Enter days the he work out :";
    cin>>days;
    cin.ignore();
}
void GymManager::displayData() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Height: " << height << endl;
    cout<<"workout start time :"<<time<<ampm<<endl;
    cout<<"workout end time : "<<endtime<<ampm1<<endl;
    int totaltime=endtime-time;
    cout<<"Total Time of Workout: "<<totaltime<<endl;
    if(totaltime>5){
    	cout<<"Your time limit is exceeded you should go back"<<endl;
    }
    	else{
    		cout<<"continue your Exercise!"<<endl;
		}
	
    cout<<"days he workout :"<<days<<endl;
}
 char* GymManager::getName()  {
    return name;
}

