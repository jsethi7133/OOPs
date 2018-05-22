//static member and class
#include<iostream.h>
class myclass{
		static int count;
		int count1;
	public:
		myclass()
		{
		count1=0;
		}
		static void show()
		{
		  cout<<count<<endl;
		}
		void show1()
		{
		cout<<count1<<endl;
		}
		void set(int i)
		{
		 count=i;
		 count1=i;
		 }
		};
int myclass::count=10;
void main()
{
 myclass ob1,ob2;
 ob1.show();
 ob1.show1();
 ob2.set(5);
 ob2.show();
 ob2.show1();
 ob1.show();
 ob1.show1();
}


