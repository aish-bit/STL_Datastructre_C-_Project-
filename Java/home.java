import Datastructure.Linear.DoublyCircularLL;

class home
{
    public static void main(String args[])
    {
        int iRet = 0;

        // SinglyLL <Integer>sobj = new SinglyLL<Integer>();
        // SinglyLL <Float>sobj = new SinglyLL<Float>();
        DoublyCircularLL <Float>sobj = new DoublyCircularLL<Float>();
        

        sobj.insertFirst(51.1f);
        sobj.insertFirst(21.1f);
        sobj.insertFirst(11.1f);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);

        // sobj.insertLast(51);
        // sobj.insertLast(21);
        // sobj.insertLast(11);
        sobj.insertLast(101.1f);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.deleteFirst();
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.deleteLast();
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.insertAtPos(101.1f,2);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);
        sobj.insertAtPos(11.1f,1);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);
        sobj.insertAtPos(151.1f,3);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);
        sobj.insertAtPos(201.1f,6);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.deleteAtPos(3);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);
        sobj.deleteAtPos(1);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);
        sobj.deleteAtPos(4);
        sobj.display();
        iRet = sobj.count();
        System.out.println("Number of nodes are : "+iRet);


        // int iRet = 0;
        // Dll dobj = new Dll();

        // dobj.insertFirst(51);
        // dobj.insertFirst(21);
        // dobj.insertFirst(11);
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);

        // dobj.insertLast(101);
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);

        // dobj.insertAtPos(111,2);
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);
        // dobj.insertAtPos(151,6);
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);
        // dobj.insertAtPos(201,1);
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);

        // dobj.deleteFirst();
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);

        // dobj.deleteLast();
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);

        // dobj.deleteAtPos(2);
        // dobj.display();
        // iRet = dobj.count();
        // System.out.println("Number of nodes in linked list are : "+iRet);


    }
}


       