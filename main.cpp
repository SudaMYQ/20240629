#include <iostream>

using namespace std;

int main()
{
    int m,n,i,j,p,q;
    bool flag=1,f1=0,f2=0;
    int a[10][10];
    cout<<"Please input m,n:";
    cin>>m>>n;
    cout<<"Please input array:"<<endl;
    for(i=0;i<m;++i)
    for(j=0;j<n;++j)
        cin>>a[i][j];


    for(i=0;i<m;++i)
    for(j=0;j<n;++j){
            f1=0;
            f2=0;
        for(p=0;p<n;++p)
            if(a[i][p]>a[i][j]) f1=1;
        if(!f1){
            for(q=0;q<m;++q)
                if(a[i][j]>a[q][j]) f2=1;
            if(!f2){
                cout<<"mat["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
                flag=0;
            }
        }
    }
    if(flag) cout<<"Not Found"<<endl;
    return 0;
}
