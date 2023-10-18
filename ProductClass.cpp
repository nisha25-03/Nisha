#include<iostream>
using namespace std;
class Product{
	private:int prdid;
	         string name;
	         double price;
	public: Product(){
		    cout<<"--default--product---"<<endl;
		    prdid=101;
		    name="default";
		    price=10;
         	} 
			Product(int prdid,string name,double price){
			cout<<"---parameter--product---"<<endl;	
			//to avoid conflict
			//between data memebrs and i/p paramete
			//use this pointer
		    this->prdid=prdid;
		    this->name=name;
		    this->price=price;	
		
			} 
			void showProduct(){
			cout<<prdid<<"   "<<name<<"     "<<this->price<<endl;	
			}
			 

};
			 
			         
	
int main3(){
	
	
	Product p;//
	p.showProduct();
	
	Product p1(202,"Pen",150);
	p1.showProduct();
	
	
	
	
	
	
	
	
}
