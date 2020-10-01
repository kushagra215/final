#include <iostream> 
using namespace std;
#include <string.h> 
#include <conio.h>
class train
{
public:
    
    
    char trainName[20];
    char startingPoint[20];
    char destination[20];
    int trainNo;


    train(/* args */);
    ~train();
};
  int main() {
      train obj1;
      obj1.trainName="raajdhani";
      cout<<"name of the train :"obj1.trainName;
        return 0;
  }



