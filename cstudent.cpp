#include<iostream>
using namespace std;
class stu{
		public:	
	char nm[20],roll_no[20],cls[20];

	friend void enter(stu &o);
		friend void show(stu & o);
		
};
void enter(stu &o){
	cout<<"Enter the Name of studnet :: "<<endl;
	cin>>o.nm;

	cout<<"Enter the class of student : "<<endl;
	cin>>o.cls;
	cout<<"Enter the roll_no of student : "<<endl;
	cin>>o.roll_no;
	
	}
	void show(stu &o){
		cout<<"Name of the student : "<<o.nm<<endl;
		cout<<"class of the student : "<<o.cls<<endl;
		cout<<"Roll_no of the student : "<<o.roll_no<<endl;
	}
	int main(){
		stu ob;
		enter(ob);
		show(ob);
	}
