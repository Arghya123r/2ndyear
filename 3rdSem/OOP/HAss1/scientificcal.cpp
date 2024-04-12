#include<iostream>
#include<math.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    float a,b;
    int z;
    while(true)
    {
        cout<<"WHAT YOU WANT TO FIND: "<<endl;
        cout<<"Press '1' for Power: "<<endl;
        cout<<"Press '2' for Sin: "<<endl; 
        cout<<"Press '3' for Square: "<<endl; 
        cout<<"Press '4' for Cos: "<<endl; 
        cout<<"Press '5' for Tan: "<<endl;
        cout<<"Press '6' for Log: "<<endl;
        cout<<"Press '7' for Base Log: "<<endl;
        cout<<"Press '8' to exit: "<<endl;

        cin>>z;
        switch(z)
        {
        case 1:
        cout<<"Enter the Number for Calculating its Power: "<<endl;
        cin>>a;
        cout<<"Enter the Power for a Number: "<<endl;
        cin>>b;
        cout<<"Power: "<<pow(a,b)<<endl;
        continue;

        case 2:
        cout<<"Enter the Number for Calculating SIN: "<<endl;
        cin>>a;
        cout<<"Value of Sin: "<<sin(a)<<endl;
        continue;

        case 3:
        cout<<"Enter the Number for Calculating Square: "<<endl;
        cin>>a;
        cout<<"Square of a Given Value is: "<<sqrt(a)<<endl;
        continue;

        case 4:
        cout<<"Enter the Number for Calculating COS: "<<endl;
        cin>>a;
        cout<<"Value of Cos: "<<cos(a)<<endl;
        continue;

        case 5:
        cout<<"Enter the Number for Calculating TAN: "<<endl;
        cin>>a;
        cout<<"value of Tan: "<<tan(a)<<endl;
        continue;

        case 6:
        cout<<"Enter the Number for Calculating LOG: "<<endl;
        cin>>a;
        cout<<"Natural Logarithm: "<<log(a)<<endl;
        continue;

        case 7:
        cout<<"Enter the Number for Calculating LOG WITH BASE 10: "<<endl;
        cin>>a;
        cout<<"LOG with Base 10: "<<log10(a)<<endl;
        continue;

        case 8:
        cout<<"Exiting..."<<endl;
        exit(0);
        break;
        }
    }
    return 0;

}


