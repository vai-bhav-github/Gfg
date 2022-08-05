// // Searching
// #include <iostream>
// #include<cmath>
// using namespace std;

// int searching(int arr[],int n, int x)
// {
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[5]={1,2,256,84,235};
//     int size = 5;
//     cout<<searching(arr,size,84);
//     return 0;

// }




// //Insertion

// #include <iostream>
// #include<cmath>
// using namespace std;

// void insertion(int arr[],int n, int index,int element,int capacity)
// {
//     for(int i=index;i<=n;i++){
//         arr[i+1]=arr[i];
//     }
//     arr[index]=element;
// }

// int main()
// {
//     int arr[6]={1,2,256,84,235};
//     int size = 5, element=25 , capacity=6;
//     insertion(arr,size,5,element,capacity);
//     size+=1;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }





// //Delection

// #include <iostream>
// #include<cmath>
// using namespace std;

// void deletion(int arr[],int n, int index,int element,int capacity)
// {
//     for(int i=index+1;i<=n;i++){
//         arr[i-1]=arr[i];
//     }
//     // arr[index]=element;
// }

// int main()
// {
//     int arr[6]={1,2,256,84,235};
//     int size = 5, element=25 , capacity=6,index=2;
//     deletion(arr,size,index,element,capacity);
//     size-=1;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }




// //Largest Element(Efficient Solution)

// #include <iostream>
// #include<cmath>
// using namespace std;

// int largestNumber(int arr[],int n)
// {
//     int res = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[res]){
//             res=i;
//         }
//         // return i;
//     }
//     return res;
// }

// int main()
// {
//     int arr[6]={1,2,256,84,235};
//     int size = 5,index=2;
//     cout<<largestNumber(arr,size);
//     // for(int i=0;i<size;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     return 0;

// }




// //secondLargest

// #include <iostream>
// #include<cmath>
// using namespace std;

// void all(int arr[],int n)
// {
//     int Largest = -10000;
//     int secondLargest = -10000;
//     for(int i=0;i<n;i++){
//         if(arr[i]>Largest){
//             secondLargest= Largest;
//             Largest=arr[i];
            
//         } else if(arr[i]>secondLargest && arr[i]<Largest){
//             secondLargest=arr[i];
//         }
//     }
//     cout<<secondLargest;
// }

// int main()
// {
//     int arr[7]={10,20,20,30,30,30,25};
//     int size = 7,index=2;
//     all(arr,size);
//     // for(int i=0;i<size;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     return 0;

// }





// // sorted(Naive solution)

// #include <iostream>
// #include<cmath>
// using namespace std;

// int sorted(int arr[],int n)
// {
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 return -1;
//             }
//         }
       
//     }
//     return 1;
// }

// int main()
// {
//     int arr[5]= {2,5,10,25,6};
//     int size=5;
//     cout<<sorted(arr,5);

// return 0;
// }




// //Sorted(Effective Solution)


// #include <iostream>
// #include<cmath>
// using namespace std;

// void all(int arr[],int n)
// {
//     bool flag= true;
//     for(int i=0;i<n;i++){
        
//         if(arr[i]>arr[i+1]){
//             flag=false;
//             break;
//         }
       
//     }
//      if(flag){
//             cout<<"Yes";
//         } else{
//             cout<<"No";
//         }
// }

// int main()
// {
//     int arr[7]={10,20,20,30,30,30,25};
//     int size = 7,index=2;
//     all(arr,size);
//     // for(int i=0;i<size;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     return 0;

// }




// //Reverse

// #include <iostream>
// #include<cmath>
// using namespace std;

// void all(int arr[],int n)
// {
//     int low=0,high=n-1;
//     while(low<high){
//         int temp = arr[low];
//         arr[low]=arr[high];
//         arr[high]=temp;
//         low++;
//         high--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int arr[7]={10,20,20,30,30,30,25};
//     int size = 7,index=2;
//     all(arr,size);

//     return 0;

// }




// // Remove Duplicate In Sorted Array

// #include <iostream>
// #include<cmath>
// using namespace std;

// void all(int arr[],int n)
// {
//    int temp[n];
//    temp[0]=arr[0];
//    int result=1;
//    for(int i=1;i<n;i++){
//     if(temp[result-1]!=arr[i]){
//         temp[result]=arr[i];
//         result++;
//     }


//     }
//     // for(int i=0;i<result;i++){
//     //     temp[i]=arr[i];
//     // }
//         for(int i=0;i<result;i++){
//             cout<<temp[i]<<" ";
//         }

//    }

   


// int main()
// {
//     int arr[7]={10,20,20,25,30,30,30};
//     int size = 7,index=2;
//     all(arr,size);

//     return 0;

// }




// // Move Zeros To End

// #include <iostream>
// #include<cmath>
// using namespace std;

// void all(int arr[],int n)
// {
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[count]);
//             count++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
       
// }

   


// int main()
// {
//     int arr[7]={1,0,6,5,0,1,9};
//     int size = 7,index=2;
//     all(arr,size);

//     return 0;

// }







