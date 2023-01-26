//OPERATORS AND REFERENCES IN C++ 
/*    :: scope resolution oprator 
      >> Extraction operator 
      << Insertion operator
      ::* Pointer to member declaration 
      ->* Pointer to member operator(for dereferencing) 
      .* Pointer to member operator(for dereferencing) 
      new  Dynamic memory allocator
      delete Dynamic memory de-allocator. 

*/
#include<iostream>
using namespace std;
int num=23;
int main (){

    int num=10;
    cout<<"local variable num ="<<num<< endl;
    cout<<"global variable ::num= "<<::num<<endl;









    return 0;
}
