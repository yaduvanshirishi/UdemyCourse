#include<bits/stdc++.h>
using namespace std;

int arr[1000],num;
int BinarySearch(int x){
    int left=1;
    int right=num;
    int mid;
    while(left<=right){
        mid =(left+right)/2;
        if(arr[mid]==x) return mid;
        else if(x<arr[mid]) right=mid-1;
        else left=mid+1;
        
    }
    return -1;

}

int main()
{
    /* code */
    
    scanf("%d",&num);
    for(int i=1;i<=num;++i)
    cin>>arr[i];
    cout<<BinarySearch(19)<<endl;
    return 0;
}
