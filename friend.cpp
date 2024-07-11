#include<iostream>
using namespace std;
class er{
	int i,n ,a;
	public:
		
	friend void  enter(er &o);
	friend void show(er &O);
	
};
void enter(er &o){
	cout<<"Enter the Error of size :"<<endl;
	cin>>o.n;
//	o.a[o.n];
	for(o.i=0;o.i<o.n;o.i++){
		cout<<"*"<<endl;
			}
}
void show(er &o){
       cout<<"enter the a no:"<<endl;
       cin>>o.i;
       cout<<"Enter the b no :"<<endl;
       cin>>o.n;
      o.a= o.i+o.n;
      cout<<"sum of A and B "<<o.a<<endl;
}
int main(){
	er ob;
	enter(ob);
//	show(ob);
}
