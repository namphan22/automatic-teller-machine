#ifndef __DEFINE_STRUCT_H
#define __DEFINE_STRUCT_H
#include<stdint.h>
#include<string>
using namespace std;
typedef struct User_Account{
    uint64_t account_number;
    string user_password;
    string balance;
}user_account;
#endif