#include<iostream>
using namespace std;
template <class T>
struct fun{
	T c=0,n;
};
class prime{
	struct fun<int> o;
	public:
		public:
			void prim(){
			 cout<<"How many prime's numbers do you want : "<<endl;
			 cin>>o.n;
			 cout<<"printed  Your prime numbers 1 to :  "<<o.n<<endl;
			 for(int i=1;i<o.n;i++){
			 	for(int j=2;j<i;j++){
			 		if(i%j==0){
			 			o.c++;
			 			break;
					 }
				 }
				 if(o.c==0 && i!=1){
				 	cout<<i<<endl;
				 }
			  o.c=0;	 
			 }
			}
};
int main(){
	prime obj;
	obj.prim();
}
