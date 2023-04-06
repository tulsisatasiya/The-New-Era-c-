#include<iostream>
#include<string.h>

using namespace std;

class emp{
	public:
	int id;
	char name[50];
	char roll[50];
	int age;
	int salary;
	int experience;
	char city[50];
	char cname[50];
		
};

int main(){
	
	emp e1,e2,e3,e4,e5;
	
	e1.id=101;
	strcpy(e1.name,"jiya");
	strcpy(e1.roll,"manager");
	e1.age=19;
	e1.salary=20000;
	e1.experience=1;
	strcpy(e1.city,"surat");
	strcpy(e1.cname,"code-skill");
	
	cout<<"emp_id:-"<<e1.id<<endl;
	cout<<"emp_name:-"<<e1.name<<endl;
	cout<<"emp_roll:-"<<e1.roll<<endl;
	cout<<"emp_age:-"<<e1.age<<endl;
	cout<<"emp_salary:-"<<e1.salary<<endl;
	cout<<"emp_experience:-"<<e1.experience<<endl;
	cout<<"emp_city:-"<<e1.city<<endl;
	cout<<"emp_company name:-"<<e1.cname<<endl<<endl;
	
	
	e2.id=102;
	strcpy(e2.name,"vinya");
	strcpy(e2.roll,"manager");
	e2.age=20;
	e2.salary=22000;
	e2.experience=2;
	strcpy(e1.city,"vadodara");
	strcpy(e1.cname,"dev tech");
	
	cout<<"emp_id:-"<<e2.id<<endl;
	cout<<"emp_name:-"<<e2.name<<endl;
	cout<<"emp_roll:-"<<e2.roll<<endl;
	cout<<"emp_age:-"<<e2.age<<endl;
	cout<<"emp_salary:-"<<e2.salary<<endl;
	cout<<"emp_experience:-"<<e2.experience<<endl;
	cout<<"emp_city:-"<<e2.city<<endl;
	cout<<"emp_company name:-"<<e2.cname<<endl<<endl;
	
	
	e3.id=103;
	strcpy(e3.name,"kiyara");
	strcpy(e3.roll,"ceo");
	e3.age=30;
	e3.salary=90000;
	e3.experience=8;
	strcpy(e3.city,"surat");
	strcpy(e3.cname,"info-tech");
	
	cout<<"emp_id:-"<<e3.id<<endl;
	cout<<"emp_name:-"<<e3.name<<endl;
	cout<<"emp_roll:-"<<e3.roll<<endl;
	cout<<"emp_age:-"<<e3.age<<endl;
	cout<<"emp_salary:-"<<e3.salary<<endl;
	cout<<"emp_experience:-"<<e3.experience<<endl;
	cout<<"emp_city:-"<<e3.city<<endl;
	cout<<"emp_company name:-"<<e3.cname<<endl<<endl;
	
	e4.id=104;
	strcpy(e4.name,"manvi");
	strcpy(e4.roll,"cenier manager");
	e4.age=30;
	e4.salary=60000;
	e4.experience=5;
	strcpy(e4.city,"surat");
	strcpy(e4.cname,"dev tech");
	
	cout<<"emp_id:-"<<e4.id<<endl;
	cout<<"emp_name:-"<<e4.name<<endl;
	cout<<"emp_roll:-"<<e4.roll<<endl;
	cout<<"emp_age:-"<<e4.age<<endl;
	cout<<"emp_salary:-"<<e4.salary<<endl;
	cout<<"emp_experience:-"<<e4.experience<<endl;
	cout<<"emp_city:-"<<e4.city<<endl;
	cout<<"emp_company name:-"<<e4.cname<<endl<<endl;

	e5.id=105;
	strcpy(e5.name,"neha");
	strcpy(e5.roll," manager");
	e5.age=30;
	e5.salary=40000;
	e5.experience=3;
	strcpy(e5.city,"surat");
	strcpy(e5.cname,"devs tech");
	
	cout<<"emp_id:-"<<e5.id<<endl;
	cout<<"emp_name:-"<<e5.name<<endl;
	cout<<"emp_roll:-"<<e5.roll<<endl;
	cout<<"emp_age:-"<<e5.age<<endl;
	cout<<"emp_salary:-"<<e5.salary<<endl;
	cout<<"emp_experience:-"<<e5.experience<<endl;
	cout<<"emp_city:-"<<e5.city<<endl;
	cout<<"emp_company name:-"<<e5.cname<<endl<<endl;
	
}
