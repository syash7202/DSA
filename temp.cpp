 #include <iostream>  
 using namespace std;

// recrusive code function for line 168
int sumWithRecursion(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        int remainingarr=sumWithRecursion(arr+1, size-1);
        int ans = arr[0] + remainingarr;
        return ans;
    }

}


 int main()
 {


//  Bitwise operators
//    int a =10;
//    int b=15;

//    cout<<"a & b " << (a&b )<<endl;
//    cout<<"a | b " << (a|b) <<endl;
//    cout<<"~a  " << ~a  <<endl;
//    cout<<"a ^ b " << (a^b) <<endl;
    



//  Sum from 1 to n
    // int n, sum =0;
    // cin>>n;


    // for(int i= 1; i<=n; i++)
    // {
    //     sum+=i;
       
    // }

    // cout<<"Sum upto "<<n<<" is = "<<sum << endl;




// Fibonacci series

// int n;
// cin>>n;
// int a=0,b=1;
// cout<<a<<" "<<b;
//  for(int i=0; i<+n; i++)
//  {
//     int next_num= a+b;
//     cout<<" "<<next_num;
//     a=b;
//     b=next_num;
//  }


//  Prime number or not

// int n;
// cin>>n;

// bool isPrime=1;

// for (int i = 2; i <= n-1; i++)
// {
//     if (n%i==0)
//     {
//         isPrime=0;
//         break;

//     }
  
// }

// if (isPrime ==0)
// {
//     cout<<"not prime"<<endl;
// }
       
// else
// {
//     cout<<"Prime number"<<endl;
// }

// Difference of  product  and  sum of digits

// int n;
// cin>>n;
// int prod=1,sum=0;
// while (n!=0)
// {
//     int digit= n%10;
//     prod=prod*digit;
//     sum=sum+digit;
//     n=n/10;
// }

// int answer = prod -sum;
// cout<< answer;



// Number of 1's bits

// while (n!=0)
// {
    
// }


// Initialization of an array with any single value using STL -> fill_n function 

// int a [10];
// fill_n(a,10,1);
// for(auto i : a)
// {
    // cout << i << " ";
// }


// // Max & MIn in an array 

// int arr[5];
// srand(time(0));
// cout<<"Array is : ";
// for (int i = 0; i < 5; i++)
// {
//     arr[i]= rand()%10;
   
//     cout<<arr[i]<<" ";
// }

// cout<<endl;

// int min = INT16_MAX, max=INT16_MIN;

// for (int i = 0; i < 5; i++)
// {
//     if (arr[i]>max)
//     {
//         max=arr[i];
//     }
//     if (arr[i]<min)
//     {
//         min=arr[i];
//     }
    
    
// }
// cout<<"Max : "<<max<<endl;
// cout<<"Min : "<<min<<endl;

// this was a test run

//  sum of elements in array using recursion 

    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i]= rand()%10;
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    // cout<<sumWithRecursion(arr,10)<<endl;

    string word1 = "abc", word2 = "pqr";

    int len1 = word1.length() -1;
    int len2 = word2.length() -1;

    cout<<len1<<" "<<len2<<endl;

    string ans;

    while (len1>-1 && len2>-1)
    {
        for (int i = 0; i < len1+len2; i++)
        {
            if (i==0 || i%2 ==0)
            {
                ans+=word1[i];
                len1--;
            }
            else{
                ans+=word2[i];
                len2--;
            }
            
        }
         
        
    }

    while (len1>-1)
    {
        ans+=word1[len1--];
    }
    
    while (len2>-1)
    {
        ans+=word2[len1--];
    }
    

    // ans+="abcdef";
    cout<<ans<<endl;


     return 0;

 }
