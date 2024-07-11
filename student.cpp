#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int total =0;
	 template <class T,class S>
 struct fun{
 	T nm[20],roll_no[20],ad[20],st[20],pin[20];
 	S n;
 };
class stu{
	public:
    struct fun<char,int> o;
    void enter(){
    
    		cout<<"Enter the name of student : "<<endl;
    		cin>>o.nm;
    		cout<<"Enter the Roll_no of student : "<<endl;
    		cin>>o.roll_no;
    		cout<<"Enter the address of the student : "<<endl;
    		cin>>o.ad;
    		cout<<"Enter the state of the student : "<<endl;
    		cin>>o.st;
    		cout<<"Enter the pincode of the student : "<<endl;
    		cin>>o.pin;
    		
		
	
	}
		void show();
		friend void get(stu &b);
		friend void put(stu b);
};
stu so;
void stu::show(){
	cout<<"Name of Student : "<<o.nm<<endl;
	cout<<"Roll_no of student : "<<o.roll_no<<endl;
	cout<<"Address of the student : "<<o.ad<<endl;
	cout<<"State of the student : "<<o.st<<endl;
	cout<<"Pincode of the student : "<<o.pin<<endl;
}
void get(stu &b){
	ofstream ofa;
	ofa.open("st.dat",ios::in | ios::out | ios::app);
	so.enter();
	ofa.write((char*)&so, sizeof(so));
	ofa.eof();
	
}
void put(stu b){
	ifstream ofb;
	ofb.open("st.dat",ios::in | ios::out | ios::app);
	while(ofb.read((char*)&so,sizeof(so))){
		so.show();
		getch();
	}
	cout<<"NO more records ! "<<endl;
	ofb.close();
   getch();
	
}
int main(){
	stu obj[20];
	cout<<"How many  this code do you want run : "<<endl;
	int choice;
	cin>>choice;
//	obj=new int[choice];
	for(int i=0;i<choice;i++){
//		obj[i].get();
		get(obj[i]);
	}
}
