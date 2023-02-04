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

#include <cmath>

int main() {
    /*C++ Math
    C++ has many functions that allows you to perform 
    mathematical tasks on numbers.*/
    // MAX/MIN
    cout << max(10, 51) << endl;
    cout << min(14, 55); //takes only two args

    /*Other functions, such as sqrt (square root), 
    round (rounds a number) and log (natural logarithm), 
    can be found in the <cmath> header file:*/
    // #include <cmath>
    sqrt(64);
    round(2.6);
    log(2);

    /*A boolean variable is declared with the bool keyword and 
    can only take the values true or false:*/

    // Example
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)
    /*From the example above, you can read that a true value 
    returns 1, and false returns 0.
    However, it is more common to return boolean values from 
    boolean expressions

    A Boolean expression is a C++ expression that returns a 
    boolean value: 1 (true) or 0 (false).
    You can use a comparison operator, such as the greater than
    (>) operator to find out if an expression (or a variable) 
    is true:*/

    cout << (10>9); //returns true
    cout << (10<9); //returns false
    cout << (10==10);
    cout << (9!= 10);

return 0 ; 
}

int main() {
    //C++ Conditions
    /*Use if to specify a block of code to be executed, if a specified condition is true
    Use else to specify a block of code to be executed, if the same condition is false
    Use else if to specify a new condition to test, if the first condition is false
    Use switch to specify many alternative blocks of code to be executed*/

    // IF statement
    /*if (condition) {
    block of code to be executed if the condition is true
        } else {
    block of code to be executed if the condition is false
        } */
if (20 > 18) {
  cout << "20 is greater than 18";
} else
{
    cout << "20 is lesser than 18";
}

//Else if
int x= 10, y= 15;
if (x==y){
    cout << "equal";
} else if (x > y) {
    cout<< "greater";
} 
else {
    cout << "lesser";
}

/*Short Hand If...Else (Ternary Operator)
There is also a short-hand if else, which is known as 
the ternary operator because it consists of three operands. 
It can be used to replace multiple lines of code with a single 
line. It is often used to replace simple if else statements:*/

// variable = (condition) ? expressionTrue : expressionFalse;
string var1= (x > y) ? "greater" : "lesser";

return 0;
}