#include<iostream>
using namespace std;

class Employee{
	//by default access specifier is Private
	//private:accessible inside class
private:int empid;
       string name;
       double salary;	
	   //public:no restriction-everywhere we can access
	//how to assign values to private data members
	//ans:create any public method 
	public:void assignDetails(int id,string nm,double sal){
	cout<<"---assign details to employee----"<<endl;
	
	 empid=id;
	 name=nm;
	 salary=sal;
	 
	}  
	void displayDetails(){
		cout<<empid<<"    "<<name<<"    "<<salary<<endl;
	} 	
	
};



int main1()
{//Employee is UDT
//to access data methods given by class create an object
//ClassName objName
 Employee emp1;//memory get allocated on stack for storing empid name salary
 int id;
 string nm;
 double sal;
 cout<<"Create New Employee "<<endl;
 cout<<"Enter Id Name Salary  "<<endl;
 cin>>id;//101
 cin>>nm;//manoj
 cin>>sal;//20000
 emp1.assignDetails(id,nm,sal);//101,manoj,20000
 emp1.displayDetails();

Employee emp2;
emp2.assignDetails(202,"Mitali",50000);
cout<<endl;
emp2.displayDetails();

Employee emp3;
//methods need to called explicitly
emp3.displayDetails();//garbage
emp3.assignDetails(303,"abc",80000);





 
	return 0;
}
