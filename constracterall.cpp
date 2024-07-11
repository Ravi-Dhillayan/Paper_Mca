#include<iostream>
using namespace std;
class con{
   int s,r, a,b,c;
   public:
   	con(){
   		cout<<"Enter the two number "<<endl;
   		cin>>s>>r;
   		cout<<"This is constracter : "<<endl<<"**********--------*******";
	   }
	   con(int x,int y){
	  a=x;
	  b=y;
	  c=a+b;
	  cout<<"Sum of two number : "<<c<<endl;
	  cout<<"This is parimeteries constracter : "<<endl<<"-------------************-------------";
	   }
	con(con &o){
		int u,v,m;
		u=o.s;
		v=o.r;
		m=u*v;
		cout<<"Multiple two number : "<<m<<endl;
		cout<<"It is copy constracter : "<<endl;
	}
~con(){
	cout<<"-----------***********---------"<<endl<<"IT is disconstracter : "<<endl;
	cout<<"End of program : "<<endl;
}
};
int main(){
	con o,obj(2,4);
	con A(o);
	return 0;
}
