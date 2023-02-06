#include <iostream>
#include <string>

using namespace std;
int main() {
    //BMI CALC
    float height,weight,BMI;
    cout << "BMI cALCULATION\n" << "Enter your height(cm)\t";
    cin >> height ;
    cout << "Enter your weight(kg)\t";
    cin >>weight;
    cout << "Height:\t"<<height<<"\nWeight:\t"<<weight;

    // convert height to meters
    height/=100;

    // BMI
    BMI= weight/(height*height);
    cout << "\nCalcuated BMI:\t"<< BMI;
    // Check for BMI Feedback
    if (BMI<18.5){
        cout << "\n You are underweight";
    }
    else if(18.5<BMI<24.9){
        cout << "\n Your weight is normal";
    }
    else if(25<BMI<29.9){
        cout << "\n You are overweight";
    }
    else if(30<BMI<39.9){
        cout << "\n Your are obese";
    }
    else if(BMI>=40){
        cout << "\n Your morbidly obese";
    }
    return 0;
}