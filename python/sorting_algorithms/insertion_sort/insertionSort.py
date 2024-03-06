def insertionSort(array):
    for step in range(1,len(array)):
        key = array[step]
        j = step - 1
        # Compare key with each element on the left of it until an element smaller than it is found
        while j >= 0 and key < array[j]:
            array[j + 1] = array[j]               
            j -= 1
        # Place key at after the element just smaller than it. 
        array[j + 1] = key 

array = [19, 5, 13, -4, 3,10,0,11,2]
print(array)

# Peform Insertion Sort for each element in the array
insertionSort(array)
print("Sorted Array In Ascending Order:\n",array)