def bubbleSort(array):
    # loop through each element of array
    for step in range(len(array)):
        swapped = False

        # loop to compare array elements
        for j in range(0,len(array) - step -1):
            # compare two adjacent elements
            # change > to < to sort in descending order.
            temporary = array[j]
            array[j] = array[j + 1]
            array [j + 1] = temporary

            swapped = True
        
        if not swapped:
            break

element = [54,88,32,6,-2]

print('UnSorted Array:')
print(element)

bubbleSort(element)

print('Sorted Array in Ascending Order:')
print(element)