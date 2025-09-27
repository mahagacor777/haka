#include <iostream>
#include<vector> 
using namespace std;
int main(){
    
  int nilai_awal,nilai_batas;
  cout<<"masukkan nilai awal"<<endl;
        cin>> nilai_awal;
  cout<<"masukkan nilai batas"<<endl;
         cin>>nilai_batas;
  
     
  bool kondisi= true;
  
  do{
      cout<<nilai_awal<<endl;
     if(nilai_awal>=nilai_batas){
     
    kondisi=false;}
    nilai_awal++;
     }
      
 while(kondisi);

 
 
      
  
  
    
    
    
    return 0; 
}