/*
 *  File_name:life.h
 *  Author: Spirit_xc
 *  Data_create: 2012-6-1
 *  Description:
 *
 *  current_version: 12.6.1.1
 */

#ifndef LIFE_H
#define LIFE_H


const int maxrow=20,maxcol=30;

class Life
{

    public:
        void initialize();
        void print();
        void update();
    private:
        int grid[maxrow+2][maxcol+2]; /*让边界各增加一行一列，并让这里面的元素始终是死的，这样在update的时候，计算并不影响结果，而且也可以使用跟其他位置相同的算法计算    */
        int neighbor_count(int row,int col);
};

#endif
