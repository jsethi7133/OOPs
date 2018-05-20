//use of constructors
#include<iostream.h>
class complex{
			  int r,c;
			public:
			  complex();
			  complex(int i)
			  {
				 r=i;
				 c=i;
			  }
			  complex(int i,int j)
			  {
				r=i;
				c=j;
			  }
			  void add(complex c1,complex c2)
			  {
				 cout<<c1.r+c2.r<<"+"<<c1.c+c2.c<<"i"<<endl;
			  }
				 };
void main()
{ int r1,r2,c1,c2;
  //complex c3,c4;
  cin>>r1;
  cin>>c1;
  cin>>r2;
  cin>>c2;
  if(r1==c1 && r2==c2)
  {
	 complex c3(r1);
	 complex c4(r2);
	 c3.add(c3,c4);
  }
  else
  {
	complex c3(r1,c1);
	complex c4(r2,c2);
	c3.add(c3,c4);
  }
  }