 #include <iostream>  
 using namespace std;

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


// Max & MIn in an array 

int arr[5];
srand(time(0));
cout<<"Array is : ";
for (int i = 0; i < 5; i++)
{
    arr[i]= rand()%10;
   
    cout<<arr[i]<<" ";
}

cout<<endl;

int min = INT16_MAX, max=INT16_MIN;

for (int i = 0; i < 5; i++)
{
    if (arr[i]>max)
    {
        max=arr[i];
    }
    if (arr[i]<min)
    {
        min=arr[i];
    }
    
    
}
cout<<"Max : "<<max<<endl;
cout<<"Min : "<<min<<endl;













     return 0;

 }