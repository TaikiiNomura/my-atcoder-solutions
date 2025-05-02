#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K,A[1<<20],mod=1e9;
    cin>>N>>K;
    long long sum=K;
    for(int i=0;i<=N;i++)
    {
        if(i<K)A[i]=1;
        else
        {
            A[i]=sum;
            sum+=A[i];
            sum-=A[i-K];
            sum=(sum+mod)%mod;
        }
    }
    cout<<A[N]<<'\n';
}