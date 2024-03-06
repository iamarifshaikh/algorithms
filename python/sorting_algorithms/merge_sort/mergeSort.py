def mergeSort(array):
    if len(array) > 1:
        middle = len(array) // 2
        leftHalf = array[:middle]
        rightHalf = array[middle:]

        mergeSort(leftHalf)
        mergeSort(rightHalf)

        # Merge the sorted halves
        i = j = k = 0
        
        while i < len(leftHalf) and j < len(rightHalf):
            if leftHalf[i] < rightHalf[j]:
                array[k] = leftHalf[i]
                i += 1
            else:
                array[k] = rightHalf[j]
                j += 1
            k += 1
        
        while i < len(leftHalf):
            array[k] = leftHalf[i]
            i += 1
            k += 1
        
        while j < len(rightHalf):
            array[k] = rightHalf[j]
            j += 1
            k += 1

def printArray(array):
    for element in array:
        print(element,end=" ")
    print()

def main():
    size = int(input("Enter the size of the array: "))

    array = []

    print(f"Enter the {size} element: ")
    for i in range(size):
        element = int(input("Element {}: ".format(i + 1)))
        array.append(element)
    
    # Original array
    print("\nOriginal array:")
    printArray(array)

    # Function To Perform Merge Sort]
    mergeSort(array)

    # Sorted Array
    print("\nSorted array:")
    printArray(array)

    
if __name__ == "__main__":
    main()