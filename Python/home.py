from Datastructure import DoublyCircularLL;

def main():

    sobj = DoublyCircularLL()
    iRet = None

    sobj.insertFirst(51)
    sobj.insertFirst(11.11)
    sobj.insertFirst('c')
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))

    # sobj.insertLast(51)
    # sobj.insertLast(21)
    # sobj.insertLast(11)
    sobj.insertLast(101)
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))

    sobj.insertAtPos(101,2)
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))
    sobj.insertAtPos(111,1)
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))
    sobj.insertAtPos(151,7)
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))

    sobj.deleteFirst()
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))

    sobj.deleteLast()
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))

    sobj.deleteAtPos(3)
    sobj.display()
    iRet = sobj.count()
    print("Number of nodes in linked list are : {}".format(iRet))


    ########################################################################

    # sobj.insertFirst('python')
    # sobj.insertFirst(11)
    # sobj.insertFirst(11.11)
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))

    # # sobj.insertLast(51)
    # # sobj.insertLast(21)
    # # sobj.insertLast(11)
    # sobj.insertLast('d')
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))

    # sobj.insertAtPos('e',2)
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))
    # sobj.insertAtPos('f',1)
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))
    # sobj.insertAtPos('g',7)
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))

    # sobj.deleteFirst()
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))

    # sobj.deleteLast()
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))

    # sobj.deleteAtPos(3)
    # sobj.display()
    # iRet = sobj.count()
    # print("Number of nodes in linked list are : {}".format(iRet))


if __name__ == "__main__":
    main()