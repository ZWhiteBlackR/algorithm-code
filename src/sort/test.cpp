//
// Created by zrzzzlll on 2020/8/7.
//
#include "sort.h"
#include <vector>
#include <iostream>
using namespace std;
using namespace alcode;
int main(int argc,char* argv[]) {
    /**
     * 主要是对排序算法进行测试
     */
    cout << "Hello world" << endl;
    int size = 50;
    vector<int>array(size);
    for(int i = 0;i < array.size();i++){
        array[i] = size - i;
    }
    cout << "排序前顺序:" << endl;
    Sort::println(array);
    Sort::BubbleSort(array);
    cout << "冒泡排序后结果:" << endl;
    Sort::println(array);
    return 0;
}