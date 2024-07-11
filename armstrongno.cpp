#include<iostream>
using namespace std;
class arm{
	int i,n,m=0,t,r;
	public:
		void fun(){
			cout<<"Enter the YOur Number : "<<endl;
			cin>>n;
			t=n;
			while(t!=0){
				r=t%10;
				m=m+r*r*r;
				t=t/10;
				
			}
			if(m==n){
				cout<<"Your "<<m<<" is a Armstrong Number : "<<endl;
			}
			else{
				cout<<"YOur Number is not Armstrong : "<<m<<endl;
			}
		}
};
int main(){
	arm obj;
	obj.fun();
	return 0;
}
