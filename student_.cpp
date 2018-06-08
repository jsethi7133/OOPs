//class implementation
#include<iostream.h>
class student{
			  char name[20];
			  int rno;
		  public:
			  void input();
			  void show();
				};

void student::input()
{
  cin>>name;
  cin>>rno;
}

void student::show()
{
  cout<<name<<endl;
  cout<<rno<<endl;
}

void main()
{
  student s[2];
  for(int i=0;i<2;i++)
  {
  s[i].input();
  s[i].show();
  }
}
