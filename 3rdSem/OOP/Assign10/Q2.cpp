#include<iostream>
#define MAX 6
using namespace std;

template<class T>
class CircularQueue{
  int fr;
  int ra;
  T arr[MAX];
  public:
    CircularQueue(){
      fr = ra = 0;
    }
    void enqueue(T data){
      if(ra == (fr+MAX+1)%MAX){
        cout << "The queue is already full!" << endl;
        exit(1);
      }
      cout << "Enqueued " << data << endl;
      arr[fr] = data;
      fr = (fr + MAX + 1)%MAX;
    }
    T dequeue(){
      if(ra == fr){
        cout << "The queue is already empty!" << endl;
        exit(1);
      }
      T data = arr[ra];
      cout << "Dequeued " << data << endl;
      ra = (ra+MAX+1)%MAX;
      return data;
    }
    void Display(){
      cout << "The elements in the circular queue are: ";
      int i=ra;
      while( i != fr){
        cout << arr[i] << " ";
        i = (i+MAX+1)%MAX;
      }
      cout << endl;
    }
};

int main(){
  CircularQueue<int> cq;
  cq.enqueue(2);
  cq.enqueue(6);
  cq.enqueue(25);
  cq.enqueue(30);
  cq.enqueue(55);
  cq.Display();
  cq.dequeue();
  cq.dequeue();
  cq.Display();
  cq.enqueue(80);
  cq.enqueue(95);
  cq.Display();

  return 0;
}
