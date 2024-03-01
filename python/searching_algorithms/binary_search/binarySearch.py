def binarySearch(array,key,low,high):
     # Repeat until the pointers low and high meet each other
    while low <= high:
       
        middle = low + (high - low) // 2

        if array[middle] == key:
            return middle
        elif array[middle] < key:
            low = middle + 1
        else:
            high = middle - 1

    return -1

array = [12,14,16,18,20,22,24]
key = 16

result = binarySearch(array,key,0,len(array) - 1)

if result != -1:
    print('Element is present at index: '+ str(result))
else:
    print("Not Found")