//用[left.right)的区间完成二分搜索
#include <stdio.h>
int search(int *nums,int numsize,int target)//传入数组指针，数组长度和目标值
{
    int left=0,right=numsize;
    while (left<right)
    {
         int middle=(left+right)/2;
         if (nums[middle]>target)
         {
            right=middle;//因为right娶不到，所以right可以等于middle
         }
         else if (nums[middle]<target)
         {
            left=middle+1;//middle已经不在target所在的区间了，所以left不能取middle
         }
         else{
            return middle;
         }
    }
    return -1;
}
int main() {
    // 测试用例1：目标存在
    int arr1[] = {-1, 0, 3, 5, 9, 12};           // 有序数组
    int target1 = 12;                             // 存在的目标值
    int size1 = sizeof(arr1) / sizeof(arr1[0]);  // 计算数组长度
    int result1 = search(arr1, size1, target1);  // 调用查找函数
    printf("text1: target %d the undernumber is %d\n", target1, result1);

    // 测试用例2：目标不存在
    int arr2[] = {2, 4, 6, 8, 10};
    int target2 = 5;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = search(arr2, size2, target2);
    printf("text2: target %d the undernumber is %d\n", target2, result2);

    return 0;
}