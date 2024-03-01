def linearSearch(array,key):
    for i in range(len(array)):
        if array[i] == key:
            return i
    return -1

def main():
    size = int(input("Enter the size of the array: "))
    array = []

    # Input the elements of the array
    for i in range(size):
        element = int(input("Element {}: ".format(i + 1)))
        array.append(element)

    key = int(input("Enter the key to search for: "))

    # Perform Linear Search
    result = linearSearch(array,key)

    if(result == -1):
        print("The key {} is not found.".format(key))
    else:
        print("The key {} is found at index {}.".format(key, result))

if __name__ == "__main__":
    main()