#include<iostream>
#include<cmath>
#include <ctime>
#include <math.h>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iterator>
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

void mac(){
  string cmd = "getmac";
  string filename = "text.txt";

  system((cmd + ">" + filename).c_str());
  string line;
  ifstream myfile ("test.txt");

  if(myfile.is_open()){
    while(getline(myfile,line)){
      cout<<line<<endl;
    }
    myfile.close();
  }
  else
  cout<<"Unable to open the file";
}


string computerName(){
TCHAR nameBuf[MAX_COMPUTERNAME_LENGTH + 2];
DWORD nameBufSize;

nameBufSize = sizeof nameBuf - 1;
if (GetComputerName(nameBuf, &nameBufSize) == TRUE) {
    return nameBuf;
}};

int main(int argc, const char * argv[]) {
    float sq,n;
    string name,stid,cName,macA;

    ofstream MyFile("text.txt");
    cout<<"Name : M. A. C. T. Munasinghe \n";
    cout<<"STID : 20833 \n\n";

    MyFile<< "Name : M. A. C. T. Munasinghe"<<name<<endl<<endl;
    MyFile<< "Student ID : 20833"<<stid<<endl<<endl;

    MyFile<<"MAC Address is : "<<endl;
    cout<<"MAC Address is : "<<endl;

    std::ifstream file("mac.txt");
    std::string str;
    while (std::getline(file, str)) {
            MyFile<<str<<endl;
            cout<<str<<endl;
    };
    cName = computerName();
    MyFile<<endl<<"Computer Name :"<<cName<<endl<<endl;
    cout<<endl<<"Computer Name :"<<cName<<endl<<endl;


    for (int i=1; i<=20; i++) {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        cout<<"Enter any number to get Square value :";
        cin>>n;
        sq=n*n;
        MyFile<<"Square value of "<<n<<" is "<<sq<<endl;
        cout<<"Square value of "<<n<<" is "<<sq<<endl;
        time_t t = time(NULL);
        tm* tPtr = localtime(&t);
        MyFile << " Write Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        MyFile << " Write Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
        MyFile << " Count : " <<i<<endl;
        cout << " Write Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        cout << " Write Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
        cout << " Count : " <<i<<endl;
        cout <<endl;
        cout<<endl;
        MyFile << endl;

    }

    MyFile.close();

    int x = 0;
   ifstream filef("text.txt");
    std::string strq;
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    while (std::getline(filef, strq)) {
            x = x+1;
            cout<<strq<<endl;
            if (x%4 ==0){
                    time_t t = time(NULL);
                    tm* tPtr = localtime(&t);
                    Sleep(2000);
                    cout << " Reading Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
                    cout << " Reading Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;}



    };

    }
