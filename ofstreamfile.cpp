#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int total=0;
class animals{
	
 char nm[20],eyes[20],voice[20];
 public:
 	void cat(){
 		cout<<"Enter the Name of the Animals: "<<endl;
 		cin>>nm;
 		cout<<"Enter the "<<nm<<"Eyes : "<<endl;
 		cin>>eyes;
 		cout<<"Enter the "<<nm<<" voice : "<<endl;
 		cin>>voice;
	 }
	 void dis(){
	 	cout<<"Name of the Animal : "<<nm<<endl;
	 	cout<<nm<<" Eyes  : "<<eyes<<endl;
	 	cout<<nm<<" voice : "<<voice<<endl;
	 	
	 }
	 void get();
	 void  put();
	 
};
animals o;
void animals::get(){
	ofstream ofa;
	ofa.open("animals.dat", ios::in |ios::out | ios::app);
	int choice;
	cout<<"How many Animals record do you want to Enter : "<<endl;
	cin>>choice;
	if(total==0){
		total+=choice;
		for(int i=0;i<choice;i++)
{
	  o.cat();
	  ofa.write((char*)&o,sizeof(o));
	 
	 	}
	 	ofa.close();
		 	}
		 	else{
		 		for(int i=0;i<total;i++){
		 		
		 		ofa.write((char*)&o,sizeof(o));
		 			o.cat();
		 			getch();
				 }
				 total=total + choice;
			 }
	
}
void animals::put(){
	  ifstream ofb;
	  ofb.open("animals.dat",ios::out  | ios::app);
	  while(ofb.read((char*)&o,sizeof(o))){
	  	o.dis();
	  	getch();
	  }
	 // cout<<"Hello word"<<endl;
	  getch();
	  cout<<endl<<"NO More records !!!!"<<endl;
	  ofb.eof();//close the file using the eof() function
}
int main(){
	animals aobj;
	aobj.get();
	aobj.put();
}
