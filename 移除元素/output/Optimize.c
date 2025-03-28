//使用双指针方法删除数组中重复元素
#include <stdio.h>
int removeElement(int *nums,int numsize,int val){
    int slowindex=0;
    for (int fastindex=0; fastindex<numsize;fastindex++)
    {
        if (nums[fastindex]!=val)
        {
            nums[slowindex]=nums[fastindex];
            slowindex++;
        }
    }
    return slowindex;
}
