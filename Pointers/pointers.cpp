
#include <iostream>
using namespace std;

int main()
{
	int Var = 10;

	int *ptr = &Var; //ptr variable holds address of Var	
    
    /* OR
    int *ptr;  // declaring entity of "int *" type first
    ptr = &Var;  //ptr mei you store the address 
    *ptr se you get the value
	*/
    
    cout << "Value of Var = "<< *ptr << endl; // prints value at address stored in ptr i.e. value of Var
    cout << "Address of Var = " << ptr << endl; //address of Var which is machine dependant

    /* 
    int ptr = &Var; 
    It won't work because "int *" type value i.e. the address of value here (&Var)
    cannot be used to initialize an entity of type int i.e. ptr here.
    */

    /*
    You can't do like  
    int *ptr = Var; 
    because value of type int i.e. Var here cannot be used to initialize "int *" type entity.
    */
	
    //Changing the values of Var or the value at address ptr
	*ptr = 20; 
	cout << "After doing *ptr = 20, *ptr is "<< Var << endl;  
    //or use *ptr  instead of Var here, we'll still get the updated value.

	return 0;
}