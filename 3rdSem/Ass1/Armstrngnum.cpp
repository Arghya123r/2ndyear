#include <iostream>
#include <cmath>

int main(){

    int ord1, ord2, ord3, totalsum;

    std::cout << "All the Armstrong between 1 and 500 is: ";

    for(int num = 1; num <= 500; num++){

        if(num<=9)
            std::cout<<num<<" ";
        else
        {
            ord1 = num % 10;
            ord2 = (num % 100 - ord1)/10;
            ord3 = (num % 1000 - ord2)/100;

            totalsum = pow(ord1,3) + pow(ord2,3) + pow(ord3,3);

            if(totalsum == num)
            {
                std::cout << num << " "; 
            }
        }

    }
    return 0;
}