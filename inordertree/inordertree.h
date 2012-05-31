#ifndef inordertree
#define inordertree

template <class T>
struct treeNode
{
    T data;
    treeNode *left;
    treeNode *right;
    treeNode *parent;
};

template <class T>
class inordertree
{
    public:
        inordertree();
        ~inordertree();
        int size() const;
        int height() const;
        void midOrder() const;
        void preOrder() const;
        void postOrder() const;
        void createTree() const;
    private:
        treeNode<T> *root;
};

#endif
