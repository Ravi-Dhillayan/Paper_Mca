class st{
  int roll_no;
  char name[10];
  public:
  	void get();
  	 void set();
  	

};
void st::get(){
	cout<<"Enter the name of student : "<<endl;
	cin>>name;
	cout<<"Enter the Roll_no of student :"<<endl;
	cin>>roll_no;
	
}
void st :: set(){
	cout<<"Student name : "<<name<<endl;
	cout<<"student Roll_no :"<<roll_no<<endl;
	}
