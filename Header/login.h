#ifndef _LOGIN_H
#define _LOGIN_H
#include"C:\Users\lenovo\Workspace\ATM\Header\define_struct.h"
void login(uint64_t &account_number,string &user_password);
bool CheckUserAccount(user_account UserAccount[],uint64_t account_number,string user_password,uint64_t size_var);
void login_password(string &user_password);
string convert(char *pass,uint32_t size );
#endif