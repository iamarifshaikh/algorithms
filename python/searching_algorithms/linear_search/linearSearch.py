def linearSearch(array,size,key):
    for i in range(0,size):
        if array[i] == key:
            return i
    return -1

array = [2,3,89,12,34,24,56,6]
size = len(array)
key = 24

result = linearSearch(array,size,key)

if(result != -1):
    print("Element found at index:",result)
else:
    print("No element found at index")