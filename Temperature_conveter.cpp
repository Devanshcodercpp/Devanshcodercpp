// Header files
#include <iostream>
using namespace std;

// Functions and prototypes
void ask_user();
void ask_1();
void ask_2();
float ce_to_fr(float c);
float fr_to_ce(float f);
void ERROR();

int main()
{
    // Variables
    int choose;
    long double celsius , fahrenheit;


    // Description of this program
    cout<<"This is Program which converts temperature like--->> \nCelsius to Fahrenheit and Fahrenheit to Celsius\n"<<endl;

    // Users inputs 
    ask_user();
    cin>>choose;


    //Conditions
    if (choose == 1){
        ask_1();
        cin>>celsius;

        cout<<"Celsius to Fahrenheit is: "<<ce_to_fr(celsius)<<endl;
    }

    else if (choose == 2){
        ask_2();
        cin>>fahrenheit;

        cout<<"Fahrenheit to Celsius is: "<<fr_to_ce(fahrenheit)<<endl;
    }

    else{
        ERROR();
    }

    

    return 0;
}

// Functions and prototypes
void ask_user(){
    cout<<"Choose from the following option and write the number beside it \nCelsius to Fahrenheit(1)\nFahrenheit to Celsius(2)"<<endl;
}

void ask_1(){
    cout<<"Enter the Celsius temperature in numerical and no units required: "<<endl;
}

void ask_2(){
    cout<<"Enter the Fahrenheit temperature in numerical and no units required: "<<endl;
}

float ce_to_fr(float c){
    long double ans = ((c*9/5)+32);
    return ans;
}

float fr_to_ce(float f){
    long double ans = ((f-32)*5/9);
    return ans;
}

void ERROR(){
    cout<<"There are only 2 temperature levels available in this program choose between them only"<<endl;
}