/*
考虑：
struct Tnode {
    string word;
    int count;
    Tnode *left;
    Tnode *right;
};

写一个函数向Tnode的树中插入新的单词。 写一个函数将Tnode的树打印出来。 
写一个函数将Tnode树按照单词的字典顺序打印出来。修改Tnode,
使它只存储一个到任意长的单词的指针，该单词存储在一个由new分配的字符数组里，修改上述函数，
使他们能够使用新的Tnode
*/