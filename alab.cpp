#include<iostream>
using namespace std;
template <class T>
struct f{
	T min,max;
};
class mx{
	struct f<int> o;
	public:
		
		void sm(){
			int i, *a,n;
			cout<<"Enter the n number : "<<endl;
			cin>>n;
			a=new int[n];
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			
	
			o.min=a[0];
			o.max=a[0];
			for(i=0;i<n;i++){
				if(a[i]<o.min){
					o.min=a[i];
				}
				if(a[i]>o.max){
					o.max=a[i];
				}
			}
			cout<<"You are Enter  minimam value :  "<<o.min<<endl;
			cout<<"You are Enter the maximam value : "<<o.max<<endl;
	}
};
int main(){
	mx obj;
	obj.sm();
//	obj.sl();
}
//#include<iostream>
//using namespace std;
//template <class T >
//struct fu{
//	T n;
//};
//class fib{
//	struct fu<int> o;
//	public:
//		void fb(){
//		 int i,j=0,k=1;
//		 cout<<"Enter the your print fibonannice series : "<<endl;
//		 cin>>o.n;
//		 for(i=0;i<o.n;i++){
//		 	cout<<j<<endl;
//		 	int s=j+k;
//		 	j=k;
//		 	k=s;
//		 }
//		}
//};
//int main(){
//	fib obj;
//	obj.fb();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//template <class T,class S>
//struct fun{
//	T n, s=0,d;
//};
//class A{
//	struct fun<int,char> o;
//	public:
//		void get(){
//			cout<<"Enter the n number : "<<endl;
//			cin>>o.n;
//			for(int i=0;i<=o.n;i++){
//				o.d=o.n%10;
//				o.s=o.s+o.d;
//				o.n=o.n/10;
//			}
//		}
//		void dis(){
//			cout<<"sum : = "<<o.s<<endl;
//		}
//};
//int main(){
// A obj;
// obj.get();
// obj.dis();
//}
