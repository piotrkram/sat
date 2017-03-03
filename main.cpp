#include <bits/stdc++/h>

using namespace std;

vector<int>G[1000];

int main()
{ios_base::sync_with_stdio(0);
cin.tie(0);

int a;
char b;
int n;
cin>>n;
int akt=0;
for(int i=0; i<2*n-1; i++){

    if(i%2==0){

    akt++;

      cin>>a[i];

    if(a[i]<0){

    jest[n-a[i]]=1;

    }

    else

    jest[a[i]]=1;

    /*if(b[i]=="^"){

      akt++;

    }

      G[akt].push_back(a[i]);*/

    }

    else
    {

    cin>>b[i];
    if(b[i]=="^"){

        if(akt==1){

        if(a[i-1]<0){

            znak[-a[i-1]]=-1;

            pewny[-a[i-1]]=1;


        }

        }

    }

    }



}

for(int i=0; i<=2*(n-1); i+=2){


    if(jest[a[i]]==0){

        znak[a[i]]=-1;


    }

    else

    znak


}
    return 0;
}
