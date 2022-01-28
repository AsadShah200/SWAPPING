#include <iostream>

using namespace std;

void sw(int* a,int* b){ //here pointer a stores the address of our (variable named a=5 in main func)
                        //and so does the b pointer with b variable in main
  int temp = *a; //create a temp variable to store the value
  *a = *b;       //same as (derefrenced)value of a =  (derefrenced)value of b;
  *b = temp;    //same as (derefrenced)value of b =  derefrence value of a stored in temp;
}

int main() {

    int a = 5;
    int b = 7;
    sw(&a,&b);
    cout << a; //Now a = 7
    cout << b; //b = 5
    return 0;
}
