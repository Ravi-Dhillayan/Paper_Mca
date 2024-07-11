#include<iostream>
using namespace std;
template <class T ,class C,class S>
struct fun{
	T n;
	C nm[20];
	S voice;
	
};
class animal{
	struct fun<int,char,string> o;
	public:
	void anm(){
			cout<<"how many Enter the recorted do you want "<<endl;
		cin>>o.n;
		int i;
		int *a=new int[o.n];
		for(i=0;i<o.n;i++){
			cout<<"Enter the Name of the animal : "<<endl;
			cin>>o.nm;
			cout<<"Enter the voice of "<<o.nm<<" Animal "<<endl;
			cin>>o.voice;

			cout<<"Name of the Animal : "<<o.nm<<endl;
			cout<<o.nm<<" voice ; "<<o.voice<<endl;
		}
	}
};
int main(){
	animal obj;
	obj.anm();

	return 0;
}

