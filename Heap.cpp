/*
-> Heap is a complete binary tree(CBT) that comes with a heaporder property.
-> CBT(complete binary tree):- Every level is completely filled except the last level. Nodes are always added from the left.
-> Heaporder property:- In a max heap, the parent node is greater than or equal to the 
   child nodes. In a min heap, the parent node is less than or equal to the child nodes.

*Insertion property:-
-> For max heap:- Take array having value sorted in descending order.0th index will be empty.
Left child will be present at 2*i index. Right child will be present at (2*i)+1 index. Parent child will be found at i/2 index.

 */
