# include <iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     for(int row =0;row <n;row++){
        for(int col=0;col<n-1-row;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
     }


     cout<<endl<<endl<<endl;

     for(int row=0;row<n;row++){
        for(int col=0;col<row;col++)
        {cout<<"* ";

        }
        for(int col=0;col<n-row;col++){
            cout<<" ";
        }
        cout<<"\n";
     }
}
