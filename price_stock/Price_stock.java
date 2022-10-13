import java.util.* ;

import java.util.ArrayList;

public class Price_stock{
    public static int maximumProfit(ArrayList<Integer> arr){
        // Write your code here.
        // Write your code here.
        int min_price = Integer.MAX_VALUE;
        int max_pro = 0;
        int i;
        for(i=0; i<arr.size(); i++){
            min_price = Math.min(min_price, arr.get(i));
            max_pro = Math.max(max_pro, arr.get(i)-min_price);
        }
        return max_pro;
    }


public static void main(String[] args){
    new Price_stock();
    ArrayList<Integer> arr = new ArrayList<Integer>(Arrays.asList(7,1,5,3,6,4));
    System.out.println("the maxprofit for the given stocks is "+maximumProfit(arr));
}

}