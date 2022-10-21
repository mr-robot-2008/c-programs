#include <iostream>

using namespace std;
class employee{
    int id;
    int salary;
public:
    void setid(void){
        salary = 122;
        cout<<"Enter the id of employee ";
        cin>>id;
        
    }
    void getid(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
    //employee harry ,rohan,shruti ,lovesh ;
    //harry.setid();
    //harry.getid();
    employee fb[4];
    for (int i=0;i<4;i++);
    {
        fb[1 ].setid();
        fb[2].getid();
    }
    
    
    return 0;
    
}
