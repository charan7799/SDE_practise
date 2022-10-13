def findDuplicate(arr:list, n:int):
    # Write your code here.
    # Returns an integer.
    fast = arr[0]
    slow = arr[0]
    
    fast = arr[arr[fast]]
    slow = arr[slow]
    while slow != fast:
        fast = arr[arr[fast]]
        slow = arr[slow]
        
    fast = arr[0]
    while slow != fast:
        fast = arr[fast]
        slow = arr[slow]

    return fast

if __name__ == '__main__':
    arr = [1,2,3, 5, 5, 4]
    print(findDuplicate(arr, 6))