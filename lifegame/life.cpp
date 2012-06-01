/*
 * File_name:   life.cpp
 * Author:  Spirit_xc
 * Date_created: 2012-6-1
 * Description: 
 *
 * current_version:12.6.1.1
 *
 */

#include "life.h"
#include "utility.h"

int Life::neighbor_count(int row,int col)
{
    int i,j;
    int count=0;
    for(i=row-1;i<=row+1;i++)
        for(j=col-1;j<col+1;j++)
            count+=grid[i][j];
    count-=grid[row][col];

    return count;
}

void Life::update()
{
    int row,col;
    int new_grid[maxrow+2][maxcol+2];
    for(row=1;row<=maxrow;row++)
    {
        for(col=1;col<=maxcol;col++)
        {
            switch(neighbor_count(row,col))
            {
                case 2:
                    new_grid[row][col]=grid[row][col];
                    break;
                case 3:
                    new_grid[row][col]=1;
                    break;
                default:
                    new_grid[row][col]=0;
                    break;
            }
        }
    }
    for(row=1;row<=maxrow;row++)
    {
        for(col=1;col<=maxcol;col++)
        {
            grid[row][col]=new_grid[row][col];
        }
    }
}

void Life::initialize()
{
    int row,col;
    for(row=0;row<=maxrow+1;row++)
    {
        for(col=0;col<=maxcol+1;col++)
        { 
            grid[row][col]=0;
        }
    }

    cout<<"input the list of living cell"<<endl;
    cout<<"-1 -1 means end input"<<endl;
    cin>>row;
    cin>>col;
    while(row!=-1 || col!=-1)
    {
        if(row>=1 && row<=maxrow)
            if(col>=1 && col<=maxcol)
            {
                grid[row][col]=1;
            }
            else
                cout<<"col out of range"<<endl;
        else
            cout<<"row out of range"<<endl;
        cin>>row;
        cin>>col;
    }
}

void Life::print()
{
    int row,col;
    for(row=1;row<=maxrow;row++)
    {
        for(col=1;col<=maxcol;col++)
        {
            if(grid[row][col]==1)
                cout<<"*";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    cout<<endl;
}
