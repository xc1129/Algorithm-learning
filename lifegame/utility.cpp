/*
 * File_name: utility.cpp
 * Author:  Spirit_xc
 * Date_created: 2012.6.1
 * Description: 
 *
 * current_version: 12.6.1.1
 *
 *
 */

#include "utility.h"

bool user_says_yes()
{
    char c;
    bool initial_response=true;
    do
    {
        if(initial_response)
            cout<<"(y,n)?"<<flush;
        else
            cout<<"Respond with either y or n:"<<flush;
        do
        {
            c=cin.get();
        }while(c=='\n' || c==' ' || c=='\t');
        initial_response=false;
    }while(c!='y' && c!='Y' && c!='n' && c!='N');
    return (c=='y' || c=='Y');
}
