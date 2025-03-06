class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n=grid.length;
        int size=n*n;
        int expected_sum=(size*(size+1))/2;
        int actual_sum=0;
        int repeated_no=-1;
        int missing_no=-1;
        HashSet<Integer> set=new HashSet<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num=grid[i][j];
                if(set.contains(num)){
                    repeated_no=num;
                }
                    set.add(num);
                    actual_sum+=num;
            }
        }
        missing_no=expected_sum-(actual_sum-repeated_no);
        return new int[]{repeated_no, missing_no};

}
}