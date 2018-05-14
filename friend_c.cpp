//friend function and class
#include<iostream.h>
class add{
	  int a,b;
	 public:
	  friend int sum(add x);
	  void set(int i,int j)
	  {
		a=i;
		b=j;
	  }
	  friend class show;
	 };
int sum(add x)
{
 return x.a+x.b;
}
class show{
	public:
	 show1(add x)
	{
	cout<<x.a<<endl;
	cout<<x.b<<endl;
	}
	};
void main()
{
  add ob;
  ob.set(4,5);
  cout<<sum(ob)<<endl;
  show s;
  s.show1(ob);
 }