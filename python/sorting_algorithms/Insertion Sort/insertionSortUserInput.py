def insertionSort(array,reverse=True):
    """
    Perform insertion sort on the given list 'arr'.
    If 'reverse' is True, sort the list in descending order.
    """
    for i in range(1,len(array)):
        key = array[i]
        j = i - 1
        
        # For descending order, change the comparison operator 
        while j >= 0 and (key > array[j] if not reverse else key < array[j]):
            array[j + 1] = array[j]    
            j -= 1
        array[j + 1] = key        


def getInput():
    while True:
        try:
            size = int(input("Enter the size of the array: "))
            if size <= 0:
                print("Please enter a positive integer: ")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a valid integer!")

    array = []
    for i in range(size):
        while True:
            try:
                element = int(input(f"Enter element {i + 1}: "))
                array.append(element)
                break
            except ValueError:
                print("Invalid input. Please enter a valid integer!")

    return array

def main():
    """ Main function to orchestrate the sorting process """
    array = getInput()
    print("Original array:",array)
    
    # Function To Perform Insertion Sort in ascending order
    insertionSort(array)
    print("Sorted array (in ascending order): \n",array)
    
    # Function To Perform Insertion Sort in descending order
    insertionSort(array,reverse=False)
    print("Sorted array (in descending order): \n",array)

if __name__ == "__main__":
    main()