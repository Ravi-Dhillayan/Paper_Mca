class A{
	public:
	A(){
		cout<<"Start the program ::"<<endl;
	}

	public:
		friend class B;
};
class B:public A{
		int a,b,c;
	public:
	  void enter(){
	  	cout<<"Enter the two number :"<<endl;
	cin>>a;
	cin>>b;
	  }
	  void show(){
	cout<<"Sum of two number : "<<endl;
	c=a+b;
	cout<<c<<endl;
}
	 
};

