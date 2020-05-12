#include<iostream>
using namespace std;

class list_element
{
    public:
    list_element(int n=0,list_element* ptr = 0):d(n),next(ptr){}
    int d;
    list_element* next;
};

class list
{
    private:
    list_element* head;
    list_element* cursor;
    public:
    list():head(0),cursor(0){}
    void prepend(int n);//insert at the front
    int get_element()
    {
        return cursor->d;
    }
    void advance()
    {
        cursor=cursor->next;
    }
    void print();
};

void list::prepend(int n)
{
    if(head == 0)
    {
        cursor = head = new list_element(n,head);
    }
    else
    {

        head = new list_element(n,head);
    }
    
}

void list::print()
{
    list_element* h = head;
    while(h != nullptr)
    {
        cout<< h->d <<"->";
        h = h->next;
    }
}

int main()
{
    list a,b;
    a.prepend(9);
    a.prepend(8);
    cout<<"List a:";
    a.print();
    for(int i=0;i<20;i++)
    {
        b.prepend(i*i);
    }
    cout<<"\nList b :";
    b.print();
    return 0;
}