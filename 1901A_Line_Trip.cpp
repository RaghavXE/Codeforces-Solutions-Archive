#include <bits/stdc++.h>
using namespace std;
int main(){
    int nT = 0;
    cin >> nT;
    for(int t = 0; t < nT; t++){
        int noGst;
        int target;
        cin >> noGst;
        cin >> target;
        int gst[noGst];
        for(int i = 0; i < noGst; i++){
            cin >> gst[i];
        }
        // if (noGst == 1){
        // cout << (target*2) << endl; continue;}
        int max1 = 0;
        for(int i = 0; i < noGst-1; i++){
            // if((gst[i+1] - gst[i]) > max1)max1 = gst[i+1] - gst[i];
            max1 = max(max1, gst[i+1] - gst[i]);
        }
        max1 = max(max1, gst[0]);
        int max2 = 2*(target - gst[noGst-1]);
        cout << max(max1, max2) << endl;
    }
}