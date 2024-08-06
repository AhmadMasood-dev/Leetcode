class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
     int length = arr.size();
     int count=0;
     bool flag=false;
     int i,j;
     vector<string> array;
        for ( i = 0; i < length; i++) {
            for ( j = 0; j < length; j++) {
                if (arr[i] == arr[j]){
                    if(i==j){
                        continue;
                    }
                 flag=true;
                  break;

                } 
            }
            if(flag==true){
            flag=false;

            continue;
            }

              array.push_back(arr[i]);
            
        }   
       if(k>array.size())
       return "";
       else
       return array[k-1];

    }
};