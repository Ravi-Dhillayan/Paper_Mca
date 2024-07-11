#include<iostream>
using namespace std;
class A{
	private:
		int real=1,imag;
	public:
		
		A(int i=1,int r=1){
			real=r;
			imag=i;
		}
		A operator+(A const& obj){
			A res;
			cout<<"reAl vAlue "<<real<<endl;
			cout<<" pAse vAlue : "<<res.real<<endl;
			cout<<"OperAtor vAlue : "<<obj.real<<endl;
			cout<<"-------------***********-------------"<<endl;
			cout<<"ImAge vAlue : "<<imag<<endl;
			cout<<" pAse vAlue : "<<res.imag<<endl;
			cout<<"OperAter vAlue : "<<obj.imag<<endl;
			res.real=real+obj.real;
			res.imag=imag+obj.imag;
		return res;
		}
		void show(){
	       		cout<<real<<" i"<<imag<<endl;
		}
};
int main(){
	 A o1(10,2), o2(5,4);
	 A sum=o1+o2;
	 sum.show();
	 return 0;
}
