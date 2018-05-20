//object as an array
#include<iostream.h>
#include<stdio.h>
class books{
			char title[20];
			char author[50];
			float price;
	  public:
			void input()
			{
			  gets(title);
			  gets(author);
			  cin>>price;
			}
			void show()
			{
			  cout<<title<<endl;
			  cout<<author<<endl;
			  if(price>=1000)
				 {
					price=price-(0.1*price);
					cout<<price;
				  }
				else
				  cout<<price;
			 }
			  };
void main()
{
  books b[2];
  for(int i=0;i<2;i++)
  {
	 b[i].input();
	 b[i].show();
	}
}
