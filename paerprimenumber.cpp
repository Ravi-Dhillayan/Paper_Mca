#include<iostream>
using namespace std;
class prim{
	int i,j,c=0,n;
	public:
		 prim(){
			cout<<"Enter the n number your want to prime number : "<<endl;
			cin>>n;
			for(i=1;i<=n;i++){
				for(j=2;j<i;j++){
					if(i%j==0){
						c++;
						break ;
					}
					
				}
				if(c==0 && i!=1){
					cout<<i<<endl;
				}
				c=0;
			}
		}
		~prim(){
			cout<<"This is a destructor called in class Prim: "<<endl;
			cout<<"End of the program : Think You ::"<<endl;
		}
};
int main(){
	prim obj;
	return  0;
}
