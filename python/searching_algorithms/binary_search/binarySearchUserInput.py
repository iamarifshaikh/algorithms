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


def main():
    size = int(input("Enter the size of the array: "))
    array = []

    print("Enter the element sequentially")
    # Input the elements of an Array
    for i in range(size):
        element = int(input("Element {}: ".format(i + 1)))
        array.append(element)

    key = int(input("Enter the key to search for: "))

    result = binarySearch(array,key,0,len(array) - 1)

    if(result == -1):
        print("The key {} is not found.".format(key))
    else:
        print("The key {} is found at index {}.".format(key, result))


if __name__ == "__main__":
    main()