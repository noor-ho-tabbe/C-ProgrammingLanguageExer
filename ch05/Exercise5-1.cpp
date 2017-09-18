1.char *p = 0;
2.int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
3.int (&arr)[10] = arr;   // 引用，记得要赋初值，原因引用不能改变！
4.std::string (*p)[10] = {0};
5.char **p = &p;         // 指针的指针
6.int const ci = 10;     // 整形常量
7.int const *cii = &ci;  // 常量指针，cii指向的地址不可以改变