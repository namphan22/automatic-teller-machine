#include<iostream>
#include<conio.h>
#include<stdbool.h>
#include"C:\Users\lenovo\Workspace\ATM\Header\login.h"
void login(uint64_t &account_number,string &user_password)
{
    cout<<"Enter account number";cin>>account_number;
    cout<<"Enter your password";
    login_password(user_password);
    

}
bool CheckUserAccount(User_Account UserAccount[],uint64_t account_number,string user_password,uint64_t size_var)
{

    
}
void login_password(string &user_password)
{
 char buffer_pass[20];
 char ch;
 bool Enter = false;
 uint32_t i=0;
 while (!Enter)
 {
    ch = _getch();
    if(ch>='0' && ch <='9')
    {
      buffer_pass[i]=ch;
      cout<<"*";
      ++i;

    }
    if(ch =='\b') // space key event 
    {
        cout<<"\b \b";
        --i;

    }
    if(ch == '\r')
    {
        Enter = true;
    }
   
 }
 //convert(buffer_pass,i);
 cout<<endl;
 cout<<i<<endl;
 cout<< convert(buffer_pass,i);
 
 
}
string convert(char *pass,uint32_t size )
{
    uint32_t i;
    string s="";
    for(i=0;i<size;++i)
    {
        s = s+ *(pass+i);

    }
    return s;
}