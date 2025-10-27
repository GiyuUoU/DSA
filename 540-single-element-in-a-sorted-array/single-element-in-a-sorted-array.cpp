class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        
        if (n == 1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n-1] != arr[n-2]) return arr[n-1];
        
        int low = 1, high = n - 2;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            
            // this means arr[mid] is the single element
            if (arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            }
            
            // if mid is even and matches next OR mid is odd and matches previous
            if ((mid % 2 == 0 && arr[mid] == arr[mid+1]) ||
                (mid % 2 == 1 && arr[mid] == arr[mid-1])) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        
        return -1; // should not reach here
    }
};