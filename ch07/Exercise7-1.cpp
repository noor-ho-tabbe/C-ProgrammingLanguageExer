/*
写出下面声明: 
1.一个函数，它以指向字符的指针和对整数的引用为参数，无返回值
2.一个指向这个函数的指针
3.一个以这种指针为参数的函数
4.一个返回这种指针的函数
5.写出一个函数的定义，它以一个这样的指针为参数，并返回其参数作为返回值。提示：使用typedef
*/

1. 
void f(char*, int&)

2. 
typedef void (*PF)(char*, int&)
PF pf;

char glFun(char* s, int &a){ return s;}   
int main()   
{   
    pf = glFun;   
    (*pf)("aaa", 2);
    return 0;   
}   

3.
void g1(PF);

4.
PF g2()

5.
PF g(PF funptr)
{
    return funptr;
}
