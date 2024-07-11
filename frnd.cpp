#include<iostream>
using namespace std;
class frd {
		public :
	int n;

	frd(){
		cout<<"Start the Program : "<<endl;	
	}
	friend class frd1;	
}; 
class frd1 {
	public:
		frd1(){
			cout<<"Your are code programmer : "<<endl;
		}
		friend void get(frd &o);
		friend void dis();
};
void get (frd &o){
	 int i,j=0,k=1,s;
	 cout<<"Enter the your are print fiboannic series :"<<endl;
	 cin>>o.n;
	 cout<<"Your printed finboannic series : "<<endl;
	 for(i=0;i<o.n;i++){
	 	cout<<j<<endl;
	 	s=j+k;
	 	j=k;
	 	k=s;
	 }
	 
}
int main(){
	frd obj;
	get(obj);
	}
