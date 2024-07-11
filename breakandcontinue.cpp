#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Enter the n number :"<<endl;
	cin>>n;
	cout<<"It is a break statement :"<<endl;
	for(i=0;i<n;i++){
		if(i==5){
			break;
				continue;
		}
	
		cout<<i<<endl;
	}
	cout<<"It is Continue Statement :"<<endl;
		for(i=0;i<n;){
		if(i==5){
			i++;
		continue;
				
		}
	
	
		cout<<i<<endl;
			i++;
	}
}
