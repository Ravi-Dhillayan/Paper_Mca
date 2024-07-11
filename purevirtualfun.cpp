#include<iostream>
using namespace std;
class base{
	public:
	virtual void show()=0;

};
class drive1: public base{
	public:
		void show(){
			cout<<"This is derive1 class : "<<endl;
			
		}
};
class derive2:public base{
	public:
		void show(){
			cout<<"This is derive2 class : "<<endl;
		}
};
int main(){
	

    base *a;
	drive1 o;
		a=&o;
		a->show();
	derive2 oo;
	a=&oo;
	a->show();

	
}
//class base{
//	 public:
//	 	char nm[20],cm[20];
//	 	void ph(){
//	 		
//	 		cout<<"Enter the Name of Your mobile_phone : "<<endl;
//	 		cin>>nm;
//	 		cout<<"Enter the Your "<<nm<<" mobile camers : "<<endl;
//	 		cin>>cm;
//		 }
//	 	virtual void show()=0;
//	 	
//};
//class drive1: public base{
//	public:
//	void show() {
//		cout<<"Your mobile_phone Name : "<<nm<<endl;
//		cout<<"Your "<<nm<<" Mobile camers : "<<cm<<endl;
//	}
//};
//int main(){
//	 drive1 obj;
//	 obj.ph();
//	 obj.show();
//	 return 0;
//
//}

