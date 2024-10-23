class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int ans = 0;
        for (String i : operations){
            if (i.equals("--X") || i.equals("X--")){
                ans--;
            }
            if (i.equals("++X") || i.equals("X++")){
                ans++;
            }
        }
        return ans;
    }
}