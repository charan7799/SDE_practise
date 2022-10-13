def maximumProfit(prices):
    # Write your code here.
    min_price = 10e9
    max_pro = 0
    for i in prices:
        min_price = min(min_price, i)
        max_pro = max(max_pro, i-min_price)
    return max_pro

    
arr = [7,1,5,3,6,4]
print("the maxprofit for the given stocks is ", maximumProfit(arr))