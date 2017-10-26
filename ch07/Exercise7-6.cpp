/*
用更加高效的算法实现ssort.提示 qsort
*/

//简单介绍一下qsort函数
/*
void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )
int compare (const void *elem1, const void *elem2 ) );
qsort（即，quicksort）主要根据你给的比较条件给一个快速排序，主要是通过指针移动实现排序功能。
排序之后的结果仍然放在原来数组中。
参数意义如下:
base    是需要排序的目标数组名（或者也可以理解成开始排序的地址，因为可以写&s[i]这样的表达式）
num     是参与排序的目标数组元素个数
width   是单个元素的大小（或者目标数组中每一个元素长度），推荐使用sizeof(s[0]）这样的表达式
compare 就是让很多人觉得非常困惑的比较函数啦。
*/

#include <cstdlib>
#include <stddef.h>

typedef int (*CMP)(void const*, void const*);

void ssort(void *base, size_t n, size_t z, CMP cmp)
{
    std::qsort(base, n, sz, cmp);
}