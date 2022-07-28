/* Add the given array. 

 array1[1,2,3,4]
 array2[6]

 ans[1,2,4,0]
*/


#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_ans(vector<int> v)
{
    int start =0;
    int end= v.size()-1;

    while (start<end)
    {
        swap(v[start++],v[end--]);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return v;
}


int main()
{
    vector<int> nums1= {1,2,3,9};
    vector<int> nums2= {2,3,4};
    vector<int> ans;
    int i =nums1.size()-1;
    int j =nums2.size()-1;
    int carry =0;

    while (i>=0 && j>=0)
    {
        int val1 = nums1[i];
        int val2 = nums2[j];

        int sum = val1 + val2 + carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i>=0)
    {
        int sum = nums1[i] + carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while (j>=0)
    {
        int sum = nums2[j] + carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }


    reverse_ans(ans);

    
    
    cout<<endl;


    return 0;
}