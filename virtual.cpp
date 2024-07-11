#include<iostream>
using namespace std;

//class A {
//public:
//    char nm[30], voice[90];
//
//    void enter() {
//        cout << "Enter the Name of the Animal : " << endl;
//        cin >> nm;
//        cout << "Enter the voice of the Animal : " << endl;
//        cin >> voice;
//        
//    }
//
//    virtual void dis() = 0;
//};
//
//class B : public A {
//public:
//    void dis() override {
//        cout << "Name of the Animal : " << nm << endl;
//        cout << "Voice of the Animal : " << voice << endl;
//    }
//};
//
//int main() {
//    B bo;
////    A ao;
//    bo.enter();
//    bo.dis();
//
//    return 0;
//}

class base{
	public:
		virtual
		 void show(){
			cout<<"This is Base class : "<<endl;
			
		}
};
class derived1:public base{
	 public :
	 	void show(){
	 		cout<<"This is Derived1 class : "<<endl;
	 		
		 }
};
class derived2:  public base{
	public:
		void show(){
			cout<<"This is Derived2 class : "<<endl;
		}
};
int main(){
	base *b ,bo;
	bo.show();
	derived1 da;
	
	derived2 db;

	b=&da;
	b->show();
	
	b=&db;
	b->show();
	
}

