#include<iostream>
using namespace std;

class student {
    private:
    string name;
    int age;
    int height;
    public:
    int getAge(){
          return this->age;
    }
void setAge(int age){
this-> age=age;
}
};








int main(){
student first;
first.setAge(20);
cout<<"Age = "<<first.getAge()<<endl;

return 0;
}