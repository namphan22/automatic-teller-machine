#include<iostream>
#include<windows.h>
#include<string>
#include<stdbool.h>
#include<stdint.h>
#include<conio.h>
#include<time.h>
#include<fstream>// đọc ghi file
#include"C:\Users\lenovo\Workspace\ATM\Header\graphic.h"
#include"C:\Users\lenovo\Workspace\ATM\Header\ReadDataFile.h"
#include"C:\Users\lenovo\Workspace\ATM\Header\login.h"
#include<iomanip>

using namespace std;


int main()
{
 user_account UserAccount[50];
 uint64_t size_var =0;
 uint64_t account_number;
 string user_password;
 uint64_t i;

 /*
 ReadDataFile(UserAccount, size_var);
 cout<<endl;
 cout<<size_var;
 */
 /*
 cout<<"Account number"<<setw(20)<<"Password"<<setw(20)<<"Balance"<<endl;
 
 for(i=0;i<=size_var;++i)
 {
    cout<<UserAccount[i].account_number<<setw(20)<<UserAccount[i].user_password<<setw(20)<<UserAccount[i].balance<<endl;
 }
 */
//wcout<<L"Hello Word";
login(account_number,user_password);

 

}

