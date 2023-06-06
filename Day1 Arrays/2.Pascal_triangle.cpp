//Type-1 ,just to print a particular element given row and col
//Using n-1Cr-1

//TC:O(r)
//SC:O(1)
void pascal(int n,int r){
  int res=1;
  for(int i=0;i<r;i++){
    res=res*(n-i);
    res=res/(i+1);
  }
}

//Type -2 ,Given row no. print the entire row
//n row has n elements
//For logic u can refer to the attached image in this folder

//TC:O(n)
//SC:O(1)
void row_pascal(int n){
  int ans=1;
  cout<<ans<<" ";
 for(int i=1;i<n;i++){
   ans=ans*(n-i);
   ans=ans/i;
   cout<<ans<<" ";
}
  
 //Type -3 ,Print the entire pascal's triangle
  //Using the row gnerate apporach only for no. of row times
  //TC:O(n^2)
  //SC:O(1)
 
  class Solution {
public:
    vector<int>generate_row(int row){
         vector<int>temp;
            long long ans=1;
            temp.push_back(ans);
            for(int col=1;col<row;col++){
                ans*=(row-col);
                ans/=col;
                temp.push_back(ans);
            }
            return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i=1;i<=numRows;i++){

            ans.push_back(generate_row(i));
        }
        return ans;
    }
};
