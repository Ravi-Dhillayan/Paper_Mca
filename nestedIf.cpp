#include<iostream>
using namespace std;
class A{
	int a,b,c;
	public:
	void enter();
	void show();
	
};
void A:: enter(){

	cout<<"Enter the value of A "<<endl;
	cin>>a;
		cout<<"Enter the value of  B"<<endl;
	cin>>b;
		cout<<"Enter the value of  C :"<<endl;
	cin>>c;
	
}
void A::show(){
	if(a>b){
		if(a>c)
		{
			cout<<"A is a Largest :"<<a<<endl;
			
		}
	
	}
	else if(b>c){
		cout<<"B is a Largest :"<<b<<endl;
	}
	else  {
	cout<<"C is a Largest :"<<c<<endl;
	}
	
}
int main(){
	A o;
	o.enter();
	o.show();
	
	
}
