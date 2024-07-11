#include<iostream>
using namespace std;
class A{
	int a =0,n , b=0;
	
	public :
		void get(){
		cout<<"Enter the number How far do you want to find the Armstrong number: "<<endl;
		cin>>n;
	 int t=n;
		while(n>0){
			a=n%10;
			b=b+a*a*a;
			n=n/10;
//			cout<<b<<endl;
		}	
//		cout<<b<<endl;
	 if(b==t){
	 		cout<<"Your Armstrong Number Printed : "<<b<<endl;
	 }
	 else {
	 	cout<<"It is not Armstrong Number : "<<endl;
	 }
		}
};
class B: public A{
	char nm[20],roll[20];
	public:
		void get(){
			cout<<"Enter the Your Name : "<<endl;
			cin>>nm;
			cout<<"Enter the Your Roll_no : "<<endl;
			cin>>roll;
		}
		void dis(){
			cout<<"Your Name : "<<endl;
			cout<<nm<<endl<<"Your Roll_no : "<<endl<<roll;
		}
};
int main(){
	 B *a, obj;
	A *p;
	p=&obj;
	p->get();
	a=&obj;
	a->get();
	a->dis();
}
