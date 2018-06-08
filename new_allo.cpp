//dynamic allocation using new
#include<iostream.h>
class myclass{
		int a;
		int b;
	  public:
		void input()
		{
		 cin>>a;
		 cin>>b;
		}
		void show()
		{
		 cout<<a<<endl;
		 cout<<b<<endl;
		}
	  };
void main()
{
  myclass &ob=*(new myclass);
  ob.input();
  ob.show();
  myclass ob2;
  ob2.input();
  ob2.show();
  myclass &ob3=ob2;
  ob3.show();
  ob2.show();
}
