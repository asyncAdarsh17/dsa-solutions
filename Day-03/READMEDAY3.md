today we studied about arrays and linked list

# Arrays : Array is a fixed sized collection of elements of the same data type stored in contiguous memory locations 

Memory Address:   100     104     108     112     116
                 +-------+-------+-------+-------+-------+
Array:           |  5    |  8    |  12   |  3    |  9    |
                 +-------+-------+-------+-------+-------+
Index:            0       1       2       3       4   

Array limitations :
1. Arrays store elements in continuous memory,
2. which makes accessing any element very fast using its index. 
3. Inserting or deleting at the end of the array is easy because nothing needs to shift. 
4. However, if you want to insert or delete in the middle, all the elements after that point must be moved one position forward or backward.  
5. This shifting makes the operation slower and more complex.

Array benefits :
Think of an array like a row of numbered lockers built right next to each other (continuous memory).

* Fast Access: Because they are in a straight line, you can jump instantly to any locker if you know its number (index).

__________________________________________________________________________________________________


# Linklist :

      HEAD
       ↓
    +-------+      +-------+      +-------+      +-------+
    |  10   |      |  20   |      |  30   |      |  40   |
    |  next |----->|  next |----->|  next |----->|  next |-----> NULL
    +-------+      +-------+      +-------+      +-------+
    (Addr: 100)    (Addr: 505)    (Addr: 212)    (Addr: 899)
    ^ Random Memory Locations (Not Continuous)   


    


