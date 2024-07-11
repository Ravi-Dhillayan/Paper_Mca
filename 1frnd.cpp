#include<iostream>
using namespace std;
class A {
	int a,b,c;
	public:
		void enter(){
			cout<<"Enter the two number : "<<endl;
			cin>>a>>b;
			
		}
		friend void show(A &o);
};
void show(A &o){
    o.c=o.a+o.b;
	cout<<"Sum of two numbers : "<<o.c<<endl;	  
}
int main(){
	A ob;
	ob.enter();
	show(ob);
	return 0;
}
