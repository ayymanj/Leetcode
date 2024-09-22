class Solution {
    public boolean isPalindrome(int x) {
        String temp = "";
        String s = Integer.toString(x);
        char [] arr = s.toCharArray();
        for(int i = arr.length-1; i >= 0; i-- ){
            temp+=arr[i];
        }
        if(s.equals(temp)){
            return true;
        }
        else
            return false;
    }
}