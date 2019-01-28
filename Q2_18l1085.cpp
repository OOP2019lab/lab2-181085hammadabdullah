// Q2_18l1085.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
struct githubuser{
	string username;
	int size;
	string githubfolders;
	string email;
	string name;
};
//Read File Every Getline Toooks Each Line
void readfile(githubuser *arr,int &n){
	ifstream fin("file1.txt");
	char buff[50];
	
	fin.getline(buff,50);
	arr[0].size=buff[0]-48;
	n=arr[0].size;//take no of users
	for(int i=0;i<n;i++){
	fin.getline(buff,50);
	arr[i].name=buff;
	fin.getline(buff,50);
	arr[i].username=buff;
	fin.getline(buff,50);
	arr[i].email=buff;
	fin.getline(buff,50);
	arr[i].githubfolders=buff;
	}
	fin.close();
}
//print all data
void print(githubuser *arr,int n)
{
	for(int i=0;i<n;i++){
	cout<<arr[i].name<<endl;
	cout<<arr[i].username<<endl;
	cout<<arr[i].email<<endl;
	cout<<arr[i].githubfolders<<endl;
	}
}
//deallocate all memory
void deallocate(githubuser *arr){
	delete [] arr;
}

int _tmain(int argc, _TCHAR* argv[])
{
	githubuser *arr=new githubuser[3];
	int n=0;
	readfile(arr,n);
	print(arr,n);
	deallocate(arr);
	return 0;
}

