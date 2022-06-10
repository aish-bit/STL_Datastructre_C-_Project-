package Datastructure.Linear;
import Datastructure.Nodetype.ThreeMembNode;

public class DoublyLL<G>
{
    private ThreeMembNode first;
    private int iSize;

    public DoublyLL()
    {
        first = null;
        iSize = 0;
    }

    public int count()
    {
        return iSize;
    }
    
    public void display()
    {
        if(first == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to display");
            return;
        }

        int iCnt = 0;
        ThreeMembNode temp = first;

        System.out.print("null"+"<=>");
        for(iCnt = 1;iCnt<=iSize;iCnt++)
        {
            System.out.print("|"+temp.data+"|<=>");
            temp = temp.next;
        }

        System.out.println("null");
    }

    public void insertFirst(G value)
    {
        //allocating memory to node
        ThreeMembNode newn = new ThreeMembNode();

        //Initialising node members
        newn.data = value;
        newn.prev = null;
        newn.next = null;

        //adding node in linked list
        if(first == null)
        {
            first = newn;
        }
        else 
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        iSize++;
    }

    public void insertLast(G value)
    {
        //memory allocation to node
        ThreeMembNode newn = new ThreeMembNode();

        //initialising members of node
        newn.prev = null;
        newn.data = value;
        newn.next = null;

        //adding node to linked list
        if(first == null)
        {
            first = newn;
        }
        else if(first.next == null)
        {
            first.next = newn;
            newn.prev = first;
        }
        else
        {
            ThreeMembNode temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
            newn.prev = temp;
        }

        iSize++;
    }

    public void insertAtPos(G value,int iPos)
    {
        if(iPos < 1 || iPos > iSize+1)
        {
            System.out.println("Please check provided input position.");
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
            ThreeMembNode temp = first;
            int iCnt = 0;

            //memory allocation to node
            ThreeMembNode newn = new ThreeMembNode();

            //initialising members of node
            newn.prev = null;
            newn.data = value;
            newn.next = null;

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
        if(first == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to delete");
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            ThreeMembNode temp = null;

            first.next.prev = null;
            temp = first;
            first = first.next;
            temp = null;
        }
        
        iSize--;

    }

    public void deleteLast()
    {
        if(first == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to delete");
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            ThreeMembNode temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next.prev = null;
            temp.next = null;
        }  

        iSize--; 
    }

    public void deleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iSize)
        {
            System.out.println("Please check provided input position.");
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
            ThreeMembNode targated = null;
            int iCnt = 0;

            for(iCnt = 1;iCnt < iPos-1;iCnt++)
            {
                temp = temp.next;
            }

            targated = temp.next;
            targated.next.prev = temp;
            temp.next = targated.next;
            targated = null;
            iSize--;
        }
    }

}

