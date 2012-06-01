/* 
 * File_name:   game.cpp
 * Author:  Spirit_xc
 * Date_created: 2012.6.1
 * Description: 
 *
 *
 * current_version: 12.6.1.1
 */

#include "utility.h"
#include "life.h"

int main()
{
    Life configuration;
    configuration.initialize();
    configuration.print();
    cout<<"continue?"<<endl;
    while(user_says_yes())
    {
        configuration.update();
        configuration.print();
        cout<<"continue?"<<endl;
    }
    return 0;
}



