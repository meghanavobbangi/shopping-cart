#include<bits/stdc++.h>
using namespace std;

int main()
{
    int products_quantity;
    cin>>products_quantity;
    vector<int>amount_paid;
    vector<pair<int,string>>gst_found;
    for(int i=0;i<products_quantity;i++)
    {
        string product;
        cin>>product;
        int price;
        cin>>price;
        int gst;
        cin>>gst;
        int quantity;
        cin>>quantity;
        amount_paid.push_back(price*quantity);
        gst_found.push_back({((price*gst)/100),product});
        
    }
    int sum=0;
    for(int i=0;i<amount_paid.size();i++)
    {
        sum+=amount_paid[i];
    }
    int max_gst=INT_MIN;
    sort(gst_found.begin(),gst_found.end());
    string ans=gst_found[gst_found.size()-1].second;
    cout<<ans<<" "<<sum<<"\n";
    
    
}
