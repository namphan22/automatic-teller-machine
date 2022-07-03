#include<iostream>
#include"C:\Users\lenovo\Workspace\ATM\Header\ReadDataFile.h"
#include<stdbool.h>
#include<fstream>// đọc ghi file

bool ReadDataFile(User_Account UserAccount[],uint64_t &size_var)
{
    fstream FILE_IN;
    FILE_IN.open("C:\\Users\\lenovo\\Workspace\\ATM\\Data\\data_user.txt",ios ::in);
    uint32_t i=0;
    while (!FILE_IN.eof())
    {
     
        FILE_IN >> UserAccount[i].account_number;
        FILE_IN >> UserAccount[i].user_password;
        FILE_IN >> UserAccount[i].balance;
        ++i;

    }
    size_var = i-1;
    FILE_IN.close();
   
    return 1;
    
}

