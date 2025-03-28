#include <stdio.h>
//删除数组元素，先使用暴力解法
int removeElement(int *nums,int numbersize,int val){
    for (int i = 0; i <numbersize; i++)
    //这个循环作用是判断是否是要删除的元素
    {   /*原来是i<numbersize-1,
        循环条件错误外层循环终止条件应为i < numbersize
        （不是numbersize-1），
        否则会漏判最后一个元素
        内层移动元素的循环j < numbersize会导致数组越界访问nums[j+1]*/
        if (nums[i]==val)
        {
            for (int j = i; j<numbersize-1; j++)//这个循环移动数组，覆盖要删除的元素。
            {
            nums[j]=nums[j+1];
            }
            i--;
            numbersize--;
        } 
    } 
    return numbersize;//我的错误是把return放在for循环里了，所以不返回值
}

int main() {
    // 定义一个整型数组nums，包含7个元素
    int nums[] = {3, 2, 2, 3, 4, 2, 5};
    // 定义一个整型变量val，值为2
    int val = 2;
    // 调用removeElement函数，传入数组nums、数组长度和要删除的元素值val，返回新的数组长度
    int new_length =removeElement(nums, sizeof(nums)/sizeof(int), val);

    // 打印新的数组长度
    printf("New array length: %d\n", new_length);
    // 打印修改后的数组
    printf("Modified array: [");
    // 遍历数组，打印每个元素
    for (int i = 0; i < new_length; i++) {
        printf("%d%s", nums[i], (i == new_length-1) ? "]" : ", ");
    }
    return 0;
}