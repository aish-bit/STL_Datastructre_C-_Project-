package Datastructure.Linear;
import Datastructure.Nodetype.TwoMembNode;

public class SinglyCircularLL<G>
{
    private TwoMembNode first;
    private TwoMembNode last;
    private int iSize;

    public SinglyCircularLL()
    {
        first = null;
        last = null;
        iSize = 0;
    }

    public void insertFirst(G value)
    {
        //allocating memory to node
        TwoMembNode newn = new TwoMembNode();

        //Initialising member of node
        newn.data = value;
        newn.next = null;

        //adding node to linked list
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
            newn.next = first;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        last.next = first;
        iSize++;
    }

    public void display()
    {
        if(first == null && last == null)
        {
            System.out.println("OOOppss..Linked list is empty.There is nothing to display");
            return;
        }

        int iCnt = 0;
        TwoMembNode temp = first;

        for(iCnt = 1;iCnt <= iSize;iCnt++)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("circular");
    }

    public int count()
    {
        return iSize;
    }

    public void insertLast(G value)
    {
        //allocating memory to node
        TwoMembNode newn = new TwoMembNode();

        //Initialising member of node
        newn.data = value;
        newn.next = null;

        //adding node to linked list
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
            newn.next = newn;
        }
        // else if(first.next == first && last.next == first) 
        // {
        //     first.next = newn;
        //     last = newn;
        //     last.next = first;
        // }
        else
        {
            last.next = newn;
            last = newn;
            last.next = first;
        }

        last.next = first;
        iSize++;
    }

    public void insertAtPos(G value,int iPos)
    {
        if(iPos < 1 || iPos > iSize+1)
        {
            System.out.println("Kindly check the provided input position value.");
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
            //allocating memory to node
            TwoMembNode newn = new TwoMembNode();

            //Initialising member of node
            newn.data = value;
            newn.next = null;

            //adding node to linked list 
            TwoMembNode temp = first;
            int iCnt = 0;

            for(iCnt = 1;iCnt < iPos-1; iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
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
        else if(first == last) 
        {
            first = null;
            last  = null; 
        }
        else
        {
            first = first.next;
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
        else if(first == last) 
        {
            first = null;
            last  = null; 
        }
        else
        {
            TwoMembNode temp = first;

            while(temp.next != last)
            {
                temp = temp.next;
            }

            last = null;
            last = temp;
            last.next = first;
        }

        iSize--;

    }


    public void deleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iSize)
        {
            System.out.println("Kindly check the provided input position value.");
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

            for(iCnt = 1;iCnt < iPos-1; iCnt++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;

            iSize--;
        }
    }
}

