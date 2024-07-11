#include<iostream>
using namespace std;
class in{
	int i,j,n;
	public:
		void pattren(){
			cout<<"Enter the number you print the pattren : "<<endl;
			cin>>n;
				int k=1;
				cout<<"Your printed pattren : "<<endl;
			for(i=0;i<n;i++){
				for(j=0;j<=i;j++){
				
					cout<<k;
					k++;
				}
				cout<<endl;
			}
		}
};
class her:public in{
	int n,*a,i;
	public:
		void arr(){
			cout<<"Enter the Size of the array : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Your array number : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			cout<<" Your printed array : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<endl;
			}
		}
};
int main(){
	her obj;
	obj.pattren();
	obj.arr();
}
