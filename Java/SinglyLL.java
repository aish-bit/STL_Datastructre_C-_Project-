package Datastructure.Linear;
import Datastructure.Nodetype.TwoMembNode;


public class SinglyLL<G>
{
    private TwoMembNode first;
    private int iSize;

    public SinglyLL()
    {
        first = null;
        iSize = 0;
    }

    public void insertFirst(G value)
    {
        //creating reference to allocate memory to node 
        TwoMembNode newn = null;

        //allocating memory to node
        newn = new TwoMembNode();

        //initialising node members
        newn.data = value;
        newn.next = null;

        //adding node in linked list
        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        iSize++;
    }

    public void display()
    {
        if(first == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to display");
            return;
        }

        TwoMembNode temp = first;

        while(temp != null)
        {
            System.out.print("|" + temp.data + "|->");
            temp = temp.next;
        }

        System.out.print("null\n");
    }

    public int count()
    {
        return iSize;
    }

    public void insertLast(G value)
    {   //creating reference to allocate memory to node
        TwoMembNode newn = null;

        //allocating memory to node
        newn = new TwoMembNode();

        //initialising node members
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
        }
        else
        {
            TwoMembNode temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        iSize++;
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
            iSize--;
        }
        else
        {
            TwoMembNode temp = first;
            first = first.next;
            temp = null;
            iSize--;
        }
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
            iSize--;
        }
        else
        {
            TwoMembNode temp = first;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;

            iSize--;
        }
    }

    public void insertAtPos(G value,int iPos)
    {
        if((iPos < 1) || (iPos > iSize+1))
        {
            System.out.println("Please check the provided position");
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
            //creating reference to allocate memory to node
            TwoMembNode newn = null;

            //allocating memory to node
            newn = new TwoMembNode();

            //initialising node members
            newn.data = value;
            newn.next = null;

            TwoMembNode temp = first;
            int iCnt = 0;

            for(iCnt = 1;iCnt<iPos-1;iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            iSize++;

        }
    }

    public void deleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iSize)
        {
            System.out.println("Please check the provided position");
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
            TwoMembNode temp = first;
            int iCnt = 0;

            for(iCnt = 1;iCnt < iPos-1;iCnt++)
            {
                temp = temp.next;
            }

            TwoMembNode targated = temp.next;
            temp.next = temp.next.next;
            targated = null;
            iSize--;
        }
    }

}

