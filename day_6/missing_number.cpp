#include<iostream>
using namespace std;
int main(){
    int N;
    int A[N];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int sum=(N)*(N+1)/2;
    int suma=0;
    for(int i=0;i<N-1;i++){
        suma+=A[i];
    }
    cout<<sum-suma;
return 0;
}
