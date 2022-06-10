
# from distutils.command.build_scripts import first_line_re
# from sys import ps1


class TwoMembNode:
    def __init__(self):
        self.data = None
        self.next = None


class ThreeMembNode:
    def __init__(self):
        self.prev = None
        self.data = None
        self.next = None


class SinglyLL:

    def __init__(self):
        self.__first = None
        self.__iSize = 0


    def __del__(self):
            self.__first = None
            self.__iSize = None


    def insertFirst(self,value):

        # allocating memory to node
        newn = TwoMembNode()

        # initialising node members
        newn.data = value
        newn.next = None

        # adding to linked list
        if(self.__first == None):
            self.__first = newn
        else:
            newn.next = self.__first
            self.__first = newn

        self.__iSize += 1   


    def display(self):

        if(self.__first == None):
            print("OOOppss..Linked list is empty.There is nothing to display")
            return

        temp = self.__first  

        for iCnt in range(self.__iSize):
            print("|",temp.data,"|->",end = "")  
            temp = temp.next

        print(" None") 


    def count(self):
        return self.__iSize


    def insertLast(self,value):

        # allocating memory to node    
        newn = TwoMembNode()

        # initialising node members
        newn.data = value
        newn.next = None

        # adding node to linked list
        if(self.__first == None):
            self.__first = newn
        elif(self.__first.next == None):
            self.__first.next = newn
        else:
            temp = self.__first

            while(temp.next != None):
                temp = temp.next

            temp.next = newn

        self.__iSize += 1     


    def insertAtPos(self,value,iPos):

        if(iPos < 1 or iPos > self.__iSize+1):
            print("Please check provided input position.")
            return

        if(iPos == 1):
            self.insertFirst(value)    
        elif(iPos == self.__iSize+1):
            self.insertLast(value) 
        else:
            # allocating memory to node    
            newn = TwoMembNode()

            # initialising node members
            newn.data = value
            newn.next = None

            # adding node to linked list
            temp = self.__first
            iCnt = 1
            while(iCnt < iPos-1):
                temp = temp.next
                iCnt += 1

            newn.next = temp.next
            temp.next = newn

            self.__iSize += 1


    def deleteFirst(self):

        if(self.__first == None):
            print("OOOppss..Linked list is empty.There is nothing to delete.")
            return

        elif(self.__first.next == None):
            self.__first = None
        else:
            self.__first = self.__first.next

        self.__iSize -= 1   


    def deleteLast(self):

        if(self.__first == None):
            print("OOOppss..Linked list is empty.There is nothing to delete.")
            return

        elif(self.__first.next == None):
            self.__first = None
        else:
            temp = self.__first
            while(temp.next.next != None):
                temp = temp.next
            temp.next = None

        self.__iSize -= 1   


    def deleteAtPos(self,iPos):
        if(iPos < 1 or iPos > self.__iSize):
            print("Please check provided input position.")
            return

        if(iPos == 1):
            self.deleteFirst()    
        elif(iPos == self.__iSize):
            self.deleteLast() 
        else:   
            temp = self.__first

            for iCnt in range(iPos-2):
                temp = temp.next

            temp.next = temp.next.next

            self.__iSize -= 1    


class DoublyLL:

    def __init__(self):
        self.__first = None
        self.__iSize = 0

    def __del__(self):
        self.__first = None
        self.__iSize = 0    
    

    def count(self):
        return self.__iSize
    
    
    def display(self):

        if(self.__first == None):
            print("OOOppss..Linked list is empty.There is nothing to display.")
            return

        temp = self.__first

        print("None","<=>",end="")

        for iCnt in range(self.__iSize):
            print("|",temp.data,"|<=>",end="")
            temp = temp.next

        print("None")
    

    def insertFirst(self,value):
    
        # allocating memory to node
        newn = ThreeMembNode()

        # Initialising node members
        newn.data = value
        newn.prev = None
        newn.next = None

        # adding node in linked list
        if(self.__first == None):
            self.__first = newn
        else: 
            newn.next = self.__first
            self.__first.prev = newn
            self.__first = newn

        self.__iSize += 1
   

    def insertLast(self,value):
        # memory allocation to node
        newn = ThreeMembNode()

        # initialising members of node
        newn.prev = None
        newn.data = value
        newn.next = None

        # adding node to linked list
        if(self.__first == None):
            self.__first = newn
        elif(self.__first.next == None):
            self.__first.next = newn
            newn.prev = self.__first
        else:
            temp = self.__first

            while(temp.next != None):
                temp = temp.next

            temp.next = newn
            newn.prev = temp

        self.__iSize += 1


    def insertAtPos(self,value,iPos):

        if((iPos < 1) or (iPos > self.__iSize+1)):
            print("Please check provided input position.")
            return

        if(iPos == 1):
            self.insertFirst(value)
        elif(iPos == self.__iSize+1):
            self.insertLast(value)
        else:
            temp = self.__first

            # memory allocation to node
            newn = ThreeMembNode()

            # initialising members of node
            newn.prev = None
            newn.data = value
            newn.next = None

            for iCnt in range(1,iPos-1,1):    
                temp = temp.next

            newn.next = temp.next
            newn.prev = temp
            temp.next.prev = newn
            temp.next = newn

            self.__iSize += 1
      

    def deleteFirst(self):

        if(self.__first == None):
            print("OOOppss..Linked list is empty.There is nothing to delete.")
            return

        elif(self.__first.next == None):
            self.__first = None
        else:
            temp = None

            self.__first.next.prev = None
            temp = self.__first
            self.__first = self.__first.next
            temp = None
        
        
        self.__iSize -= 1

    
    def deleteLast(self):

        if(self.__first == None):
            print("OOOppss..Linked list is empty.There is nothing to delete.")
            return

        elif(self.__first.next == None):
            self.__first = None
        else:
            temp = self.__first

            while(temp.next.next != None):
                temp = temp.next

            temp.next.prev = None
            temp.next = None

        self.__iSize -= 1


    def deleteAtPos(self,iPos):

        if(iPos < 1 or iPos > self.__iSize):
            print("Please check provided input position.")
            return

        if(iPos == 1):
            self.deleteFirst()
        elif(iPos == self.__iSize):
            self.deleteLast()
        else:
            temp = self.__first
            targated = None
            
            for iCnt in range(1,iPos-1,1):
                temp = temp.next

            targated = temp.next
            targated.next.prev = temp
            temp.next = targated.next
            targated = None
            self.__iSize -= 1
        


class SinglyCircularLL:
    
    def __init__(self):
        self.__first = None
        self.__last = None
        self.__iSize = 0

    def insertFirst(self,value):
    
        # allocating memory to node
        newn = TwoMembNode()

        # Initialising member of node
        newn.data = value
        newn.next = None

        # adding node to linked list
        if(self.__first == None and self.__last == None):
            self.__first = newn
            self.__last = newn
            newn.next = self.__first
        else:
            newn.next = self.__first
            self.__first = newn
        
        self.__last.next = self.__first
        self.__iSize += 1
    

    def display(self):
    
        if(self.__first == None and self.__last == None):
            print("OOOppss..Linked list is empty.There is nothing to display")
            return

        temp = self.__first

        for iCnt in range(self.__iSize):
            print("|",temp.data,"|->",end="")
            temp = temp.next
        
        print("circular")
    

    def count(self):
    
        return self.__iSize
    

    def insertLast(self,value):
    
        # allocating memory to node
        newn = TwoMembNode()

        # Initialising member of node
        newn.data = value
        newn.next = None

        # adding node to linked list
        if(self.__first == None and self.__last == None):
            self.__first = newn
            self.__last = newn
            newn.next = newn
        
        #  elif(self.__first.next == self.__first and self.__last.next == self.__first) 
        #  
        #      self.__first.next = newn
        #      self.__last = newn
        #      self.__last.next = self.__first
        #  
        else:
            self.__last.next = newn
            self.__last = newn
            self.__last.next = self.__first
        

        self.__last.next = self.__first
        self.__iSize += 1
    

    def insertAtPos(self,value,iPos):
    
        if(iPos < 1 or iPos > self.__iSize+1):
            print("Kindly check the provided input position value.")
            return

        if(iPos == 1):
            self.insertFirst(value)
        elif(iPos == self.__iSize+1):
            self.insertLast(value)
        else:

            # allocating memory to node
            newn = TwoMembNode()

            # Initialising member of node
            newn.data = value
            newn.next = None

            # adding node to linked list 
            temp = self.__first
            
            for iCnt in range(1,iPos-1,1):
                temp = temp.next

            newn.next = temp.next
            temp.next = newn

            self.__iSize += 1
        
    

    def deleteFirst(self):
    
        if(self.__first == None and self.__last == None):
            print("OOOppss..Linked list is empty.There is nothing to delete")
            return
        elif(self.__first == self.__last): 
            self.__first = None
            self.__last  = None 
        else:
            self.__first = self.__first.next
            self.__last.next = self.__first

        self.__iSize -= 1
    

    def deleteLast(self):
    
        if(self.__first == None and self.__last == None):
            print("OOOppss..Linked list is empty.There is nothing to delete")
            return
        elif(self.__first == self.__last): 
            self.__first = None
            self.__last  = None 
        else:
            temp = self.__first

            while(temp.next != self.__last):
            
                temp = temp.next
            

            self.__last = None
            self.__last = temp
            self.__last.next = self.__first

        self.__iSize -= 1


    def deleteAtPos(self,iPos):
    
        if(iPos < 1 or iPos > self.__iSize):
            print("Kindly check the provided input position value.")
            return

        if(iPos == 1):
            self.deleteFirst()
        elif(iPos == self.__iSize):
            self.deleteLast()
        else:
            temp = self.__first
            
            for iCnt in range(1,iPos-1,1):
                temp = temp.next
                
            temp.next = temp.next.next

            self.__iSize -= 1
        



class DoublyCircularLL:

    def __init__(self):
        self.__first = None
        self.__last  = None
        self.__iSize = 0

    def __del__(self):
        self.__first = None
        self.__last  = None
        self.__iSize = 0   

    def insertFirst(self,value):
    
        # allocating memory to node
        newn = ThreeMembNode()

        #initialising node members
        newn.data = value
        newn.prev = None
        newn.next = None

        #adding node in linked list
        if(self.__first == None and self.__last == None):
            self.__first = newn
            self.__last = newn
            newn.next = self.__first
            newn.prev = self.__last
        else:
            newn.next = self.__first
            newn.prev = self.__last
            self.__first.prev = newn
            self.__first = newn 
        

        self.__last.next = self.__first
        self.__first.prev = self.__last
        self.__iSize += 1

    def display(self):
    
        if(self.__first == None and self.__last == None):
            print("OOOppss..Linked list is empty.There is nothing to display.")
            return

        temp = self.__first

        print("Circular<=>",end = "")
        for iCnt in range(self.__iSize):
            print("|",temp.data,"|<=>",end = "")
            temp = temp.next
        
        print("Circular")

        temp = None
    

    def count(self):
        return self.__iSize

    def insertLast(self,value):
    
        # allocating memory to node
        newn = ThreeMembNode()

        #initialising node members
        newn.data = value
        newn.prev = None
        newn.next = None

        #adding node in linked list
        if(self.__first == None and self.__last == None):
            self.__first = newn
            self.__last = newn
            newn.next = self.__first
            newn.prev = self.__last
        else: 
            newn.next = self.__first
            newn.prev = self.__last
            self.__last.next = newn
            self.__last = newn

        self.__last.next = self.__first
        self.__first.prev = self.__last
        self.__iSize += 1


    def insertAtPos(self,value,iPos):
    
        if(iPos < 1 or iPos > self.__iSize+1):
            print("Please check provided position")
            return

        if(iPos == 1):
            self.insertFirst(value)
        elif(iPos == self.__iSize+1):
            self.insertLast(value)
        else:
            # allocating memory to node
            newn = ThreeMembNode()

            #initialising node members
            newn.data = value
            newn.prev = None
            newn.next = None

            #adding node in linked list
            temp = self.__first
            
            for iCnt in range(1,iPos-1,1):
                temp = temp.next

            newn.next = temp.next
            newn.prev = temp
            temp.next.prev = newn
            temp.next = newn
       
            self.__iSize += 1
        

    def deleteFirst(self):
    
        if(self.__first == None and self.__last == None):
            print("OOOppss..Linked list is empty.There is nothing to delete")
            return
        
        elif(self.__first==self.__last):
            self.__first = None
            self.__last = None
        else:
            self.__first = self.__first.next
            self.__last.next = None
            self.__first.prev = self.__last
            self.__last.next = self.__first


        self.__iSize -= 1
    

    def deleteLast(self):
    
        if(self.__first == None and self.__last == None):
            print("OOOppss..Linked list is empty.There is nothing to delete")
            return
        elif(self.__first==self.__last):
            self.__first = None
            self.__last = None
        else:
            self.__first.prev = self.__last.prev
            self.__last = None
            self.__last = self.__first.prev
            self.__last.next = self.__first

        self.__iSize -= 1
    

    def deleteAtPos(self,iPos):
    
        if(iPos < 1 or iPos > self.__iSize):
            print("Please check provided position")
            return

        if(iPos == 1):
            self.deleteFirst()
        elif(iPos == self.__iSize):
            self.deleteLast()
        else:
            temp = self.__first
            
            for iCnt in range(1,iPos-1,1):
                temp = temp.next

            temp.next.next.prev = temp
            temp.next = temp.next.next
       
            self.__iSize -= 1
            

    












