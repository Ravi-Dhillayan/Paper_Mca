#include<iostream>
using namespace std;
class A
{
	int a,b, c;
	public:
		A(){
			cout<<"Enter the 1st number :"<<endl;
			cin>>a;
			cout<<"Enter the 2nd number "<<endl;
			cin>>b;
			cout<<"sum ="<<a+b<<endl;
		}
	
		A(A &ob){
			a=ob.a;
			b=ob.b;
			cout<<"Multiple for two number : "<<a*b<<endl;
		}
			~A(){
		   cout<<"End of the program :"<<endl;
		}
};
int main(){
	A o;
	A obj=o;
}
