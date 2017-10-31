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
struct Tnode {
    string word;
    int count;
    Tnode *left;
    Tnode *right;
};

// 插入新的单词
Tnode* InsertWord(Tnode* &root, string &word)
{
    if (root != NULL)
    {
        Tnode *node = root;
        int order = word.compare(node->word);
        do
        {
            if (order == 0)
            {
                ++node->count;
                break;
            }
            else
            {
                Tnode *&next = order < 0 ? node->left : node->right;
                if (next == 0)
                {
                    next = new_Tnode(word);
                    break;
                }
                else
                {
                    node = next;
                }
            }
        }
    }
    else
    {
        root = new_Tnode(word);
    }
}


Tnode * new_Tnode(string const &word)
{
    Tnode * node = new Tnode;
    node->word = word;
    node->count = 1;
    node->left = node->right = NULL;
    return node;
}

// 打印一棵树，中序遍历

void PrintTnode(std::ostream &output, Tnode* node)
{
    if (node != NULL)
    {
        PrintTnode(output, node->left);
        cout <<"word:"<< node->word << endl;
        PrintTnode(output, node->right);
    }
}
