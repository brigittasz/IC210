#include <iostream>
using namespace std;

int main(){
    //get input number
    char N, j; 
    int n;
    cin>>N>>j>>n;

    //get input for x and y
    char first,second; 
    double* x = new double[n];
    double* y = new double[n];

    cin>>first>>j>>j;
    for(int i = 0; i<n; i++){
        cin>>x[i]>>j;
    }

    cin>>second>>j>>j;
    for(int i = 0; i<n; i++){
        cin>>y[i]>>j;
    }

    //print dot product
    cout<<"<"<<first<<","<<second<<"> = ";
    double sum = 0;
    for(int i = 0; i<n; i++){
        if(i<n-1){

            if(x[i]<0)
                cout<<"("<<x[i]<<")";
            else
                cout<<x[i];

            cout<<" * ";

            if(y[i]<0)
                cout<<"("<<y[i]<<")";
            else
                cout<<y[i];
            cout<<" + ";

            sum += x[i]*y[i];
        }
        else
        {
            if(x[i]<0)
                cout<<"("<<x[i]<<")";
            else
                cout<<x[i];
            cout<<" * ";
            if(y[i]<0){
                cout<<"("<<y[i]<<")";
            }
            else
                cout<<y[i];

            sum += x[i]*y[i];

            cout<<" = "<<sum<<endl;
        }
    }

    cout<<"<"<<second<<","<<first<<"> = ";
    double* temp = y;
    y = x; 
    x = temp;
    double sum1 = 0;
    for(int i = 0; i<n; i++){
        if(i<n-1){

            if(x[i]<0)
                cout<<"("<<x[i]<<")";
            else
                cout<<x[i];

            cout<<" * ";

            if(y[i]<0)
                cout<<"("<<y[i]<<")";
            else
                cout<<y[i];
            cout<<" + ";

            sum1 += x[i]*y[i];
        }
        else
        {
            if(x[i]<0)
                cout<<"("<<x[i]<<")";
            else
                cout<<x[i];
            cout<<" * ";
            if(y[i]<0){
                cout<<"("<<y[i]<<")";
            }
            else
                cout<<y[i];

            sum1 += x[i]*y[i];

            cout<<" = "<<sum<<endl;
        }
    }

}
