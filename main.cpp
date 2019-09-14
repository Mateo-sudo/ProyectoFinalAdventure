/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mateo.salamanca
 *
 * Created on September 14, 2019, 3:42 PM
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

/*
 * 
 */
class LOGIN{
private:
    string user;
    string password;
public:
    LOGIN(){user="";password="";}
    LOGIN(string _user,string _password){user=_user;password=_password;}
    
    void verificacion(){
    string data,l;
    string user,password;
    ifstream infile;
    infile.open("users.txt");
    cout << "Reading from the file" << endl;
    //cout<<"Ingresa tu usuario    :  "; 
    //cin>>user;
    while(!infile.eof()){
        infile>>data;
        while(data!=)
        if (data=="user:mateo|password:1002") cout<<"Lo es\n";
       
    }
    
    
    // close the opened file.

   infile.close();
    
   /*
    outfile.open("users.txt", ios::out | ios::app);
    cout<<"Ingresa tu usuario    :  "; 
    cin>>data;
    outfile<<"user:"<<data<<"|";
    cout<<"Ingresa tu contraseña : ";
    cin>>data;
    outfile<<"password:"<<data<<endl;
    outfile.open("users.txt", ios::out | ios::app );
    outfile.close();
    */
    }
};

int main(int argc, char** argv) {
    LOGIN nuevo;
    nuevo.verificacion();
    return 0;
}

