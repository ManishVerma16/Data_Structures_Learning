# Tower of Hanoi Problem using recursion

def TOH(n, A, B, C):
    if n>0:
        TOH(n-1, A, C, B)
        print("disk moved from " + str(A) +" to "+str(B))
        print("(" +str(A) +", "+ str(B) +")")
        TOH(n-1, B,A,C)

TOH(3,1,2,3)
