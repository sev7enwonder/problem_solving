class Solution {
public:
    string longestPalindrome(string s) {
        int l=s.length(),ans=1,id=0;
        vector<vector<int>>dp(l,vector<int>(l));
        for(int i=0;i<l;i++) dp[i][i]=1;
        for(int ln=2;ln<=l;ln++){
            for(int i=0;i+ln-1<l;i++){
               int j=i+ln-1;
               if(s[i]==s[j]){
                   if(ln==2) dp[i][j]=ln;
                   else if(dp[i+1][j-1]) dp[i][j]=2+dp[i+1][j-1];
                   if(ans<dp[i][j]){
                       ans=dp[i][j];
                       id=i;
                   }
               }
            }
        }
        return s.substr(id,ans);
    }
};
