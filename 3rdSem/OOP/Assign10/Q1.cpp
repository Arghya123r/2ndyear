#include<iostream>
using namespace std;
#define MAX 100

template <class T>
class Stack{
  T arr[MAX];
  int top;
  public:
    Stack(){
      top = -1;
    }
    void push(T data){
      if(top >= MAX){
        cout << "The stack is full !" << endl;
        return;
      }
      cout << "Pushed " << data << endl;
      arr[++top] = data;
    }
    T pop(){
      if(top == -1){
        cout << "The stack is empty!" << endl;
        exit(1);
      }
      
      T data = arr[top--];
      cout << "Popped " << data << endl;
      return data;
    }
    void Display(){
      cout << "The elements in the stack are: ";
      for(int i=0; i<=top; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
    }
};

int main(){
  Stack<char> s1;
  s1.push('B');
  s1.push('A');
  s1.push('C');
  s1.push('E');
  s1.push('D');
  s1.Display();
  s1.pop();
  s1.pop();
  s1.Display();
  s1.push('X');
  s1.push('Y');
  s1.Display();


  return 0;
}
