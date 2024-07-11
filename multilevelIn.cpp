#include<iostream>
using namespace std;

	template <class T ,class S>
	struct fun{
	T eyes,feet ,ears;
	S nm[20],voices[20];	
	};
	class animals{
		struct fun<int ,char> o;
		public:
			 void cat(){
			 	cout<<"Enter Name of the animal : "<<endl;
			 	cin>>o.nm;
			 	cout<<"Enter "<<o.nm<<" Animal eyes = "<<endl;
			 	cin>>o.eyes;
			 	cout<<"Enter "<<o.nm<<" Animal feet = "<<endl;
			 	cin>>o.feet;
			 	cout<<"Enter "<<o.nm<<" Animal ears = "<<endl;
			 	cin>>o.ears;
			 	cout<<"Enter "<<o.nm<<" Animal voices = "<<endl;
			 	cin>>o.voices;
			 	
			 }
	virtual	 void cat(int a){  /// overloding function 
		 	 cout<<"Your Animal Name  : "<<o.nm<<endl;
		 	 cout<<o.nm<<" Animal eyes : "<<o.eyes<<endl;
		 	 cout<<o.nm<<" Animal feet : "<<o.feet<<endl;
		 	 cout<<o.nm<<" Amimal ears :  "<<o.ears<<endl;
		 	 cout<<o.nm<<" Animal voice : "<<o.voices<<endl;
		 	 
		 }
};

 class bogs : public animals{
 		int  eyes,feet ,ears;
	char nm[20],voices[20];
	public:
		void cat(){
		  cout<<"@Enter the name of the Animal"<<endl;
		  cin>>nm;
		  cout<<"Enter "<<nm<<" Animal eyes : "<<endl;
		  cin>>eyes;
		  cout<<"Enter "<<nm<<" Animal feet : "<<endl;
		  cin>>feet;
		  cout<<"Enter "<<nm<<" Animal ears : "<<endl;
		  cin>>ears;
		  cout<<"Enter "<<nm<<" Animal voice : "<<endl;
		  cin>>voices;
		  
		}
	 void dis(){
	 	cout<<"Your Animal Name : "<<nm<<endl;
	 	cout<<nm<<" eyes : "<<eyes<<endl;
	 	cout<<nm<<" feet : "<<feet<<endl;
	 	cout<<nm<<" ears  : "<<ears<<endl;
	 	cout<<nm<<" voice  "<<voices<<endl;
	 }
 };
 class end:public bogs{
 	public:
 	end(){
 		cout<<"----------*************---------------"<<endl;
	 }
	 ~end(){
	 	cout<<"*****************THANKS END OF POGRAM****************"<<endl;
	 }
 };
int main(){
	
	
	end obj;
	bogs *a;
	a=&obj;
	a->cat();
    a->dis();
   animals *b;
   b=&obj;
    b->cat();
    b->cat(1);
    return 0;
}
