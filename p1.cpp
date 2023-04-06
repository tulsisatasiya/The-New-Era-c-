#include<iostream>
#include<string.h>

using namespace std;

class hotel{
	
    public:
	int id;
	char name[10];
	int staff;
};

int main(){
	hotel h1,h2,h3;
	
	h1.id=101;
	strcpy(h1.name,"amiras");
    h1.staff=50;
	
	cout<<"Hotel id:-"<<h1.id<<endl;
	cout<<"Hotel Name:-"<<h1.name<<endl;
	cout<<"Hotel staff:-"<<h1.staff<<endl<<endl;
	
	h2.id=102;
	strcpy(h2.name,"Darshan");
    h2.staff=60;
	
	cout<<"Hotel id:-"<<h2.id<<endl;
	cout<<"Hotel Name:-"<<h2.name<<endl;
	cout<<"Hotel staff:-"<<h2.staff<<endl<<endl;
	
	h3.id=103;
	strcpy(h3.name,"Rio Carnival");
    h3.staff=100;
	
	cout<<"Hotel id:-"<<h3.id<<endl;
	cout<<"Hotel Name:-"<<h3.name<<endl;
	cout<<"Hotel staff:-"<<h3.staff<<endl;
	
}
