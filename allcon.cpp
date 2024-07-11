#include<iostream>
using namespace std;
class C{
	int i,j=0,n,s,k=1;
	int t,sa,sum,mul;
	public:
		C()
		{
			cout<<"How many enter the number print do you want ot fibonacci series :: "<<endl;
			cin>>n;
			cout<<"Your fibonacci series printed : "<<endl;
			for(i=0;i<n;i++){
			 cout<<j<<endl;
			 s=j+k;
			 j=k;
			 k=s;
			}
			cout<<"Enter the two number ::"<<endl;
			cin>>t>>sa;
			sum=t+sa;
			cout<<"Sum of two number : "<<sum<<endl;
		}
		C(C &o){
		int ca,cb;
		ca=o.t;
		cb=o.sa;
		mul=ca*cb;
		cout<<"This is copy constructor  : "<<endl;
			cout<<"multiple two number : "<<mul<<endl;
		}
		C(int x,int y){
			int a,b;
			a=x;
			b=y;
			int c=a/b;
			cout<<"A diveded by B = "<<c<<endl;
			
		}
		~C(){
			cout<<"This is Destructor : "<<endl;
		}
};
int main(){
	C ob,obj(10,2);
	C co(ob);
	return 0;
}
