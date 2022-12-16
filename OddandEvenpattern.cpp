#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(n%2!=0)
            {
                if(j==1&&i==1)
                {
                    cout<<"0"<<" ";
                }
                else if(j%2==1)
                {
                    cout<<"1"<<" ";
                }
                else{
                    cout<<"0"<<" ";
                }
            }
            else{
                if(i%2==1&&j%2==1){
                    cout<<"1"<<" ";
                }
                else if(i%2==0&&j%2==0){
                    cout<<"0"<< " ";
                }
            }
        }
        cout<<endl;
    }
}