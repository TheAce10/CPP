#include <iostream>
using namespace std;

int main(){
    /*
    Assignment Operators
    Assignment operators are used to assign values to variables.
    In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x
    */
   int nn = 10;

    //addition/ subtraction assignment
    int a;
    // a= 0;
    cout << a <<endl;
    a+= nn;
    a-= nn;
    cout << a << endl;
    /* A list of all assignment operators:

    Operator	Example	    Same As	
    =	        x = 5	    x = 5	
    +=	        x += 3	    x = x + 3	
    -=	        x -= 3	    x = x - 3	
    *=	        x *= 3	    x = x * 3	
    /=	        x /= 3	    x = x / 3	
    %=	        x %= 3	    x = x % 3	
    &=	        x &= 3	    x = x & 3	
    |=	        x |= 3	    x = x | 3	
    ^=	        x ^= 3	    x = x ^ 3	
    >>=	        x >>= 3	    x = x >> 3	
    <<=	        x <<= 3	    x = x << 3
    */

   int mod = 5;
   mod |= 3;
   int mol = (5 % 3)+ 5;
   cout << mod << '\n' << 5 % 3;

/*    comparison operators 
    Operator	Name
      ==	  Equal to
      !=	  Not equal	
      >	      Greater than
      <	      Less than
      >=	  Greater than or equal to
      <=	  Less than or equal to	*/

/* Logical operators are used to determine the logic between variables or values:
    Operator	Name
    && 	    Logical and		
    || 	    Logical or		
    !	    Logical not*/
return 0;
}