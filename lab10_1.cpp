#include<iostream>
using namespace std;

int main(){
 int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
 cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
 char grade;
 int i = 0;
 do{
  cout << "Student ["<<i+1<< "]: ";
  cin >> grade; 
  
  if(grade == 48) {
   break;
  } 
  if(grade == 'A'){ 
   count[0]++;
   i++;
  }else if(grade == 'B'){ 
   count[1]++;
   i++;
  }
  else if(grade == 'C'){ 
   count[2]++;
   i++;
  }
  else if(grade == 'D'){ 
   count[3]++;
   i++;
  }
  else if(grade == 'F'){ 
   count[4]++;
   i++;
  }
  else{ 
   cout << "Wrong input. Please input again.\n";
  } 
 }while(true);
 
 
 cout << "In total " << i <<" students.\n";
 cout << "A = " << count[0] <<", ";
 cout << "B = " << count[1] <<", ";
 cout << "C = " << count[2] <<", ";
 cout << "D = " << count[3] <<", ";
 cout << "F = " << count[4] ;
   
  
 
 return 0;
}