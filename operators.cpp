#include<iostream>
using namespace std;

class A{
	private:
	int re=10,im=20;
	public:
		A (int r=1,int i=2){
			re=r;
			im=i;
			
		}
		A operator+(A const& obj){
			A o;
			cout<<"value of real : "<<re<<endl;
			cout<<"value of image : "<<im<<endl;
			cout<<"A class object = "<<o.re<<endl;
			cout<<"Operator object vlaue "<<obj.re<<endl;
			o.re=re+obj.re;
			o.im=im+obj.im;
			cout<<"finaly vlaue of real "<<re<<endl;
			cout<<"finaly value of imag : "<<im<<endl;
			cout<<"sum = "<<re+im<<endl;
			return o;
		}
};
int main(){
	A ob(10,5),oo(2,4);
	A sum=ob+oo;
}
