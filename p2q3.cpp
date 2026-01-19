#include<iostream>
class bank{
private:
int accnum;
std::string name;
double balance;
public:
void display()
{
std::cout<<"Name:"<<name<<std::endl;
std::cout<<"Account Number"<<accnum<<std::endl;
std::cout<<"Remaining balance:"<<balance<<std::endl;
}
void deposit()
{
double amt;
std::cout<<"Enter amount required to be deposited:"<<std::endl;
std::cin>>amt;
balance=balance+amt;
}
void Withdraw()
{
double wamt;
std::cout<<"Enter amount required to be Withdrawn:"<<std::endl;
std::cin>>wamt;
balance=balance-wamt;
}
void balprint()
{
std::cout<<"Your balance is:-  "<<balance<<std::endl;
}
void input()
{
std::cout<<"Enter your name:-"<<std::endl;
std::cin>>name;
std::cout<<"Enter your Account Number:-"<<std::endl;
std::cin>>accnum;
std::cout<<"Enter your Balance:-"<<std::endl;
std::cin>>balance;

}	
};
int main()
{
bank b;
b.input();
b.display();
b.deposit();
b.Withdraw();
b.balprint();
}