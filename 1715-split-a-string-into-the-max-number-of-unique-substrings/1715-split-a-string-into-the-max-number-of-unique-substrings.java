class Solution {
    public int maxUniqueSplit(String s) {
        return solve(0,s,new HashSet<>());
    }
    public int solve(int start, String s, Set<String>set){
        int n=s.length();
        int maxi=0;
        if(start==n) return 0;
        for(int i=start+1;i<=n;i++){
            String sub=s.substring(start,i);
            if(!set.contains(sub)){
                set.add(sub);
                int splits=1+solve(i,s,set);
                maxi=Math.max(maxi,splits);
                set.remove(sub);
            }

        }
        return maxi;
    }
}