#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int casos;
double oa, od, oda, obc;
double noc, ndc, nob, nab;
double x, y;
double oc, ob;

int main(){
    
    scanf("%d", &casos);
    oc=36.0;
    ob=32.0;
    obc=288.0;
    while(casos--){
        scanf("%lf%lf%lf%lf", &oa, &od, &oda, &obc);
        //scin>>oa>>od>>oda>>obc;
        oc=oa/sqrt(oda/obc);
        ob=od/sqrt(oda/obc);
        x = oc-od;
        y = ob-oa;
        printf("%.8lf %.8lf\n", x, y);
        //cout << x << " " << y << "\n";
    }
    
}
