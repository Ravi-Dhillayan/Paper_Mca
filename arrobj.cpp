#include<iostream>
using namespace std;
class A{
	int roll_n;
	char name[10];
	public:
		void enter();
		void show();
		
};
void A::enter(){
	cout<<"Enter the name of student :"<<endl;
	cin>>name;
	cout<<"Enter the Roll_no of student : "<<endl;
	cin>>roll_n;
}
void A ::show(){
	cout<<"Name of student  :"<<name<<endl;
	cout<<"Roll_no of studnet :"<<roll_n<<endl;
}
int main(){
	
	int n;
	cout<<"Enter how many Enter the Data for student :"<<endl;
	cin>>n;
	A o[n];
	for(int i=0;i<n;i++){
		o[i].enter();
		o[i].show();
			}
	cout<<":::THUNK YOU:::"<<endl;
	
}
