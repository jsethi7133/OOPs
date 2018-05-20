//copy constructor
#include<iostream.h>
class myclass{
		 int a,rno;
		public:
		 myclass(){};
		 myclass(myclass &s)
		 {
		  cout<<"Copy"<<endl;
		  a=s.a;
		  rno=s.rno;
		 }
		 void input()
		 {
			cin>>a;
			cin>>rno;
		  }
		 void display()
		 {
		  cout<<a<<endl;
		  cout<<rno<<endl;
		 }
				  };
void main()
{
 myclass s1;
 s1.input();
 s1.display();
 myclass s2(s1);
 s2.display();
 }