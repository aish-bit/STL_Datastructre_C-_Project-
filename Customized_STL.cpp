/////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/*
Project Name : Customized Standard Template Library (STL) in C++

Description  : Research and studied how the generic STL of basic datastructures
               (Singly Linear Linked List,Doubly Linear Linked List,Singly Circular 
               Linear Linked List,Doubly Circular Linear Linked List,Stack,Queue)
               created internally and created our own costomized STL in C++.

Author       : Aishwarya Sunil Karande
Date         : 18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////

//Inclusion of required header file and namespaces:

#include <iostream>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/*
Structure Name:  node1
Type          :  Self referential structure
Input         :  Generic
Description   :  It is used to create Singly Linked List and
                 Singly Circular Linked List 
Author        :  Aishwarya Sunil Karande
Date          :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <typename T>

struct node1
{
    T data;
    struct node1 *next;
};

///////////////////////////////////////////////////////////////////////////////
/*
Structure Name:  node2
Type          :  Self referential structure
Input         :  Generic
Description   :  It is used to create Doubly Linked List and
                 Doubly Circular Linked List 
Author        :  Aishwarya Sunil Karande
Date          :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <typename T>

struct node2
{
    struct node2 *prev;
    T data;
    struct node2 *next;
};

/////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Input          :  -
Output         :  -
Description    :  Declaration of SinglyLL class.
                  It is used to create Singly Linked List  
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

namespace SLL
{
    template <class T>
    class SinglyLL
    {
    private:
        node1<T> *first;
        int iSize;

    public:
        SinglyLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int Count();
        int SearchFirstOcc(T);
        int SearchLastOcc(T);
        T Addition();
        T Maximum();
        T Minimum();
        void DisplayPerfect();
        void DisplayPrime();
        int AddEven();
        T SecondMax();
        void SumDigit();
        void ReverseDigit();
        void DisplayPallindrome();
        void DisplayProductDigit();
        void DisplaySmallestDigit();
        void DisplayLargestDigit();
    };
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Input          :  -
Output         :  -
Description    :  Declaration of DoublyLL class.
                  It is used to create Doubly Linked List  
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

namespace DLL
{
    template <class T>
    class DoublyLL
    {
    private:
        node2<T> *first;
        int iSize;

    public:
        DoublyLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int Count();
        int SearchFirstOcc(T);
        int SearchLastOcc(T);
        T Addition();
        T Maximum();
        T Minimum();
        void DisplayPerfect();
        void DisplayPrime();
        int AddEven();
        T SecondMax();
        void SumDigit();
        void ReverseDigit();
        void DisplayPallindrome();
        void DisplayProductDigit();
        void DisplaySmallestDigit();
        void DisplayLargestDigit();
    };
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Input          :  -
Output         :  -
Description    :  Declaration of SinglyCLL class.
                  It is used to create Singly Circular Linked List  
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

namespace SCLL
{
    template <class T>
    class SinglyCLL
    {
    private:
        node1<T> *first;
        node1<T> *last;
        int iSize;

    public:
        SinglyCLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int Count();
        int SearchFirstOcc(T);
        int SearchLastOcc(T);
        T Addition();
        T Maximum();
        T Minimum();
        void DisplayPerfect();
        void DisplayPrime();
        int AddEven();
        T SecondMax();
        void SumDigit();
        void ReverseDigit();
        void DisplayPallindrome();
        void DisplayProductDigit();
        void DisplaySmallestDigit();
        void DisplayLargestDigit();
    };
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Input          :  -
Output         :  -
Description    :  Declaration of DoublyCLL class.
                  It is used to create Doubly Circular Linked List  
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

namespace DCLL
{
    template <class T>
    class DoublyCLL
    {
    private:
        node2<T> *first;
        node2<T> *last;
        int iSize;

    public:
        DoublyCLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int Count();
        int SearchFirstOcc(T);
        int SearchLastOcc(T);
        T Addition();
        T Maximum();
        T Minimum();
        void DisplayPerfect();
        void DisplayPrime();
        int AddEven();
        T SecondMax();
        void SumDigit();
        void ReverseDigit();
        void DisplayPallindrome();
        void DisplayProductDigit();
        void DisplaySmallestDigit();
        void DisplayLargestDigit();
    };
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  STACK
Class Name     :  Stack
Input          :  -
Output         :  -
Description    :  Declaration of Stack class.
                  It is used to create Stack 
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

namespace STACK
{
    template <class T>
    class Stack
    {
    private:
        node1<T> *first;
        int iSize;

    public:
        Stack();
        void Push(T);
        T Pop();
        void Display();
        int Count();
    };
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  QUEUE
Class Name     :  Queue
Input          :  -
Output         :  -
Description    :  Declaration of Queue class.
                  It is used to create Queue 
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

namespace QUEUE
{
    template <class T>
    class Queue
    {
    private:
        node1<T> *first;
        int iSize;

    public:
        Queue();
        void Enqueue(T);
        T Dequeue();
        void Display();
        int Count();
    };
}

/////////////////////////////////////////////////////////////////////////////////////////////////

//Inclusion of required namespaces:

using namespace SLL;

using namespace DLL;

using namespace SCLL;

using namespace DCLL;

using namespace STACK;

using namespace QUEUE;

/////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  SinglyLL() (Constructor) 
Input          :  -
Output         :  -
Description    :  Used to initialise the characteristics of class
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

SinglyLL<T>::SinglyLL()
{
    first = NULL;
    iSize = 0;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  InsertFirst()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::InsertFirst(T No)
{
    node1<T> *newn = NULL;

    newn = new (node1<T>);
    newn->data = No;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  InsertLast()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::InsertLast(T No)
{
    node1<T> *newn = NULL;

    newn = new (node1<T>);
    newn->data = No;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        node1<T> *temp = NULL;
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  InsertAtPos()
Input          :  Generic,Integer
Output         :  -
Description    :  Used to insert node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    if ((iPos < 1) || (iPos > (iSize + 1)))
    {
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == (iSize + 1))
    {
        InsertLast(No);
    }
    else
    {
        node1<T> *temp = NULL;
        temp = first;
        int iCnt = 0;
        node1<T> *newn = NULL;
        newn = new (node1<T>);
        newn->next = NULL;
        newn->data = No;

        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iSize++;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  DeleteFirst()
Input          :  -
Output         :  -
Description    :  Used to delete node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete (first);
        first = NULL;
    }
    else
    {
        node1<T> *temp = first;
        first = first->next;
        delete (temp);
    }

    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  DeleteLast()
Input          :  -
Output         :  -
Description    :  Used to delete node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete (first);
        first = NULL;
    }
    else
    {
        node1<T> *temp = NULL;
        temp = first;
        node1<T> *targated = NULL;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        targated = temp->next;
        temp->next = NULL;
        delete (targated);
    }

    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  DeleteAtPos()
Input          :  Integer
Output         :  -
Description    :  Used to delete node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::DeleteAtPos(int iPos)
{
    if ((iPos < 1) || (iPos > iSize))
    {
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        node1<T> *temp = NULL;
        temp = first;
        int iCnt = 0;
        node1<T> *targated = NULL;

        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        targated = temp->next;
        temp->next = temp->next->next;
        delete (targated);
        iSize--;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  Display()
Input          :  -
Output         :  -
Description    :  Used to display elements of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::Display()
{
    node1<T> *temp = NULL;
    temp = first;

    cout << "Data is: "
         << "\n";

    while (temp != NULL)
    {
        cout << "|" << temp->data << "|"
             << "->";
        temp = temp->next;
    }

    cout << "NULL\n";
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  Count()
Input          :  -
Output         :  Integer
Description    :  Used to count elements of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////
template <class T>
int SinglyLL<T>::Count()
{
    return iSize;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  SearchFirstOcc()
Input          :  Generic
Output         :  Integer
Description    :  Used to find first occurance of element in linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////
template <class T>
int SinglyLL<T>::SearchFirstOcc(T No)
{
    node1<T> *temp = NULL;
    int iCnt = 0;

    temp = first;

    while (temp != NULL)
    {
        iCnt++;
        if((temp->data)==No)
        {  
            break;
        }
        temp = temp->next;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  SearchLastOcc()
Input          :  Generic
Output         :  Integer
Description    :  Used to find last occurance of element in linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////
template <class T>
int SinglyLL<T>::SearchLastOcc( T No)
{
    node1<T> *temp = NULL;
    int iCnt1 = 0;
    int iCnt2 = 0;
  
    temp = first;

    while (temp != NULL)
    {
        iCnt1++;
        if((temp->data) == iNo)
        {
            iCnt2 = iCnt2 + (iCnt1-iCnt2);
        }
        temp = temp->next;
    }

    return iCnt2;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  Addition()
Input          :  -
Output         :  Generic
Description    :  Used to perform addition of all elements from linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

T SinglyLL<T>::Addition()
{
    node1<T> *temp = NULL;
    T Sum;
    
    temp = first;

    while (temp != NULL)
    {
        Sum = Sum + (temp->data);
        temp = temp->next;
    }
    
    return Sum;
    
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  Maximum()
Input          :  -
Output         :  Generic
Description    :  Used to find largest element from linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

T SinglyLL<T>::Maximum()
{
    node1<T> *temp = NULL;
    temp = first;
    T Max = temp->data;

    while (temp != NULL)
    {
        if((temp->data)>Max)
        {
            Max = temp->data;
        }

        temp = temp->next;
    }

    return Max;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  Minimum()
Input          :  -
Output         :  Generic
Description    :  Used to find smallest element from linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

T SinglyLL<T>::Minimum()
{
    node1<T> *temp = NULL;
    temp = first;
    T Min = temp->data;

    while (temp != NULL)
    {
        if((temp->data)<Min)
        {
            Min = temp->data;
        }

        temp = temp->next;
    }

    return Min;

}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  DisplayPerfect()
Input          :  -
Output         :  -
Description    :  Used to find and display Perfect number from linked list
                  (Used in case of only positive integer)
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::DisplayPerfect()
{
    node1<T> *temp = NULL;
    temp = first;

    int iFact = 0,iCnt = 0;

    while (temp != NULL)
    {
        iFact = 0;
        for(iCnt=1;iCnt<=((temp->data)/2);iCnt++)
        {
            if(((temp->data)%iCnt)==0)
            {
                iFact = iFact+iCnt;
            }
        }
         
        if(iFact == (temp->data))
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next; 
    }
    
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  DisplayPrime()
Input          :  -
Output         :  -
Description    :  Used to find and display Prime number from linked list
                  (Used in case of only natural number > 1)
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyLL<T>::DisplayPrime()
{
    int iCnt = 0;
    bool bflag = true;
    node1<T> *temp = NULL;
    temp = first;

    while (temp != NULL)
    {          
        bflag = true;                
        for(iCnt=2;iCnt<=((temp->data)/2);iCnt++)
        {            
            if(((temp->data)%iCnt) == 0)
            {
                bflag = false;
                break;
            }
        }

        if(bflag == true)
        {
            cout<<temp->data<<"\t";
        }

        temp = temp->next;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  AddEven()
Input          :  -
Output         :  Generic
Description    :  Used to perform addition of even numbers from linked list
                  (Used in case of integer)
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

int SinglyLL<T>::AddEven()
{
    int iSum = 0;
    node1<T> *temp = NULL;
    temp = first;

    while (temp != NULL)
    {
        if(((temp->data)%2)==0)
        {
            iSum = iSum + (temp->data);
        }

        temp = temp->next;
    }

    return iSum;
     
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SLL
Class Name     :  SinglyLL
Function Name  :  SecondMax()
Input          :  -
Output         :  Generic
Description    :  Used to find second largest element from linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

T SinglyLL<T>::SecondMax()
{
    node1<T> *temp = NULL;
    temp = first;

    T Max = this->Maximum();
    T SMax = temp->data;

    while (temp != NULL)
    {
        if(((temp->data) != Max) && ((temp->data) > SMax))
        {
            iSMax = temp->data;
        }

        temp = temp->next;
    }

    return SMax;
    
}



///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  DoublyLL() (Constructor) 
Input          :  -
Output         :  -
Description    :  Used to initialise the characteristics of class
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

DoublyLL<T>::DoublyLL()
{
    first = NULL;
    iSize = 0;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  InsertFirst()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyLL<T>::InsertFirst(T No)
{
    node2<T> *newn = new node2<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        newn->next->prev = newn;
        first = newn;
    }

    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  InsertLast()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyLL<T>::InsertLast(T No)
{
    node2<T> *newn = new node2<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        node2<T> *temp = NULL;
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  InsertAtPos()
Input          :  Generic,Integer
Output         :  -
Description    :  Used to insert node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    if ((iPos < 1) || (iPos > iSize + 1))
    {
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == (iSize + 1))
    {
        InsertLast(No);
    }
    else
    {
        node2<T> *temp = NULL;
        temp = first;
        int iCnt = 0;
        node2<T> *newn = new node2<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        newn->prev = temp;
        newn->next->prev = newn;
        iSize++;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  DeleteFirst()
Input          :  -
Output         :  -
Description    :  Used to delete node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyLL<T>::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete (first);
        first = NULL;
    }
    else
    {
        node2<T> *temp = NULL;
        temp = first;
        first = first->next;
        delete (temp);
    }

    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  DeleteLast()
Input          :  -
Output         :  -
Description    :  Used to delete node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyLL<T>::DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete (first);
        first = NULL;
    }
    else
    {
        node2<T> *temp = NULL;
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        delete (temp);
    }

    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  DeleteAtPos()
Input          :  Integer
Output         :  -
Description    :  Used to delete node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if ((iPos < 1) || (iPos > iSize))
    {
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        node2<T> *temp = NULL;
        temp = first;
        int iCnt = 0;

        iCnt = 1;
        while (iCnt < iPos)
        {
            temp = temp->next;
            iCnt++;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        iSize--;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  Display()
Input          :  -
Output         :  -
Description    :  Used to display elements of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyLL<T>::Display()
{
    node2<T> *temp = NULL;
    temp = first;

    while (temp != NULL)
    {
        cout << "|" << temp->data << "|"
             << "->";
        temp = temp->next;
    }

    cout << "NULL\n";
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DLL
Class Name     :  DoublyLL
Function Name  :  Count()
Input          :  -
Output         :  Integer
Description    :  Used to count elements of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

int DoublyLL<T>::Count()
{
    return iSize;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  SinglyCLL() (Constructor) 
Input          :  -
Output         :  -
Description    :  Used to initialise the characteristics of class
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

SinglyCLL<T>::SinglyCLL()
{
    first = NULL;
    last = NULL;
    iSize = 0;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  InsertFirst()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyCLL<T>::InsertFirst(T No)
{
    node1<T> *newn = NULL;

    newn = new node1<T>;
    newn->data = No;
    newn->next = NULL;

    if ((first == NULL) && (last == NULL))
    {
        first = newn;
        first->next = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    last->next = first;
    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  InsertLast()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyCLL<T>::InsertLast(T No)
{
    node1<T> *newn = NULL;

    newn = new node1<T>;
    newn->data = No;
    newn->next = NULL;

    if ((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;
    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  InsertAtPos()
Input          :  Generic,Integer
Output         :  -
Description    :  Used to insert node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyCLL<T>::InsertAtPos(T No, int iPos)
{
    int iCnt = 0;
    node1<T> *temp = NULL;
    node1<T> *newn = NULL;

    if ((iPos < 1) || (iPos > (iSize + 1)))
    {
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == (iSize + 1))
    {
        InsertLast(No);
    }
    else
    {
        newn = new node1<T>;
        newn->data = No;
        newn->next = NULL;
        temp = first;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iSize++;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  DeleteFirst()
Input          :  -
Output         :  -
Description    :  Used to delete node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyCLL<T>::DeleteFirst()
{
    if ((first == NULL) && (last == NULL))
    {
        return;
    }
    else if (first->next == first)
    {
        delete (first);
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        free(last->next);
    }

    last->next = first;
    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  DeleteLast()
Input          :  -
Output         :  -
Description    :  Used to delete node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyCLL<T>::DeleteLast()
{
    node1<T> *temp = NULL;

    if ((first == NULL) && (last == NULL))
    {
        return;
    }
    else if (first == last)
    {
        delete (first);
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while (temp->next != last)
        {
            temp = temp->next;
        }
        temp->next = first;
        free(last);
        last = temp;
    }

    last->next = first;
    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  DeleteAtPos()
Input          :  Integer
Output         :  -
Description    :  Used to delete node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyCLL<T>::DeleteAtPos(int iPos)
{
    int iCnt = 0;
    node1<T> *temp = NULL;
    node1<T> *targated = NULL;

    if ((iPos < 1) || (iPos > iSize))
    {
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        temp = first;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        targated = temp->next;
        temp->next = temp->next->next;
        delete (targated);
        iSize--;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  Display()
Input          :  -
Output         :  -
Description    :  Used to display elemets of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void SinglyCLL<T>::Display()
{
    node1<T> *temp = NULL;
    temp = first;

    if ((first == NULL) && (last == NULL))
    {
        return;
    }

    cout << "Last Node<-";
    do
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    } while (temp != first);

    cout << "First Node\n";
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  SCLL
Class Name     :  SinglyCLL
Function Name  :  Count()
Input          :  -
Output         :  Integer
Description    :  Used to count elemets of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCLL<T>::Count()
{
    return iSize;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  DoublyCLL() (Constructor) 
Input          :  -
Output         :  -
Description    :  Used to initialise the characteristics of class
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

DoublyCLL<T>::DoublyCLL()
{
    first = NULL;
    last = NULL;
    iSize = 0;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  InsertFirst()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyCLL<T>::InsertFirst(T No)
{
    node2<T> *newn = new node2<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        newn->prev = last->next;
        last->next = newn;
        first = newn;
    }

    last->next = first;
    first->prev = last;
    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  InsertLast()
Input          :  Generic
Output         :  -
Description    :  Used to insert node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyCLL<T>::InsertLast(T No)
{
    node2<T> *newn = NULL;
    newn = new node2<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->prev = last;
        last->next = newn;
        last = newn;
    }

    last->next = first;
    first->prev = last;
    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  InsertAtPos()
Input          :  Generic,Integer
Output         :  -
Description    :  Used to insert node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyCLL<T>::InsertAtPos(T No, int iPos)
{
    if ((iPos < 1) || (iPos > (iSize + 1)))
    {
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == (iSize + 1))
    {
        InsertLast(No);
    }
    else
    {
        node2<T> *newn = NULL;
        node2<T> *temp = NULL;
        int iCnt = 0;

        newn = new node2<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;
        iSize++;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  DeleteFirst()
Input          :  -
Output         :  -
Description    :  Used to delete node at first position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyCLL<T>::DeleteFirst()
{
    if ((first == NULL) && (last == NULL))
    {
        return;
    }
    else if (first == last)
    {
        delete (first);
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete (last->next);
        last->next = first;
        first->prev = last;
    }

    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  DeleteLast()
Input          :  -
Output         :  -
Description    :  Used to delete node at last position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyCLL<T>::DeleteLast()
{
    if ((first == NULL) && (last == NULL))
    {
        return;
    }
    else if (first == last)
    {
        delete (first);
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete (last->next);
        last->next = first;
        first->prev = last;
    }

    iSize--;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  DeleteAtPos()
Input          :  Integer
Output         :  -
Description    :  Used to delete node at desired position of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyCLL<T>::DeleteAtPos(int iPos)
{
    if ((iPos < 1) || (iPos > iSize))
    {
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        node2<T> *temp = NULL;
        int iCnt = 0;
        temp = first;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        iSize--;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  Display()
Input          :  -
Output         :  -
Description    :  Used to display elements of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void DoublyCLL<T>::Display()
{
    node2<T> *temp = NULL;
    temp = first;

    if ((first == NULL) && (last == NULL))
    {
        return;
    }

    cout << "Last Node<-";

    for (int iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << "|" << (temp->data) << "|->";
        temp = temp->next;
    }

    cout << "First Node\n";
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  DCLL
Class Name     :  DoublyCLL
Function Name  :  Count()
Input          :  -
Output         :  Integer
Description    :  Used to count elements of linked list
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

int DoublyCLL<T>::Count()
{
    return iSize;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  STACK
Class Name     :  Stack
Function Name  :  Stack()
Input          :  -
Output         :  -
Description    :  Used to initialise the characteristics of class
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

Stack<T>::Stack()
{
    first = NULL;
    iSize = 0;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  STACK
Class Name     :  Stack
Function Name  :  Push()
Input          :  Generic
Output         :  -
Description    :  Used to insert element in stack
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void Stack<T>::Push(T No) //InsertFirst()
{
    node1<T> *newn = NULL;

    newn = new node1<T>;
    newn->data = No;
    newn->next = NULL;

    if (iSize == 0)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  STACK
Class Name     :  Stack
Function Name  :  Pop()
Input          :  -
Output         :  Generic
Description    :  Used to delete element from stack
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

T Stack<T>::Pop() //DeleteFirst
{
    T Temp = 0;
    node1<T> *temp = NULL;

    if (iSize == 0)
    {
        return -1;
    }
    else if (iSize == 1)
    {
        Temp = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        Temp = first->data;
        temp = first;
        first = first->next;
        delete temp;
    }

    iSize--;
    return Temp;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  STACK
Class Name     :  Stack
Function Name  :  Display()
Input          :  -
Output         :  -
Description    :  Used to display element from stack
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void Stack<T>::Display()
{
    node1<T> *temp = NULL;
    int iCnt = 0;

    temp = first;

    cout << "Elements from stack: \n";

    for (iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << "|" << temp->data << "|\n";
        temp = temp->next;
    }
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  STACK
Class Name     :  Stack
Function Name  :  Count()
Input          :  -
Output         :  Integer
Description    :  Used to count element from stack
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>
int Stack<T>::Count()
{
    return iSize;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  QUEUE
Class Name     :  Queue
Function Name  :  Queue()
Input          :  -
Output         :  -
Description    :  Used to initialise the characteristics of class
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

Queue<T>::Queue()
{
    first = NULL;
    iSize = 0;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  QUEUE
Class Name     :  Queue
Function Name  :  Enqueue()
Input          :  Generic
Output         :  -
Description    :  Used to insert element in queue
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void Queue<T>::Enqueue(T No) //InsertLast()
{
    node1<T> *newn = NULL;
    node1<T> *temp = NULL;

    newn = new node1<T>;
    newn->data = No;
    newn->next = NULL;

    if (iSize == 0)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iSize++;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  QUEUE
Class Name     :  Queue
Function Name  :  Dequeue()
Input          :  -
Output         :  Generic
Description    :  Used to delete element from queue
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

T Queue<T>::Dequeue() //DeleteFirst
{
    T Temp = 0;
    node1<T> *temp = NULL;

    if (iSize == 0)
    {
        return -1;
    }
    else if (iSize == 1)
    {
        Temp = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        Temp = first->data;
        temp = first;
        first = first->next;
        delete temp;
    }

    iSize--;
    return Temp;
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  QUEUE
Class Name     :  Queue
Function Name  :  Display()
Input          :  -
Output         :  -
Description    :  Used to display element from queue
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>

void Queue<T>::Display()
{
    node1<T> *temp = NULL;
    int iCnt = 0;

    temp = first;

    cout << "Elements from queue: \n";

    for (iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }

    cout << "NULL\n";
}

///////////////////////////////////////////////////////////////////////////////
/*
Namespace      :  QUEUE
Class Name     :  Queue
Function Name  :  Count()
Input          :  -
Output         :  -
Description    :  Used to count element from queue
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

template <class T>
int Queue<T>::Count()
{
    return iSize;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/*
Function Name  :  main()
Input          :  -
Output         :  Integer (Success to OS)
Description    :  Execution of program starts from main
Author         :  Aishwarya Sunil Karande
Date           :  18/11/2021
*/
///////////////////////////////////////////////////////////////////////////////

int main()
{
    //Object creation of class

    SinglyLL<char> sobj;

    //Initialisation of local variables

    int iRet = 0,
        iPos = 0,
        iChoice = 1;

    char Value = '\0';
    char Ret = '\0';
    int Ret1 = 0;

    // Menu driven calling of memeber function of class
    // For SLL,DLL,SCLL,DCLL
    while (iChoice != 0)
    {
        cout << "\n________________________________________\n";
        cout << "Enter the desired operation that you want to perform on LinkedList\n";
        cout << "1  :  Insert the node at first position\n";
        cout << "2  :  Insert the node at last position\n";
        cout << "3  :  Insert the node at the desired position\n";
        cout << "4  :  Delete the first node\n";
        cout << "5  :  Delete the last node\n";
        cout << "6  :  Delete the node at desired position\n";
        cout << "7  :  Display the contents of linked list\n";
        cout << "8  :  Count the number of nodes from linked list\n";
        cout << "9  :  Find first occurrence of particular element from linked list\n";
        cout << "10 :  Find last occurrence of particular element from linked list\n";
        cout << "11 :  Addition of all elements from linked list\n";
        cout << "12 :  Largest elements from linked list\n";
        cout << "13 :  Smallest elements from linked list\n";
        cout << "14 :  Perfect elements from linked list\n";
        cout << "15 :  Prime elements from linked list\n";
        cout << "16 :  Addition of all even integers from linked list\n";
        cout << "17 :  Second maximum element from linked list\n";
        cout << "18 :  Addition of digits of each element from linked list\n";
        cout << "19 :  Reverse digit of each element in linked list:\n";
        cout << "20 :  Pallindrom element in linked list:\n";
        cout << "21 :  Display product of digits of each element in linked list:\n";
        cout << "22 :  Display smallest digit of each element in linked list:\n";
        cout << "23 :  Display largest digit of each element in linked list:\n";
        cout << "0  :  Terminate the application\n";
        cout << "\n________________________________________\n";

        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            cout << "Enter the data to insert:\n";
            cin >> Value;
            sobj.InsertFirst(Value);
            break;

        case 2:
            cout << "Enter the data to insert:\n";
            cin >> Value;
            sobj.InsertLast(Value);
            break;

        case 3:
            cout << "Enter the data to insert:\n";
            cin >> Value;
            cout << "Enter the position:\n";
            cin >> iPos;
            sobj.InsertAtPos(Value, iPos);
            break;

        case 4:
            sobj.DeleteFirst();
            break;

        case 5:
            sobj.DeleteLast();
            break;

        case 6:
            cout << "Enter the position:\n";
            cin >> iPos;
            sobj.DeleteAtPos(iPos);
            break;

        case 7:
            printf("Node in linked list:\n");
            sobj.Display();
            break;

        case 8:
            iRet = sobj.Count();
            cout << "Number of node in linked list:" << iRet << "\n";
            break;

        case 9:
            cout<<"Enter the element to check:\n";
            cin>>Value;
            iRet = SearchFirstOcc(Value);
            cout<<"First occurance of element is:"<<iRet<<"\n";
            break;

        case 10:
            cout<<"Enter the element to check:\n";
            cin>>Value;
            iRet = SearchLastOcc(Value);
            cout<<"Last occurance of element is:"<<iRet<<"\n";
            break;

        case 11:
            Ret1 = Addition();
            cout<<"Addition of all element from linked list is:"<<Ret1<<"\n";
            break;

        case 12:
            Ret1 = Maximum();
            cout<<"Largest element from linked list is:"<<Ret1<<"\n";
            break;

        case 13:
            Ret1 = Minimum();
            cout<<"Smallest element from linked list is:"<<Ret1<<"\n";
            break;

        case 14:
            cout<<"Perfect number from linked list:\n";
            DisplayPerfect();
            break;

        case 15:
            cout<<"Prime number from linked list:\n";
            DisplayPrime();
            break;

        case 16:
            cout<<"Addition of all even element from linked list is:\n";
            AddEven();
            break;

        case 17:
            Ret1 = SecondMax();
            cout<<"Second largest element from linked list is:"<<Ret1<<"\n";
            break;

        case 18:
            cout<<"Addition of digits of each element from linked list\n:";
            SumDigit();
            break;

        case 19:
            cout<<"Reversed digit of each element from linked list\n:";
            ReverseDigit();
            break;

        case 20:
            cout<<"Pallindrome element from linked list\n:";
            DisplayPallindrome();
            break;

        case 21:
            cout<<"Product of digits of each element in linked list:\n";
            DisplayProductDigit();
            break;

        case 22:
            cout<<"Smallest digit of each element in linked list:\n";
            DisplaySmallestDigit();
            break;

        case 23:
            cout<<"Largest digit of each element in linked list:\n";
            DisplayLargestDigit();
            break;

        case 0:
            printf("Program Terminated...\n");
            break;

        default:
            printf("Please Enter valid choice");
            break;
        }
    }

    ///////////////////////////////////////////////////////////////////
    // For Stack
    // while (iChoice != 0)
    // {
    //     cout << "\n________________________________________\n";
    //     cout << "Enter the desired operation that you want to perform on LinkedList\n";
    //     cout << "1 : Push element in stack\n";
    //     cout << "2 : Pop element from stack\n";
    //     cout << "3  :  Display the contents of linked list\n";
    //     cout << "4  :  Count the number of nodes from linked list\n";
    //     cout << "0  :  Terminate the application\n";
    //     cout << "\n________________________________________\n";

    //     cin >> iChoice;

    //     switch (iChoice)
    //     {
    //     case 1:
    //         cout << "Enter the data to insert:\n";
    //         cin >> Value;
    //         sobj.Push(Value);
    //         break;

    //     case 2:
    //         Ret = sobj.Pop();

    //         if (Ret == -1)
    //         {
    //             cout << "There are no any elements in stack\n";
    //         }
    //         else
    //         {
    //             cout << "Popped element is: " << Ret << "\n";
    //         }

    //         break;

    //     case 3:
    //         sobj.Display();
    //         break;

    //     case 4:
    //         iRet = sobj.Count();
    //         cout << "Number of node in Satck:" << iRet << "\n";
    //         break;

    //     case 0:
    //         printf("Program Terminated...\n");
    //         break;

    //     default:
    //         printf("Please Enter valid choice");
    //         break;
    //     }
    // }

    ///////////////////////////////////////////////////////////////////
    // For Queue
    // while (iChoice != 0)
    // {
    //     cout << "\n________________________________________\n";
    //     cout << "Enter the desired operation that you want to perform on LinkedList\n";
    //     cout << "1 : Enqueue element in queue\n";
    //     cout << "2 : Dequeue element from queue\n";
    //     cout << "3  :  Display the contents of queue\n";
    //     cout << "4  :  Count the number of nodes from queue\n";
    //     cout << "0  :  Terminate the application\n";
    //     cout << "\n________________________________________\n";

    //     cin >> iChoice;

    //     switch (iChoice)
    //     {
    //     case 1:
    //         cout << "Enter the data to insert:\n";
    //         cin >> Value;
    //         qobj.Enqueue(Value);
    //         break;

    //     case 2:
    //         Ret = qobj.Dequeue();

    //         if (Ret == -1)
    //         {
    //             cout << "There are no any elements in queue\n";
    //         }
    //         else
    //         {
    //             cout << "Dequeued element is: " << Ret << "\n";
    //         }

    //         break;

    //     case 3:
    //         qobj.Display();
    //         break;

    //     case 4:
    //         iRet = qobj.Count();
    //         cout << "Number of node in Queue:" << iRet << "\n";
    //         break;

    //     case 0:
    //         printf("Program Terminated...\n");
    //         break;

    //     default:
    //         printf("Please Enter valid choice");
    //         break;
    //     }
    // }

    return 0;
}