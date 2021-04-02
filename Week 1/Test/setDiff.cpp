#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node* next;

    node(int input)
    {
        this->info = input;
        this->next = NULL;
    }
};

class LList
{
public:
    node* list;

    LList()
    {
        list = NULL;
    }
    void Insert(int x, int where = 0, int data = 0)
    {
        node* temp = new node(x);
        if (list == NULL)
            list = temp;
        else
        {
            node* t = list;
            
            {  // Insert node at end
                while (t->next != NULL)
                    t = t->next;
                t->next = temp;
            }
            
        }
    }

    void Show()
    {
        node* t = NULL;
        if (list == NULL)
            cout << "\n\nEmpty\n\n";
        else
        {
            t = list;
            while (t != NULL)
            {
                cout << t->info<< " ";
                t = t->next;
            }
            cout << endl;
        }
    }

    void Delete(int where = 0, int data = 0)
    {
        // Only first occurences will be deleted
        if (list == NULL)
            cout << "\n\nUnderFlow\n\n";
        else
        {
            node* t = list, *bef = NULL;
            
            {  // Delete node given
                while (t->info != data && t != NULL)
                {
                    bef = t;
                    t = t->next;
                }
                if (t != NULL)
                {if (bef != NULL)
                        bef->next = t->next;
                    else
                        list = list->next;}
            }
            if (t != NULL)
                delete t;
        }
    }
};

void Set_Diff(LList l1, LList l2)
{
    node* t=l1.list, *t1=l2.list, *bef=NULL;
    
    while(t1 !=NULL)
    {
        while(t->info != t1->info && t!=NULL)
        {
            bef = t;
            t = t->next;
        }
    
        if (t != NULL)
        {if (bef != NULL)
                bef->next = t->next;
            else
                l1.list = l1.list->next;}
        
        t1 = t1->next;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    LList l1, l2;
    l1.Insert(2);
    l1.Insert(3);
    l1.Insert(4);
    l2.Insert(4);
    l2.Insert(5);
    l2.Insert(6);
    
    Set_Diff(l1, l2);
    
//     
    
    return 0;
}
