#include<iostream>
class grade{
private:
std::string name;
int rollno,marks1,marks2,marks3;
public:
void input()
{
std::cout<<"Enter students name:"<<std::endl;
std::cin>>name;
std::cout<<"Enter students Roll Number:"<<std::endl;
std::cin>>rollno;
std::cout<<"Enter Marks of subject 1:"<<std::endl;
std::cin>>marks1;
std::cout<<"Enter Marks of subject 2:"<<std::endl;
std::cin>>marks2;
std::cout<<"Enter Marks of subject 3:"<<std::endl;
std::cin>>marks3;
}
void display()
{
std::cout<<"Name of student is:-"<<name<<std::endl;
std::cout<<"Roll number of student is:-"<<rollno<<std::endl;
std::cout<<"Marks obtained by student is:-"<<marks1<<std::endl<<marks2<<std::endl<<marks3<<std::endl;
}
int total()
{
    int tot;
tot=marks1+marks2+marks3;
return tot;
}
void average()
{
double avg;
int t=total();
avg=t/3.0;
std::cout<<"The Average is:-"<<avg<<std::endl;
}
};

int main()
{
grade s1,s2,s3,s4,s5;
s1.input();
s2.input();
s3.input();
s4.input();
s5.input();
s1.display();
s2.display();
s3.display();
s4.display();
s5.display();
s1.average();
s2.average();
s3.average();
s4.average();
s5.average();
} 
