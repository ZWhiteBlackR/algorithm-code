//
// Created by zrzzzlll on 2020/8/7.
//

#ifndef ALGORITHM_CODE_SRC_SORT_SORT_H_
#define ALGORITHM_CODE_SRC_SORT_SORT_H_
/**
 * 排序算法的头文件
 */
#include <vector>
namespace alcode{
    class Sort{
        public:
            using size_type = std::vector<int>::size_type;
            /*
             * 冒泡排序
             * 时间复杂度O(n^2)
             * 空间复杂度O(1)
             * 稳定的排序
             */
            static void BubbleSort(std::vector<int>&array);
            static void println(std::vector<int>&array);
        private:
    };
}
#endif //ALGORITHM_CODE_SRC_SORT_SORT_H_
