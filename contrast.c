#include <stdio.h>  // 引入标准输入输出库

/**
 * 移除数组中指定值的元素（双指针法）
 * 
 * @param nums     整型数组指针
 * @param numsSize 数组长度
 * @param val      要移除的目标值
 * @return 新数组的有效长度
 */
int removeElement(int* nums, int numsSize, int val) {
    int slowIndex = 0;  // 慢指针，记录有效元素的位置

    // 快指针遍历整个数组
    for (int fastIndex = 0; fastIndex < numsSize; fastIndex++) {
        if (nums[fastIndex] != val) {           // 当前元素不需要移除
            printf("slow=%d fast=%d\n\n",nums[slowIndex],nums[fastIndex]);
            nums[slowIndex] = nums[fastIndex];  // 将有效元素复制到慢指针位置
            printf("slow=%d fast=%d",nums[slowIndex],nums[fastIndex]);
            slowIndex++;                        // 慢指针向前移动
        }
    }

    return slowIndex;  // 返回新数组的有效长度
}

int main() {
    // 测试用例1：移除中间元素
    int arr1[] = {1, 2, 3, 3};                   // 原始数组
    int val1 = 3;                                // 要移除的值
    int size1 = sizeof(arr1) / sizeof(arr1[0]);  // 计算数组长度
    int new_size1 = removeElement(arr1, size1, val1);
    printf("测试用例1: 移除 %d 后的数组长度 = %d\n", val1, new_size1);
    printf("新数组元素: [");
    for (int i = 0; i < new_size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("]\n\n");

    // 测试用例2：移除不存在元素
   /* int arr2[] = {0, 1, 4, 5};
    int val2 = 6;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int new_size2 = removeElement(arr2, size2, val2);
    printf("测试用例2: 尝试移除不存在的 %d 后数组长度 = %d\n", val2, new_size2);
    printf("数组保持原样: [");
    for (int i = 0; i < new_size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("]\n\n");

    // 测试用例3：空数组
    int arr3[] = {};
    int val3 = 0;
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int new_size3 = removeElement(arr3, size3, val3);
    printf("测试用例3: 空数组处理后长度 = %d\n", new_size3);*/

    return 0;
}