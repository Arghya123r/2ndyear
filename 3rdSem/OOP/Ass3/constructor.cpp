#include <iostream>

class Test{
    private:
        int num;
        float ber;
        int number;
    
    public:
        Test(int input1, float input2, int input3){
            num = input1;
            ber = input2;
            number = input3;
        }

        void display(){
            std :: cout<<"The first variable is: "<<num << std::endl;
            std :: cout<<"The second variable is: "<<ber<< std::endl;
            std :: cout<<"The third variable is: "<<number<<std::endl;
        }

        Test(const Test& obj){
            std :: cout << "Copy constructer executed."<< std:: endl;
            num = obj.num;
            ber = obj.ber;
            number = obj.number;
        }
        
};

int main()
{
    Test obj1(3,5.6,6);
    obj1.display();
    Test obj2(obj1);            //Destructor is called anyways when the code ends so there is no need for calling tht destructor.
    obj2.display();
    return 0;
}