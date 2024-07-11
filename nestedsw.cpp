#include<iostream>
using namespace std;
class A
{
	int n ;
	char y;
	public:
		friend void enter(A &o);
		friend void show(A &o);
		friend void vo(A &o);
};
void enter(A &o){
	cout<<"You are found the Day Name :"<<endl;
	cout<<"Enter the value of x :"<<endl;
	cin>>o.n;
	
	
}
void vo(A &o){
		cout<<"Which vowel do you want to find :"<<endl;
			cin>>o.y;
			switch(o.y){
			
			case 'a':
				cout<<" A is a vowel "<<endl;
					break;
		 case 'e':
				cout<<"E is a vowel "<<endl;
					break;
			case 'i':
				cout<<"O is a vowel "<<endl;
					break;
			case 'o':
				cout<<"I is a vowel "<<endl;
					break;
			case 'u':
				cout<<"U is a vowel "<<endl;
					break;
					defualt :
						cout<<"You are rong input"<<endl;
} 
}
void show(A &o){
	A oo;
	switch(o.n){
		case 1:
			cout<<"Your day sunday:"<<endl;
			vo(oo);
			
			break;
			case 2:
				cout<<"Your day monday :"<<endl;
					vo(oo);
				break;
			case 3:
			cout<<"Your day tuesdat :"<<endl;
				vo(oo);
			break;
			case 4:
			cout<<" Your day Wedbesday:"<<endl;
				vo(oo);
			break;
			case 5:
			cout<<"Your day Thursday"<<endl;
				vo(oo);
			break;
			case 6:
			cout<<"Your day Friday"<<endl;
				vo(oo);
			break;
			case 7:
			cout<<"Your day saturday"<<endl;
			vo(oo);
			break;
			default:
				cout<<"Your Rong input"<<endl;
			
				
			
			
	}
}
int main(){
	A o;
	enter(o);
	show(o);
}

