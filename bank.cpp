#include<iostream>
using namespace std;
class bank{
	int balance=5000,w,a;
	public:
	bank(int a,int b){
			cout<<"Your bank balance = "<<balance<<endl;
			cout<<"Please Enter the Withdwal balance your acount :: "<<endl;
			cin>>w;
			balance=balance-w;
			cout<<" Your current balance : "<<balance<<endl;
			cout<<"Enter the Add balance your acount : "<<endl;
			cin>>a;
			balance=balance+a;
			cout<<"Add Balance and Your current balance : "<<balance<<endl;
		}
};
int main(){
	bank obj(1,2);
	return 0;
}
