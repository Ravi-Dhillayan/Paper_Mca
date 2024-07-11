#include<iostream>
using namespace std;
class base {
	public :
		base(){
			cout<<"This is base class constructor : "<<endl;
		}
	virtual 	~base(){
			cout<<"This is  Base class destructor : "<<endl;
		}
};
class derived1:public base{
	public:
		derived1(){
			cout<<"This is derived1 class constructor : "<<endl;
		}
		~derived1(){
			cout<<"This is derived Class destructor : "<<endl;
					}
};
int main(){
	derived1 *d=new derived1;
	base *b=d;
	delete b;
	getchar();
	return 0;
}

