class Solution {
    public int countSubstrings(String s) {
        int count=0;

        for(int i=0 ; i<s.length() ; i++){
            int p1=i;
            int p2=i;

            while(p1>=0 && p2<s.length()){
                if(s.charAt(p1)!=s.charAt(p2)){
                    break;
                }
                p2++;
                p1--;
                count++;
            }

            p1=i;
            p2=i+1;

            while(p1>=0 && p2<s.length()){
                if(s.charAt(p1)!=s.charAt(p2)){
                    break;
                }
                p2++;
                p1--;
                count++;
            }
        }

        return count;
    }
}