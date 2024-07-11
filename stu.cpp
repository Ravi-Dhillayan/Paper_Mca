#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int total=0;
class stu{
	char nm[20],roll_no[20];
	public:
		void get(){
			cout<<"Enter the Name of student : "<<endl;
			cin>>nm;
			cout<<"Enter the Roll_no of student : "<<endl;
			cin>>roll_no;
			
		}
		void put(){
			cout<<"Name of the student : "<<nm<<endl;
			cout<<"Roll_no of the student : "<<roll_no<<endl;
			
		}
	friend 	void enter(stu & so);
		 void show();
};
stu o;
void enter(stu &so){
ofstream ofa;
	 int choice;
	 
	 ofa.open("std.dat",ios::in | ios::app);
	 cout<<"How many Enter the record's of studnet : "<<endl;
	 cin>>choice;
	 if(total==0){
	 	total=total+choice;
	 	for(int i=0;i<total;i++){
	 		ofa.write((char*)&o,sizeof(o));
	 		o.get();
	 		getch();
		 }
		 getch();
		 ofa.close();
		 
	 }
	 else{
	 	 total=total+choice;
	 	for(int i=0;i<total;i++){
	 		ofa.write((char*)&o,sizeof(o));
	 		o.get();
	 		getch();
		 }
		
		 getch();
		 ofa.close();
	 }
}
void stu::show(){
	ifstream ofb;
	ofb.open("std.dat",ios::in | ios::out | ios::app);
	while(ofb.read((char*)&o,sizeof(o))){
//	while(ofb.read((char*)&o,sizeof(vo))){
		o.put();
		getch();
	}
	cout<<"NO more records!!!"<<endl;
	ofb.close();
}
int main(){
	stu obj;
	enter(obj);
	obj.show();
	return 0;
}

