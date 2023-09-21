/**
 * 
 * 
 * 64028780 พลสิงห์ ตาเละมัน
 *
 * 
*/
#include "Linkedlist.h"
#include <iostream>
using namespace std;

int main()
{
  int op;
  Linkedlist APL;
 
 do
   {
    cout<<endl;
    cout<<" Menu "<<endl;
    cout<<" 1:ADD 2:SIZE 3:GET 4:REMOVE 5:SET"<<endl;
    cout<<" 6:INDEXOF 7:MAX 8:MIN 9:CLEAR 10:ODDCOUNT"<<endl;
    cout<<" 11:EVENCOUNT 12:SUM 13:MEAN 14:SORT 15:DISPLAY"<<endl;
    cout<<endl;
    cout<<" Enter Number of Menu: ";
    cin>>op;
    
       if(op==1) //ADD
    {
        int l,l1;
        cout<<"Enter set maximum List: ";
        cin>>l;
        
          for( int i = 0; i < l; i++)
          {
              cout<<"Set Data List position: "<<i<<" Is: ";
              cin>>l1;
              APL.add(i,l1);
          }
          APL.display();
          cout<<endl;
    }

  else if(op==2) //SIZE
    {
      int n = APL.size();
      cout<<"The current number of members is: "<< n <<endl;
      cout<<endl;
    }

  else if(op==3) // GET
  {
    APL.display();
    int p;
    cout<<"Enter data List: ";cin>>p;
    int p1 = APL.get(p);
    cout<<"Position of Is: "<< p1 <<endl;
    cout<<endl;
  }

  else if(op==4) //REMOVE
  {
    APL.display();
    int r;
    cout<<"Enter position to delete: ";cin>>r;
    int temp = APL.remove(r);
    cout<<"Remove: "<<temp<<" done."<<endl;
    APL.display();
    cout<<endl;
  }

  else if(op==5) //SET
  {
    int i,e;
    APL.display();
    cout<<"Enter position to List: ";
    cin>>i;
    cout<<"Enter new data List: ";
    cin>>e;
    APL.set(i,e);
    APL.display();
  }

  else if(op==6) //Indexof
  {
    APL.display();
    int e;
    cout<<"Enter data List: ";cin>>e;
    int e1 =  APL.indexof(e);
    cout << "position is: " << e1 <<endl;
    cout<<endl;
  }
 
  else if(op==7) // Max
  {
    APL.display();
    int Max = APL.Max();
    cout<<"The maximum value in this data List is: "<< Max <<endl;
    cout<<endl;

  }

  else if(op==8) //Min
  {
    APL.display();
    int Min = APL.Min();
    cout<<"The minimum value in this data List is: "<< Min <<endl;
    cout<<endl;
  }

  else if(op==9) //clear
  {
    APL.Clear();
    APL.display();
  }

  else if(op==10) //ODDCOUNT
  { 
    APL.display();
    int odd = APL.oddCount();
    cout<<"All odd numbers are there: "<<odd<<endl;
  }

  else if (op==11) //EVENCOUNT
  {
   APL.display();
   int even = APL.evenCount();
   cout<<"All even numbers are available: "<<even<<endl;
  }

  else if(op==12) //SUM
  {
    APL.display();
   float s = APL.sum();
   cout<<"The sum of this information is: "<<s<<endl;
  }

  else if(op==13) //MEAN
  {
    APL.display();
    float m = APL.mean();
    cout<<"The mean of this data List is: "<<m<<endl;

  }

  else if (op==14) //SORT
  {
    APL.display();
    APL.Sort();
  }
   
  else if(op==15) // Display
  {
     APL.display();
  }
 
   } while (op !=0);

   
  return 0;
}

