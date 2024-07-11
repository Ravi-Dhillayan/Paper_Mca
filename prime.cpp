#include<iostream>
using namespace std;
template <class T>
struct fun{
	T a=2,n;
};
class prime {
	 struct fun<int> o;
	 public:
	 	void prim(){
	 		int c=0;
	 		cout<<"How many prime numbers do you want : "<<endl;
	 		cin>>o.n;
	 		cout<<"printed Your prime numbers : "<<endl;
	 			cout<<o.a<<endl;
	 			for(int i=1;i<=o.n;i++){
	 				for(int j=2;j<i;j++){
	 					if(i%j==0){
	 						c++;
	 						break;
						 }
						 
					 }
					 if(c==0 && i!=1){
						 	cout<<i<<endl;
						 }
						 c=0;
				 }
//	 		for(int i=0;i<o.n;i++){
//	 		
//	 			++o.a;
//	 			if(o.a%2!=0){
//	 				cout<<o.a<<endl;
//				 }
//			 }
		 }
};
int main(){
	prime obj;
	obj.prim();
	return 0;
	
}
