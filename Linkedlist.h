#if !defined(_LINKEDLIST_H)
#define _LINKEDLIST_H
#include"../ChainNode/ChainNode.h"


class Linkedlist
{
 private:     
    ChainNode *FirstNode;
    int curSize; 

 private: 

   bool isFull();
   
 public:        //สมาชิกประเภทนี้สามารถเข้าถึงได้ทุกส่วนของโปรแกรม
  Linkedlist(); //คอนสตรัคเตอร์เป็นฟังก์ชันพิเศษที่จะถูกเรียกใช้เมื่อออบเจ็คถูกสร้าง เป้าหมายของมันเพื่อสำหรับกำหนดค่าเริ่มต้นให้กับออบเจ็ค คอนสตรัคเตอร์ใช้ชื่อเดียวกับคลาส
  ~Linkedlist();//dest
  int size(); // ดูค่าปัจจุบัน
  int get(int i);  // หาว่าต่ำเเหน่งที่มีค่าอะไร
  int remove(int i);// ลบข้อมูลในอาเรย์
  int indexof(int e); // หาว่าตัวที่ e อยู่ตรงไหน
  void set(int i ,int e); // ใส่ค่า e ไปยังต่ำเเหน่งที่ i อยู่
  void add(int i , int e);
  void Clear();
  int Max();
  int Min();
  int oddCount();   //: สำหรับหาจำนวนข้อมูลใน linear list ที่เป็นจำนวนคี่
  int evenCount();  //: สำหรับหาจำนวนข้อมูลใน linear list ที่เป็นจำนวนคู่
  float sum();      //: สำหรับหาผลรวมของข้อมูลใน linear list
  float mean();     //: สำหรับคำนวนหาค่าเฉลี่ยของข้อมูลใน linear list
  void Sort();      //: สำหรับจัดเรียงข้อมูลใน linear list จากน้อยไปมาก
  void display();


};


#endif // _MYCODE_H_
