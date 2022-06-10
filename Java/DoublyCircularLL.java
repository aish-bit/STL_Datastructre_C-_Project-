
package Datastructure.Linear;
import Datastructure.Nodetype.ThreeMembNode;

public class DoublyCircularLL<G>
{

    private ThreeMembNode first;
    private ThreeMembNode last;
    private int iSize;


    public DoublyCircularLL()
    {
        first = null;
        last  = null;
        iSize = 0;
    }


    public void insertFirst(G value)
    {
        // allocating memory to node
        ThreeMembNode newn = new ThreeMembNode();

        //initialising node members
        newn.data = value;
        newn.prev = null;
        newn.next = null;

        //adding node in linked list
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
            newn.next = first;
            newn.prev = last;
        }
        else
        {
            newn.next = first;
            newn.prev = last;
            first.prev = newn;
            first = newn; 
        }

        last.next = first;
        first.prev = last;
        iSize++;

    }


    public void display()
    {
        if(first == null && last == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to display.");
            return;
        }

        int iCnt = 0;
        ThreeMembNode temp = first;

        System.out.print("Circular<=>");
        for(iCnt = 1 ; iCnt <= iSize ; iCnt++)
        {
            System.out.print("|"+temp.data+"|<=>");
            temp = temp.next;
        }
        System.out.println("Circular");

        temp = null;
    }

    public int count()
    {
        return iSize;
    }


    public void insertLast(G value)
    {
        // allocating memory to node
        ThreeMembNode newn = new ThreeMembNode();

        //initialising node members
        newn.data = value;
        newn.prev = null;
        newn.next = null;

        //adding node in linked list
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
            newn.next = first;
            newn.prev = last;
        }
        else 
        {
            newn.next = first;
            newn.prev = last;
            last.next = newn;
            last = newn;

        }

        last.next = first;
        first.prev = last;
        iSize++;

    }


    public void insertAtPos(G value,int iPos)
    {
        if(iPos < 1 || iPos > iSize+1)
        {
            System.out.println("Please check provided position");
            return;
        }

        if(iPos == 1)
        {
            insertFirst(value);
        }
        else if(iPos == iSize+1)
        {
            insertLast(value);
        }
        else
        {
            // allocating memory to node
            ThreeMembNode newn = new ThreeMembNode();

            //initialising node members
            newn.data = value;
            newn.prev = null;
            newn.next = null;

            //adding node in linked list
            ThreeMembNode temp = first;
            int iCnt = 0;

            for(iCnt = 1;iCnt<iPos-1;iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            newn.prev = temp;
            temp.next.prev = newn;
            temp.next = newn;
       
            iSize++;
        }

    }

    public void deleteFirst()
    {
        if(first == null && last == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to delete");
            return;
        }
        else if(first==last)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
            last.next = null;
            first.prev = last;
            last.next = first;

        }

        iSize--;
    }

    public void deleteLast()
    {
        if(first == null && last == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to delete");
            return;
        }
        else if(first==last)
        {
            first = null;
            last = null;
        }
        else
        {
            first.prev = last.prev;
            last = null;
            last = first.prev;
            last.next = first;

        }

        iSize--;
    }

    public void deleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iSize)
        {
            System.out.println("Please check provided position");
            return;
        }

        if(iPos == 1)
        {
            deleteFirst();
        }
        else if(iPos == iSize)
        {
            deleteLast();
        }
        else
        {
            ThreeMembNode temp = first;
            int iCnt = 0;

            for(iCnt = 1;iCnt<iPos-1;iCnt++)
            {
                temp = temp.next;
            }

            temp.next.next.prev = temp;
            temp.next = temp.next.next;
       
            iSize--;
        }    

    }

}

