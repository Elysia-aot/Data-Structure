/*
给你一个 非严格递增排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。

考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：

更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。nums 的其余元素与 nums 的大小不重要。
返回 k 
*/
#include <stdio.h>
// 函数用于移除数组中的指定元素
int removeElement(int *nums,int numsize){
    // 定义慢指针
    int slowindex=0;
    // 如果数组长度为1，直接返回1
    if (numsize==1)
    {
        return 1;
    }
    // 否则，遍历数组
    else{
        for (int fastindex=1; fastindex<numsize;fastindex++)
        {
            // 如果慢指针指向的元素与快指针指向的元素不相等
        if (nums[slowindex]!=nums[fastindex])
            {
                // 将快指针指向的元素赋值给慢指针指向的下一个元素
                nums[slowindex+1]=nums[fastindex];
                // 慢指针后移
                slowindex++;
            }
        }
}
    // 返回慢指针的值加1
    return slowindex+1;
}
int main(){
    // 定义一个整型数组nums，并初始化为{1,1,2}
    int nums[]={1,1,2};
    // 计算数组nums的元素个数
    int numsize=sizeof(nums)/sizeof(nums[0]);
    // 调用removeElement函数，将数组nums和数组元素个数numsize作为参数传入，并将返回值赋给result
    int result=removeElement(nums,numsize);
    // 输出删除重复元素后的数组的值
    for (int i = 0; i <result; i++)
    {
        printf("%d",nums[i]);
    }
    
    
    // 返回0，表示程序正常结束
    return 0;
}
