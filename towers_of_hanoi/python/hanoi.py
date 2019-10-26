def towerOfHanoi(numberOfDisks, fromRod, toRod, auxRod):
    if numberOfDisks == 1:
        print("Move {} from {} to {}".format(numberOfDisks,fromRod,toRod))
        return
    towerOfHanoi(numberOfDisks-1,fromRod,auxRod,toRod)
    print("Move {} from {} to {}".format(numberOfDisks,fromRod,toRod))
    towerOfHanoi(numberOfDisks-1,auxRod,toRod,fromRod)

if __name__ == "__main__":
    n = int(input("Enter number of disks: "))
    towerOfHanoi(n,'A','C','B')
