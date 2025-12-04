class Solution {
    public int minOperations(String[] logs) {
        int count=0;

        for(String it : logs){
            
            if(it.equals("../")){
                if(count>0){
                    count--;
                }
            } 
            else if(it.equals("./")) continue;
            else count++; 
        }

        return Math.max(0,count);
    }
}