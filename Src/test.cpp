#include<iostream>
#include<string>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;
#define num 2002
#define pass 123

void ValidAccount()
{
    int input_pass;
    bool isPasswordValid = true;
    int retryPassword =3;
    while (isPasswordValid && retryPassword)
    {
       // system("CLS");
        wcout<<L"Mời bạn nhập mật khẩu";
        
        cin>>input_pass;

        if(input_pass ==pass)
        {
            wcout<<L"Bạn đã nhập chính xác mật khẩu";
            isPasswordValid = false;
        }
        else
        {
            retryPassword--;
            if(retryPassword) wcout<<L"Bạn đã nhập sai mật khẩu";
            else
            {
             wcout<<L"Bạn đã bị khóa vì quá 3 lần nhập";
            
            }

        }
    }


}

int main()
{
    _setmode(fileno(stdout),_O_U16TEXT);
    _setmode(fileno(stdin),_O_U16TEXT);
   
    ValidAccount();


}

