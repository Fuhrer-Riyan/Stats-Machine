//Abdul Riyan
//Orange Inc.

#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int sum=0,mean,val,median_1=0,median_2=0,over;
    double element;
    
    cout<<"Welcome to Statistics Machine : ";
    cout<<"Press the corresponding number to perform a task :\n1. Mean\n2. Median\n3. Mode\n";
    cout<<"Your Input : ";
    cin>>val;

    vector<double> v;
    
    cout<<"Enter the elements of the data stream & press -1 once you are done : \n";
    while(true){
        cin>>element;
        if(element==-1){
            break;
        }else{
            v.push_back(element);
        }
    }

    v.pop_back();
    sort(v.begin(),v.end());
    int size=v.size()+1;


    if(val==1){
        for(int i=0;i<size;i++){
            sum+=v[i];    
        }
        mean=sum/size;
        cout<<"\nThe mean of the data stream is : "<<mean;
    }else if(val==2){
            if(size%2==0){
                median_1= (size/2)-1;
                median_2 = (size/2);
            }else{
                median_1=(size)/2;
            }

            if(size%2==0){
                cout<<"The median of the given data stream is : "<<v[median_1]<<" and "<<v[median_2];
            }else{
                cout<<"The median of the given data stream is : "<<v[median_1];
            }
    }else if(val==3){
        unordered_map<int, int> freq;
        for (int i = 0; i < size; i++) {
            freq[v[i]]++;
            }
    
        int mode = -1;
        int max_freq = 0;
        for (auto f : freq) {
            if (f.second > max_freq) {
                mode = f.first;
                max_freq = f.second;
            }
        }
        
        cout << "The mode of the given data stream is: " << mode << endl;
    }

    cout<<"\nPress 0 to close the application : ";
    cin>>over;

    return 0;

}












    