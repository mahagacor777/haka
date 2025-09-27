#include <iostream> 
using namespace std;
int main(){


    int a;


    cout<<"masukkan nilai ujian :"<<endl;

    cin>>a;

    if(a>=85) {
        cout<<"GRADE A"<<endl;}

    else if (a>=70) {
        cout<<"GRADE B"<<endl;}
    else if (a>=55)  {
        cout<<"GRADE C"<<endl;}

    else {
        cout<<"GRADE D, ngulang matkul"<<endl;}

    return 0;






}