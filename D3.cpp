#include <iostream>
#include <string>
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

    /* Strings are used for storing text.
    A string variable contains a collection of characters surrounded by double quotes:
    To use strings, you must include an additional header file in the source code, the <string> library:
    */
   string mmm= "bbb";

   /*String concatenation
   The + opreator can be used between strings to add them together to make a new string*/
   string firstName = "Bless ";
    string lastName = "Elikem";
    string fullName = firstName + lastName;
    cout << fullName;

    /*Append
    A string in C++ is actually an object, which contain 
    functions that can perform certain operations on strings. 
    For example, you can also concatenate strings with the 
    append() function:*/
    fullName = firstName.append(lastName);
    // If you try to add a number to a string, an error occurs:

    // string length or size
    int a1= fullName.length();
    a1= fullName.size();

    /*Access Strings
    You can access the characters in a string by referring to 
    its index number inside square brackets [].*/
    fullName[0]; //output first character

    /*To change the value of a specific character in a string, 
    refer to the index number, and use single quotes:*/
    fullName[0]= 'A';
    cout << '\n'+fullName+'\n';

    /*User Input Strings
    It is possible to use the extraction operator >> on cin 
    to display a string entered by a user:*/
    cout << "Enter your First name\t" ;
    // cin >> firstName;
    // cout <<"Hi " << firstName<< endl;
    /*However, cin considers a space (whitespace, tabs, etc) 
    as a terminating character, which means that it can only 
    display a single word (even if you type many words):
    
    That's why, when working with strings, we often use the 
    getline() function to read a line of text. It takes cin as 
    the first parameter, and the string variable as second:*/
    getline(cin, fullName);
    cout <<"Hi " << fullName;

    /*Omitting Namespace
    You might see some C++ programs that runs without the 
    standard namespace library. The using namespace std line 
    can be omitted and replaced with the std keyword, followed 
    by the :: operator for string (and cout) objects:*/

    std:: string namespace1 = "";
    std::cout << namespace1;



return 0;
}