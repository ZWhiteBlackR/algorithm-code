//
// Created by zrzzzlll on 2020/8/7.
//

#include "sort.h"
#include <iostream>
using namespace std;
//冒泡排序
void alcode::Sort::BubbleSort(std::vector<int> &array) {
    size_type start = 0,end = array.size();
    //长度为0或者1直接返回
    if(end == 1 || end == 0){
        return ;
    }
    for(size_type i = 0;i < end - 1;i++){
        for(int j = 0;j < end -1;j++){
            if(array[j] > array[j+1]){
                std::swap(array[j],array[j+1]);
            }
        }
    }
}
void alcode::Sort::println(std::vector<int> &array) {
    for(size_type i = 0;i < array.size();i++){
        if(i) cout << " ";
        cout << array[i];
    }
    cout << endl;
}

