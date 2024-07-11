#include<iostream>
using namespace std;
class from{
	char str[20];
	int a=10,b=20;
	public:
//		formatted input & output
void chang(){
	int a=2,b=8,c,d;
	char str[30];
	sprintf(str,"a=%d or b=%d ",a,b);
	printf("%s\n ",str);
//	printf(" a=%d or b=%d");
	sscanf(str,"a=%d and b=%d",&c,&d);
	printf("c=%d and d=%d",c,d);
}
	void enter(){
		printf("Enter the two number : \n ");
	scanf("%d %d",&a,&b);
	sprintf(str,"%d and %d is even number : ",a,b);
	printf("%s",str);
	}
//	unformatted input & output 
	from(){
		char ch;
		printf("Enter the character  : ");
		ch=getchar();
		printf("print your character ");
		putchar(ch);
	}
};
int main(){
	from obj;
	obj.chang();
//	obj.enter();
}
//class form{
//	char str[50];
//	int a=2,b=8;
//	public:
//		form(){
//			sprintf(str,"%d or %d is even number : ",a,b);
//			printf("%s\n",str);
//			
//		}
//		void cha(){
//			char ch;
//			printf("Enter the character : ");
//			ch=getchar();
//			cout<<"printed the character : "<<endl;
//			
//			putchar(ch);
//		}
//};
//int main(){
//	form o;
//	o.cha();
//	return 0;
//}
