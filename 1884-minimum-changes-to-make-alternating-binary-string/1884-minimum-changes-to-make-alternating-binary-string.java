class Solution {
    public int minOperations(String s) {
        int firstPattern=0;
        int secPattern=0;

        for(int i=0 ; i<s.length() ; i++){
            if(s.charAt(i)!='0'){
                firstPattern++;
            }

            i++;
            if(i>=s.length()) break;

            if(s.charAt(i)!='1'){
                firstPattern++;
            }
        }

        for(int i=0 ; i<s.length() ; i++){
            if(s.charAt(i)!='1'){
                secPattern++;
            }

            i++;
            if(i>=s.length()) break;

            if(s.charAt(i)!='0'){
                secPattern++;
            }
        }

        return Math.min(firstPattern, secPattern);

    }
}