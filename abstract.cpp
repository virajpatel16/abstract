/*1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.*/


#include<iostream>
using namespace std;

class admin{
	private:
	char company_name[10];
    int	 manager_salary;
    int employee_salary;
    int  total_staff;
   int   total_annual_revenue;
   int can_terminate;
   
   public:
   	void fun(){
	   
   	cout<<"enter the company name:"<<endl;
   	cin>>company_name[10];
   	cout<<"enter the  total_staff :"<<endl;
   	cin>> total_staff;
   	cout<<"enter the total_annual_revenue:"<<endl;
   	cin>>total_annual_revenue;
   	cout<<"enter the can_terminate:"<<endl;
}
};
class manager:public admin{
	private:
		int manager_salary;
		  public:
		  	void dot(){
			  
		  cout<<"enter the manager_salary:"<<endl;
		  cin>>manager_salary;
}		
};
class employee:public manager{
	private:
		int employee;
		public:
			void root(){
			
		cout<<"enter the employee_salary:"<<endl;
		cin>>employee;
	}
};
main(){
	employee e;
	e.dot();
	e.fun();
	e.root();

}

