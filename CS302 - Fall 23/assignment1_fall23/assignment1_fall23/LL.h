#ifndef ASSIGNMENT1_FALL23_LL_H
#define ASSIGNMENT1_FALL23_LL_H


template <typename T>
class LL
{
// contents of each node
    struct Node
    {
        T data;
        Node* prev;
        Node* next;
    };
// iterator class to allow access of each node in main
public:
    class Iterator
    {
    public:
        friend class LL;
        Iterator ();
        Iterator(Node *);
        T operator *() const;
        const Iterator& operator ++(int);
        const Iterator& operator --(int);
        bool operator ==( const Iterator &) const;
        bool operator !=( const Iterator &) const;
    private:
        Node* current;
    };
    LL();
    LL(const LL <T>&);
    const LL <T>& operator =(const LL<T>&);
    ~LL();
    void headInsert(const T&);
    void tailInsert(const T&);
    1
    Iterator begin () const;
    Iterator end() const;
    void swapNodes(Iterator&, Iterator &);
private:
    Node* head;
    Node* tail;
};


#endif //ASSIGNMENT1_FALL23_LL_H
