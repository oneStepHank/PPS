class Solution {
    boolean solution(String s) {
        
        s = s.toUpperCase();
        int count_p = 0;
        int count_y = 0;
        
        for(int i = 0 ; i < s.length(); i++){
            if(s.charAt(i) == 'P')
                count_p++;
            else if(s.charAt(i) == 'Y')
                count_y++;
        }
        
        return count_p == count_y;
    }
}