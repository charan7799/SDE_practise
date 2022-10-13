def missingAndRepeating(arr, n):
    # Write your code here
    sum_arr = 0
    ssq_arr = 0
    sum = n*(n+1)/2.0
    ssq = n*(n+1)*(2*n+1)/6.0
    
    for i in range(n):
        sum_arr += arr[i]
        ssq_arr += arr[i]**2
    x = (ssq-ssq_arr)/(sum- sum_arr) + (sum- sum_arr)
    x = x/2
    y = x-(sum- sum_arr)
    
    return int(x),int(y)

if __name__ == '__main__':
    arr = [1,2,2,5,4]
    print(missingAndRepeating(arr, 5))