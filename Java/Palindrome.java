package com.company;
//https://leetcode.com/problems/palindrome-number/
public class PalindromeNum9 {
    public static void main(String[] args) {
        boolean ans = isPalindrome(12);
        System.out.println(ans);
    }
    static boolean isPalindrome(int x) {
        if(x<0) return false;

        int ans = 0;
        int num = x;
        //condition to check palindrome num;
        while(num >0){
            ans = ans * 10 + num % 10;
            num = num / 10;
        }
        if(ans == x) return true;
        return false;
    }
}
