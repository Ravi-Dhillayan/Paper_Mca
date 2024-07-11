#include<iostream>
using namespace std;
template <class T>
struct fun
{
	T n;
};
class A{
		public:
	struct fun<int> o;
	int min,max;
	int i,*a;

		int x,y,z;
		void get(){
		 cout<<"Enter how many want numbers to enters : "<<endl;
		 cin>>o.n;
		 cout<<"Enter the numbers : "<<endl;
		 a=new int[o.n];
		 for( i=0;i<o.n;i++){
		 	cin>>a[i];
			 		 }
		 cout<<"printed Number : "<<endl;
		 for( i=0;i<o.n;i++){
		 	cout<<a[i]<<endl;
		 }	
		}
		void get(int ai){
			min=a[0];
			max=a[0];
		 for(i=0;i<o.n;i++){
		 	if(a[i]<min){
		 		min=a[i];
			 }
			 if(a[i]>max){
			 	max=a[i];
			 }
		 }
		 cout<<"minimum value : = "<<min<<endl;
		 cout<<"Maximum value : = "<<max<<endl;
		}
};
class B : public A {
    int a, b, c;

public:
    void get() {  // overriding function 
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
        c = a + b;
        cout << "Sum of two numbers: " << c << endl;
    }

    // Friend function to perform multiplication
    friend void funn(A &o);
};
void funn(A &o){
	int n;
	cout<<"How many numbers do you nedd to multiple "<<endl;
	cin>>n;
	o.a=new int[n];
	cout<<"you are Enter the numbers "<<endl;
	for(int i=0;i<n;i++){
		cin>>o.a[i];
	} 
	int mult=1;
	for(int i=0;i<n;i++){
		mult=mult*o.a[i];
	}
	cout<<"Multiple to Your All numbers : "<<mult<<endl;
	
}
class C : public B{
	int i,j,n;
	int *a;
	public:
		void patt(){
			cout<<" How many lines You are pattren : "<<endl;
			cin>>n;
		
			cout<<"Your pattren : "<<endl;
			for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				cout<<j;
			}
			cout<<endl;
			}
			
		}
};
  int main(){
     C bo;
//     A ao,*p;
//     p=&bo;
//     p->get();
//     p->get(1);
//     bo.get();
//      funn(ao);
      bo.patt();
     
  	return 0;
  }


