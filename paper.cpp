using namespace std;
#include<iostream>
           // WAp single  and multiple or multilevel inheritance
  class ar{
  	int ar[],ma[],n;
  	public:
  		void aenter(){
  			cout<<"Enter the size of array"<<endl;
  			cin>>n;
  			int marr[n];
  			for(int i=0;i<n;i++){
  			cout<<"Enter the Array Element "<<i<<endl;
			  cin>>marr[i];
			  	
			  }
				for(int i=0;i<n;i++){
					cout<<"Array Element :"<<marr[i]<<endl;
				}
		  }
  };
  class Animal:public ar{  //Single level inheritance
  	public:
  	void  sound(){
  		cout<<"Lion is a Animal : "<<endl;
  		
	  }
  };
  class sum:public Animal{  // multiple inheritance 
  	int x,y,z;
  	public :
//  		void su(){
//		  cout<<"Enter the Two number "<<endl;
//  			cin>>x>>y;
//  			z=x+y;
//  			cout<<"sum of Two number :"<<z<<endl
//  			
//	 }
void su() {
        cout << "Enter the Two numbers: " << endl;
        cin >> x >> y;
        z = x + y;
        cout << "Sum of Two numbers: " << z << endl;
    } 
  };
  
  class sub:public Animal {  // multilevel inheritance 
  
  	 int a,b,c;
  	 public:
  	 	void su(){
  	 		cout<<"Enter the two number  you Subtract : "<<endl;
  	 		cin>>a>>b;
  	 			c=a-b;
  	 			cout<<"Subtract two number :"<<endl;
  	 			
		   }
  	 	
  };
  int main(){
//  	ar o;
//  	o.aenter();
   
  sum oo;
  oo.aenter();
  oo.sound();
  sub o;
  o.aenter();
  
  

  }
//       WAP type of constructor
// class ca{
// 	int a,b,c ,sum;
// 	public:
// 		ca()
// 		{
// 			cout<<"This is a constructor"<<endl;
// 			cout<<"Enter the 1st number :"<<endl;
// 			cin>>a;
// 			cout<<"Enter the 2nd number : "<<endl;
// 			cin>>b;
// 			c=a*b;
// 			cout<<"Multiple of two number :"<<c<<endl;
// 			
//		 }
//		 ~ca(){
//		 	cout<<"This is a parametrized constructor ::"<<endl;
//		 }
//		 ca(ca &o){
//		 	cout<<"This is a copy  constructor ::"<<endl;
//		 	sum=o.a+o.b;
//		 	cout<<"sum two number"<<sum<<endl;
//		 	
//		 }
//		 
//		 
// };
//   // WAP local and Global variable 
//    int a =10 ,b=20;   // It is Global variable 
// int main(){
// 	// It is local variable 
// 	 int c,d;
// 	  c=a+b;
// 	  
// 	  cout<<"sum of two nubmer :"<<c<<endl;
// 	  
// 	   d=a*b;
// 	    cout<<"Multiple two number "<<d<<endl;
// 	  
//// 	ca oc;
//// 	ca oc1=oc;
// }
////#include"paper.h"
//#include"paperCNR.h"
//    // WAP array for class object
// class Aa{
//   char a1[10],a2[12];
//   public:
//   	Aa(){
//   		cout<<"This is  a program show the name of animal"<<endl;
//	   }
//	   void aenter();
//	   void ashow();
// };
// void Aa::aenter(){
// 	cout<<"Enter the 1st Name of Animal :"<<endl;
// 	cin>>a1;
// 	cout<<"Enter the 2nd Name of Animal :"<<endl;
// 	cin>>a2;
// 	
// }
// void Aa::ashow(){
// 	cout<<"Your 1st Animal :"<<a1<<endl;
// 	cout<<"YOur 2nd Animal :"<<a2<<endl;
// }
//
//int main(){
//	cout<<"Enter the N number for You are Run this program"<<endl;
//	
//	int n;
//	cin>>n;
//	Aa o[n];
//	for(int i=0;i<n;i++)
//	{
//		o[i].aenter();
//		o[i].ashow();
//	}
////	B obj;
////	obj.enter();
////	obj.show();
//st s;
//s.get();
//s.set();
//
//}
