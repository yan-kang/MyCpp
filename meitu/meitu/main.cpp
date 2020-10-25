//
//  main.cpp
//  meitu
//
//  Created by kang on 2020/10/22.
//

#include <iostream>

int FindNumber(int * pArray, int nCount, int p){
    int left,right,ret = -1;
    for(int i = 0;i < nCount;i++){
        if(p < pArray[0]){
            ret =  pArray[0];
        }
        else{
            if(pArray[i] == p) {
                ret = pArray[i];
                break;
            
            }
            if(pArray[i] < p && pArray[i+1] > p){
                left = pArray[i];
                right = pArray[i+1];
                ret = (p - left) < (right - p) ? left : right ;
                break;
            }
            if(i == nCount -1 && p!= pArray[nCount-1]){
                ret = pArray[nCount-1];
            }
        }
    }
    return ret;
}
    
int findSec(int arr[],int nCount){
    for(int i = 0;i<2;i++){
        for(int j = 0;j < nCount-i-1;j ++){
            int temp=0;
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    return arr[nCount-2];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[]={10,2,3,4,7,8,9};
    //int num = FindNumber(arr, 7, 0);
    int sec = findSec(arr,7);
    std::cout<<sec<<std::endl;
    std::cout << "Hello, World!\n";
    return 0;
}
