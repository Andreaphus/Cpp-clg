#include<iostream>
using namespace std;
class Demo
{
private:
int n;
public:
void input()
{
cout<<"Enter Number\n";
cin>>n;
}

void factorial()
{
int a;
a=1;
while(n>0)
{
a=a*n;
n--;
}
cout<<a<<"\n";
}

void reverse()
{
int r;
r=0;
while(n>0)
{
r=r*10+(n%10);
n=n/10;
}
cout<<"Reverse is "<<r<<"\n";
}

void pallendrome()
{
int r,n1;
r=0;
n1=n;
while(n>0)
{
r=r*10+(n%10);
n=n/10;
}
if(r==n1)
{
cout<<"Number is pallendrome\n";
}
else
{
cout<<"Number is not pallendrome\n";
}
}

void armstrong()
{
int r,sum,n1;
n1=n;
while(n1>0)
{
r=n1%10;
sum=sum+r*r*r;
n1=n1/10;
}
if(n==r)
{
cout<<"Number is armstrong\n";
}
else
{
cout<<"Number is not armstrong\n";
}
}
};

void main()
{
Demo d;
cout<<"For factorial\n";
d.input();
d.factorial();
cout<<"For reverse\n";
d.input();
d.reverse();
cout<<"For pallendrome\n";
d.input();
d.pallendrome();
cout<<"For Armstrong\n";
d.input();
d.armstrong();

}
