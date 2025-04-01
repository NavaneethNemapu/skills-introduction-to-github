#include<iostream>
using namespace std;

void swap(int *a,int *b){
int t=*a;
*a=*b;
*b=t;}

int main(){
int n;
cout<<"no of proceses";
cin>>n;

int a[n],b[n],c[n],w[n],t[n];
for(int i=0;i<n;i++){
cout<<"process id"<<i+1<<endl;
cout<<"arrival time and burst time"<<endl;
cin>>a[i]>>b[i];}

for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
swap(&a[j],&a[j+1]);
swap(&b[j],&b[j+1]);}}}

c[0]=a[0]+b[0];
for(int i=1;i<n;i++){
if(c[i-1]<a[i]){
c[i]=a[i]+b[i];}
else{
c[i]=c[i-1]+b[i];}}

for(int i=0;i<n;i++){
t[i]=c[i]-a[i];
w[i]=t[i]-b[i];}

float tt=0,wt=0;
for(int i=0;i<n;i++){
tt=tt+t[i];
wt=wt+w[i];}

cout<<"average turn around time is "<<(float)tt/n<<endl;
cout<<"average waiting time is "<<(float)wt/n<<endl;

return 0;}

