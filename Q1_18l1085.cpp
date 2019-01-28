// Q1_18l1085.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <conio.h>

#include <string>
using namespace std;
struct githubuser{
	string name;
	int size;
};
void inputfromuser(githubuser *&arr,int size){
	arr=new githubuser[4];
	for(int i=0;i<4;i++){
	    cout<<"Enter  Name of User No"<<i+1<<" : ";
	    cin>>arr[i].name;
}
}
bool exists(githubuser* arr, int size, string userName){
	cout<<"Enter Your Name You Want To Search:";
	int n=0;
	int count=0;
	for(int j=0;j<3;j++){
	cin>>userName;
	for(int i=0;i<4;i++){
		if(userName==arr[i].name){
			cout<<"This userName already exists, enter another userName";
		}
		}
	
	}
	return true;
}
void print(githubuser *arr){
	for(int i=0;i<4;i++){
		cout<<arr[i].name<<endl;
	}
}
bool camp(githubuser *arr,int n1,int n2){
	cout<<"Enter First User Id:";
	cin>>n1;
	cout<<"Enter Second User Id:";
	cin>>n2;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
	if(arr[n1].name==arr[n2].name){
		cout<<"Same User";
		return true;
	}
	
}
	}
}
int searchuser(githubuser *arr ,int size,string username){
	cout<<"Enter Username:";
	cin>>username;
	for(int i=0;i<4;i++){
		if(arr[i].name==username){
			cout<<"The User Id is:";
			return i+1;
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	string username;
	int n1=0;
	int n2=0;
	githubuser *arr=new githubuser[4];
	inputfromuser(arr,4);
	print(arr);
	exists(arr,4,username);
	camp(arr,n1,n2);
	int u=searchuser(arr,4,username);
	cout<<u;
	return 0;
}

