#include <stdio.h>  // 引入标准输入输出库

/**
 * 二分查找函数（闭区间实现）
 * 
 * @param nums   整型数组指针
 * @param numsSize 数组长度
 * @param target   目标值
 * @return 目标值的索引（找到返回下标，未找到返回-1）
 */
int search(int* nums, int numsSize, int target) {
    int left = 0;                // 左边界初始化为数组起始位置
    int right = numsSize - 1;    // 右边界初始化为数组末尾位置，闭区间[left, right]

    while (left <= right) {       // 当区间有效时循环
        int middle = left + (right - left) / 2;  // 计算中间位置，防溢出写法

        if (nums[middle] > target) {     // 中间值比目标大
            right = middle - 1;          // 收缩右边界到中间左侧
        } else if (nums[middle] < target) { // 中间值比目标小
            left = middle + 1;           // 收缩左边界到中间右侧
        } else {                         // 找到目标值
            return middle;               // 直接返回下标
        }
    }

    return -1;  // 循环结束未找到，返回-1
}

int main() {
    // 测试用例1：目标存在
    int arr1[] = {-1, 0, 3, 5, 9, 12};           // 有序数组
    int target1 = 9;                             // 存在的目标值
    int size1 = sizeof(arr1) / sizeof(arr1[0]);  // 计算数组长度
    int result1 = search(arr1, size1, target1);  // 调用查找函数
    printf("text1: target %d under number %d\n", target1, result1);

    // 测试用例2：目标不存在
    int arr2[] = {2, 4, 6, 8, 10};
    int target2 = 5;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = search(arr2, size2, target2);
    printf("text2: target %d under number %d\n", target2, result2);

    return 0; 
}