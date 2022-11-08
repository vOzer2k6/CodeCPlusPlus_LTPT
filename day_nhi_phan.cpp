#include<bits/stdc++.h>
using namespace std;
int a[10], n;
void nhap(){
    cin >> n;
}
void xuat(){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << endl;
}
void xuly(int i){
    for(int j=0; j<=1; j++){
        a[i]=j;
        if(i==n){
            xuat();
        }
        else xuly(i+1);
    }
}

int main(){
    nhap();
    xuly(1);
	return 0;
}
