#include <iostream>

using namespace std;

    class quadrilateral
    {
    private:
        /* data */
        int x, y;
    public:
     void set_values(int a, int b){
        x= a;
        y= b;
     }
     int area(){
        return x*y;
     }
    };

int main() {

    quadrilateral square,rectangle;
    square.set_values(10,10);
    cout <<"The area of the square is "<< square.area() <<endl;
    rectangle.set_values(5, 10);
    cout <<"The area of the square is "<< rectangle.area() <<endl;
    
    
}