/*
*下面的代码是什么意思? 会有什么用处
*/

typedef int (&rfiii)(int, int)

属于函数的引用
可以用来将函数作为实参传递给函数

用法
int reduce_intarray(rfiii f, int a[], size_t n)
{
    int result = a[0];
    for(size_t i = 0; i != n; i++)
        result = f(result, a[i]);
    return result;
}