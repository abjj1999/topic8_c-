#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
   //complete
  arr = new int[1];
  length = 0;
  size = 1;
}

DynamicArray::DynamicArray(int s)
{
   //complete
  size = s;
  length = 0;
  arr = new int[size];
  
}

void DynamicArray::addElement(int val)
{
    
    if(size == length) {
       //create a temporary dynamic array
       int *ar;
      
       
       //copy element from arr to temporary array
        for (int i = 0; i < length; i++){
        ar[i] = arr[i];

        
      }


      //delete arr
      delete arr;
      
      //double size of array
      size *= 2;
      
      
      //allocate new memory for arr
      ar = new int[size];

      //copy elements from temporary array to arr
      arr = ar;
      
      //delete temporary array
      delete ar;
    }
    
    //add new element to array and update length
    arr[length] = val;
  length++;
}

int DynamicArray::getLength()
{
  return length;
   //compelte
}

int DynamicArray::getElement(int pos)
{
   //complete
  return arr[pos];
}

int DynamicArray::getSize()
{ 
   //complete
  return size;
}

DynamicArray::~DynamicArray() { delete [] arr;}


