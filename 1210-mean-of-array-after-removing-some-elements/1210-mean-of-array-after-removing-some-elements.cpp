class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int per5=n*0.05;
        double sum=0,c=0;
        for(int i=per5;i<n-per5;i++){
            sum+=arr[i];
            c++;
        }
        return sum/c;

    }
};