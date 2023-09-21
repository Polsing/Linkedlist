#include <iostream>
#include "Linkedlist.h"
using namespace std;

bool Linkedlist::isFull()
{
  ChainNode *o = new ChainNode;
    bool returnBool;
      if(o != NULL)
      returnBool = false;
      else
      returnBool = true;

    delete o;
    return returnBool;
}

Linkedlist::Linkedlist()
{
    cout<<"strat"<<endl;
    curSize = 0;
    FirstNode = new ChainNode(0,NULL);
    
}

Linkedlist::~Linkedlist()
{
   ChainNode *p = FirstNode;

    while (p != NULL)
    {
      ChainNode *n = p->next;
      delete p;
      p = n;
    }
    
    delete FirstNode;
}

void Linkedlist::add(int i, int e)
{
    if(isFull())
  {
    cerr<<"Error: Mamory is Full"<<endl;
    return;
  }
  if(i < 0 || i > curSize)
  {
    cout<<"index outOf bound!!"<<endl;
    return;
  }
  
  ChainNode *p = FirstNode;
  for( int j = 0; j < i; j++)
        p = p->next;

  ChainNode *q = new ChainNode(e , p->next);
  p->next = q;
  curSize++;
  
}

int  Linkedlist::size()
{
    return curSize;
}

int  Linkedlist::get(int i)
{
    if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return -1;
    }

    if (i < 0)
    {
        cerr << "Warning: " << i << " Is in lower bound" << endl;
        int j = i;
        i = 0;
        cout << "Message: index " << j << " is changed to " << i << endl;
    }
    else if (i >= curSize)
    {
        cerr << "Warning: " << i << " Is in Upper bound" << endl;
        int j = i;
        i = curSize -1;
        cout << "Message: index " << j << " is changed to " << i << endl;
    }

    ChainNode *p = FirstNode->next;

    for (int j = 0; j < i; j++)
    {
        p = p->next;
    }
    return p->element;
}

int  Linkedlist::remove(int i)
{
    if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return -1;
    }

    if (i < 0)
    {
        cerr << "Error: " << i << " is in lower bound" << endl;
        return -1;
    }
    if (i >= curSize)
    {
        cerr << "Error: " << i << " is in Upper bound" << endl;
        return -1;
    }

    ChainNode *p = FirstNode;
    for(int j = 0; j < i; p = p->next, j++);

    ChainNode *q = p->next;
    ChainNode *r = q->next;

    int temp = q->element;
    p->next = r;
    delete q;
    curSize--;

    return temp;
}

int  Linkedlist::indexof(int e)
{
  if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return 0;
    }

    ChainNode *p = FirstNode->next;

    for (int i = 0; i < curSize; i++)
    {
        if (e == p->element)
        {
            return i;
        }
            p = p->next;
    }

    cerr << "Error: " << e << " Not Found" << endl;
    return -1;
}

void Linkedlist::set(int i, int e)
{
  if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
    }

    if (i < 0)
    {
        cerr << "Warning: " << i << " is in lower bound" << endl;
    }
    if (i >= curSize)
    {
        cerr << "Warning: " << i << " is in Upper bound" << endl;
    }

    ChainNode *p = FirstNode->next;

    for (int j = 0; j < i; j++)
    {
        p = p->next;
    }
    p->element = e;
}

void Linkedlist::Clear()
{
  ChainNode *p = FirstNode->next;
    while(p != NULL)
    {
        ChainNode *n = p->next;
        delete p;
        p = n;
    }
    FirstNode->next = NULL;
    curSize = 0;
}

int  Linkedlist::Min()
{
  if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return -1;
    }

   ChainNode *p = FirstNode->next;
    int min = p->element;

    for (int i=0; i <=curSize-1; i++)
     {
      if(min > p->element)
      {
        min = p->element;
      }
      p = p->next;
     }
   return min;
}

int  Linkedlist::oddCount()
{
   if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return 0;
    }

    ChainNode *p = FirstNode->next;
    
    int odd=0;
    cout<<"L:[";
    for(int i = 0; i < curSize; i++) 
    {
        if(p->element % 2 == 1) 
        { 
            cout << p->element <<" ";
            odd++;
        }
        p=p->next;
    }
    cout<<"]"<<endl;
   return odd;
}

int  Linkedlist::evenCount()
{
    if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return 0;
    }

    ChainNode *p = FirstNode->next;
    
    int even=0;
    cout<<"L:[";
    for(int i = 0; i < curSize; i++) 
    {
        if(p->element % 2 == 0) 
        { 
            cout << p->element <<" ";
            even++;
        }
        p=p->next;
    }
    cout<<"]"<<endl;
   return even;
   //return curSize - oddCount();
}

float Linkedlist::sum()
{
   if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return 0;
    }

    ChainNode *p = FirstNode->next;

    int sum=0;
    while(p != NULL)
    {
        sum += p->element;
        p = p->next;
    }
    return sum;
}

float Linkedlist::mean()
{
  if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return 0;
    }

    return sum() / curSize;
}

void  Linkedlist::Sort()
{
    ChainNode *i, *j;
    int temp;
    
    for(i = FirstNode; i->next != NULL; i = i->next) 
    {
        for(j = i->next; j != NULL; j = j->next) 
        {
            if(i->element> j->element)
            {
                temp = i->element;
                i->element = j->element;
                j->element = temp;
            }
        }
    }
    display();
}

int   Linkedlist::Max()
{
  if (curSize == 0)
    {
        cerr << "Error: List is empty" << endl;
        return -1;
    }

   ChainNode *p = FirstNode->next;
  int max = p->element;
   for(int i=0; i<=curSize-1; i++ ) 
    {
     if(max < p->element)
     {
      max = p->element;
     }
     p = p->next;
    }
  return max;
}

void  Linkedlist::display()
{
    cout<<"L:[";if(curSize == 0)cout<<"] ";
    
    else
    {
        ChainNode *p = FirstNode->next;
          for(int i = 0; i < curSize; i ++ , p = p->next)
          {
            cout<< p->element;if(i<curSize-1)cout<<" ";else cout<<"] ";
          }
    }
    cout<<"size: "<< curSize <<endl;
}