// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


 // } Driver Code Ends
//User function Template for C

bool arraySortedOrNot(int arr[], int n) {
    if(n==0||n==1)
    return 1;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i] )
        return 0;
    }
        
        return 1;
    
    
    
    
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        bool ans = arraySortedOrNot(arr, n);
        printf("%d\n", ans);

    }
    return 0;
}  // } Driver Code Ends