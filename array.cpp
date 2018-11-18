#include <iostream>

 int main(){
 int size;
 std::cout<<"Enter size of array"<<std::endl;
 std::cin>>size;
 std::cout<<"Enter the numbers"<<std::endl;
 int* arr=new int[size];
   for(int i=0;i<size;i++)
       {std::cin>>arr[i];}
       int a=0;
       int b=size-1;
        if(size%2!=0)
         while(a!=b)
         {int u;
          u=arr[a];
          arr[a]=arr[b];
          arr[b]=u;
          a++;
          b--;}
               
        else
         {while(a<b)
          {int u;
           u=arr[a];
           arr[a]=arr[b];
           arr[b]=u;
           a++;
           b--;}
                }
     std::cout<<"New array will be:";
     for(int i=0;i<size;i++)
     {std::cout<<arr[i];}
    
 delete [] arr; 
}  
