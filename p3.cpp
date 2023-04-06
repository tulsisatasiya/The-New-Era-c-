#include <iostream>
#include <string.h>

using namespace std;

class User{
   

    public:

    int id;
    char name[50];
};

int main()
{
    User obj;

    
    obj.id=15;
    strcpy(obj.name,"hii!");

    
    cout << obj.id << endl;
    cout << obj.name <<endl;

    return 0;
}
